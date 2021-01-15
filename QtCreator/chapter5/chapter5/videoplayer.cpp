#include "videoplayer.h"
#include "ui_videoplayer.h"
#include <QBoxLayout>
#include <QFileDialog>
#include <QTimer>

QTimer * timer;
int maxValue = 1000;

VideoPlayer::VideoPlayer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VideoPlayer)
{
    ui->setupUi(this);
    this->setWindowTitle("189050602视频播放");

    QWidget *widget = new QWidget;
    this->setCentralWidget(widget);

    player = new QMediaPlayer;

    videoWidget = new QVideoWidget(widget);
    player->setVideoOutput(videoWidget);

    //水平布局，控制按钮、进度条
    QBoxLayout *pathLayout = new QHBoxLayout;
    pathLayout->addWidget(ui->label);
    pathLayout->addWidget(ui->lineEdit);

    QBoxLayout *ctlLayout = new QHBoxLayout;
    ctlLayout->addWidget(ui->playBtn);
    ctlLayout->addWidget(ui->position);
    ctlLayout->addWidget(ui->progressBar);
    ctlLayout->addWidget(ui->voice);
    ctlLayout->addWidget(ui->voiceSlider);

    //垂直布局：视频播放器、进度条、控制按钮布局
    QBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(pathLayout);
    mainLayout->addWidget(videoWidget);
    mainLayout->addLayout(ctlLayout);

    //设置布局
    widget->setLayout(mainLayout);
    videoWidget->setFocusPolicy(Qt::StrongFocus);

    //启用slider并设置范围
    ui->progressBar->setEnabled(true);
    ui->progressBar->setRange(0,maxValue);

    timer = new QTimer();
    timer->setInterval(50);//如果想看起来流畅些，可以把时间间隔调小，如100ms

    //将timer连接至onTimerOut槽函数
    connect(timer,SIGNAL(timeout()),this,SLOT(onTimerOut()));

    //载入视频
    QString fileName = QFileDialog::getOpenFileName(this,tr("选择想打开的视频文件"), "","MP4 Files(*.mp4)");
    ui->lineEdit->setText(fileName);
    player->setMedia(QUrl::fromLocalFile(fileName));
    player->play();
    player->pause();
    ui->position->setText("00:00");
}

void VideoPlayer::setPosTime(qint64 time)
{
    int m,s;
    time /= 1000;  //获得的时间是以毫秒为单位的
    m = time/60;
    s = time%60;
    ui->position->setText(QString("%1:%2").arg(m,2,10,QLatin1Char('0')).arg(s,2,10,QLatin1Char('0')));  //把int型转化为string类型后再设置为label的text
}

void VideoPlayer::onTimerOut()
{
    ui->progressBar->setValue(player->position()*maxValue/player->duration());
    setPosTime(player->position());
}

VideoPlayer::~VideoPlayer()
{
    delete ui;
}

void VideoPlayer::on_playBtn_clicked()
{
    if(m_playerState == QMediaPlayer::PlayingState){
        player->pause();
        m_playerState = QMediaPlayer::PausedState;
        ui->playBtn->setStyleSheet("QPushButton{border-image:url(:/img/images/playing.svg)}");
    }else{
        player->play();
        m_playerState = QMediaPlayer::PlayingState;
        timer->start();
        ui->playBtn->setStyleSheet("QPushButton{border-image:url(:/img/images/pause.svg)}");
    }
}

void VideoPlayer::on_progressBar_sliderMoved(int position)
{
    timer->stop();
    player->setPosition(position*player->duration()/maxValue);
}

void VideoPlayer::on_progressBar_sliderReleased()
{
    //用户释放滑块后，重启定时器
    timer->start();
}

void VideoPlayer::on_progressBar_sliderPressed()
{
    player->setPosition(ui->progressBar->value()*player->duration()/maxValue);
}

void VideoPlayer::on_voiceSlider_sliderMoved(int position)
{
    player->setVolume(position);
}

void VideoPlayer::on_voice_clicked()
{
    if(ui->voiceSlider->value()>0){
        ui->voiceSlider->setValue(0);
        player->setVolume(0);
        ui->voice->setStyleSheet("QPushButton{border-image:url(:/img/images/voiceNo.svg)}");
    }else{
        ui->voiceSlider->setValue(50);
        player->setVolume(50);
        ui->voice->setStyleSheet("QPushButton{border-image:url(:/img/images/voice.svg)}");
    }
}
