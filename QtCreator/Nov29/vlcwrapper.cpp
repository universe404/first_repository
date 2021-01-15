#include "vlcwrapper.h"
#include <QDebug>
#include <QObject>
#include <QMutex>
static unsigned width,height;
static algorithm* algorithm;
VLCWrapper* VLCWrapper::self;
VLCWrapper::VLCWrapper(QWidget* target) {
    VLCWrapper::self = this;
        QObject::connect(this,SIGNAL(send_process_result(QString)),target,SLOT(set_text(QString)));
    if((instance=libvlc_new(0,nullptr))==nullptr) {
        emit send_process_result("Failed to create libVLC instance.");
        return;
    }
    if((player=libvlc_media_player_new(instance))==nullptr) {
        emit send_process_result("Failed to create libVLC player.");
        return;
    };
    //width = target->width();
    //height = target->height();
    //ugly!
    width = 600;
    height = 400;
    context.pixels = new uchar[width*height*4];
    memset(context.pixels, 0, width*height*4);
    algo = new statistic();
    algorithm = algo;

    emit send_process_result("VLC initialization done.");
}
VLCWrapper::~VLCWrapper() {
    delete[] context.pixels;
    libvlc_media_player_release(player);
    libvlc_release(instance);
    delete algo;
}
void* vlc_lock(void *data, void **p_pixels) {
    //VLC准备渲染一帧。
    Context *ctx = (Context *)data;
    ctx->mutex.lock();
    *p_pixels = ctx->pixels;
    return nullptr; // Picture identifier, not needed here.
}

void vlc_unlock(void *data, void *id, void *const *p_pixels) {
    //VLC完成渲染了一帧视频。
    Context *ctx = (Context *)data;
    unsigned char *pixel = (unsigned char *)*p_pixels;
    QImage image(pixel,width,height, QImage::Format_ARGB32);
    QString result = algorithm->checkImage(&image);
    emit VLCWrapper::self->send_process_result(result);
    ctx->mutex.unlock();
    (void)id;
}
void vlc_display(void *data, void *id) {
    //VLC想要播放一帧视频。
    (void)data;
    (void)id;
}
void VLCWrapper::openMedia(QString in) {
    if((media = libvlc_media_new_path(instance,in.toStdString().c_str()))==nullptr) {
        emit send_process_result("Open media failed.");
        return;
    };
    libvlc_media_player_set_media(player,media);
    libvlc_video_set_callbacks(player, vlc_lock, vlc_unlock, vlc_display, &context);
    libvlc_video_set_format(player, "RGBA", width, height, width * 4);
    libvlc_media_player_play(player);
}
