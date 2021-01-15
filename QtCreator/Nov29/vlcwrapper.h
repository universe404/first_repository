#ifndef VLCWRAPPER_H
#define VLCWRAPPER_H
#include <QTextEdit>
#include <vlc/vlc.h>
#include <QMutex>
#include "algorithm.h"
#include "statistic.h"
typedef struct {
    QMutex mutex;
    uchar *pixels;
} Context;
class VLCWrapper : public QObject
{
    Q_OBJECT
    public:
        VLCWrapper(QWidget* target);
        static VLCWrapper* self;
        ~VLCWrapper();
        void openMedia(QString in);
        void play();
        void pause();
    signals:
        void send_process_result(QString);
    private:
        libvlc_instance_t* instance=nullptr;
        libvlc_media_player_t* player=nullptr;
        libvlc_media_t* media=nullptr;
        bool initialization_finished=false;
        Context context;
        algorithm* algo;

};

#endif // VLCWRAPPER_H
