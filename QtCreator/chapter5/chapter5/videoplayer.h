#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include <QMainWindow>
#include <QVideoWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QString>
#include <QStringList>
#include <QKeyEvent>

namespace Ui {
class VideoPlayer;
}

class VideoPlayer : public QMainWindow
{
    Q_OBJECT

public:
    explicit VideoPlayer(QWidget *parent = 0);
    ~VideoPlayer();

private:
    Ui::VideoPlayer *ui;
    QMediaPlayer *player;
    QVideoWidget *videoWidget;
    QMediaPlayer::State  m_playerState;

private slots:
    void onTimerOut();
    void setPosTime(qint64 time);
    void on_playBtn_clicked();
    void on_progressBar_sliderMoved(int position);
    void on_progressBar_sliderReleased();
    void on_progressBar_sliderPressed();
    void on_voiceSlider_sliderMoved(int position);
    void on_voice_clicked();
};

#endif // VIDEOPLAYER_H
