/********************************************************************************
** Form generated from reading UI file 'videoplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPLAYER_H
#define UI_VIDEOPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoPlayer
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *playBtn;
    QLabel *position;
    QSlider *progressBar;
    QSlider *voiceSlider;
    QPushButton *voice;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VideoPlayer)
    {
        if (VideoPlayer->objectName().isEmpty())
            VideoPlayer->setObjectName(QStringLiteral("VideoPlayer"));
        VideoPlayer->resize(1000, 710);
        VideoPlayer->setMinimumSize(QSize(0, 0));
        VideoPlayer->setMaximumSize(QSize(1000, 710));
        centralwidget = new QWidget(VideoPlayer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 90, 22));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(140, 22, 113, 22));
        lineEdit->setFont(font);
        lineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        playBtn = new QPushButton(centralwidget);
        playBtn->setObjectName(QStringLiteral("playBtn"));
        playBtn->setGeometry(QRect(27, 595, 30, 30));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(playBtn->sizePolicy().hasHeightForWidth());
        playBtn->setSizePolicy(sizePolicy);
        playBtn->setMinimumSize(QSize(30, 30));
        playBtn->setMaximumSize(QSize(30, 30));
        playBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"border-image:url(:/img/images/playing.svg)\n"
"}"));
        position = new QLabel(centralwidget);
        position->setObjectName(QStringLiteral("position"));
        position->setGeometry(QRect(70, 602, 40, 16));
        sizePolicy.setHeightForWidth(position->sizePolicy().hasHeightForWidth());
        position->setSizePolicy(sizePolicy);
        position->setMinimumSize(QSize(40, 0));
        position->setMaximumSize(QSize(40, 16777215));
        progressBar = new QSlider(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(120, 599, 720, 22));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy1);
        progressBar->setMinimumSize(QSize(720, 0));
        progressBar->setMaximumSize(QSize(720, 16777215));
        progressBar->setStyleSheet(QLatin1String("QSlider::groove:horizontal {  \n"
"border: 1px solid #4A708B;    \n"
"height: 5px;  \n"
"border-radius: 1px;  \n"
"padding-left:-1px;  \n"
"padding-right:-1px;  \n"
"}  \n"
"  \n"
"QSlider::sub-page:horizontal {  \n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1,   \n"
"    stop:0 #B1B1B1, stop:1 #c4c4c4);  \n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,  \n"
"    stop: 0 #5DCCFF, stop: 1 #1874CD);  \n"
"border: 1px solid #4A708B;  \n"
"height: 10px;  \n"
"border-radius: 2px;  \n"
"}  \n"
"  \n"
"QSlider::add-page:horizontal {  \n"
"background: #575757;  \n"
"border: 0px solid #777;  \n"
"height: 10px;  \n"
"border-radius: 2px;  \n"
"}  \n"
"  \n"
"QSlider::handle:horizontal   \n"
"{  \n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:2, fx:0.5, fy:0.5,   \n"
"    stop:0.6 #FFFFFF, stop:0.778409 rgba(255, 255, 255, 255));  \n"
"    width: 11px;  \n"
"    margin-top: -3px;  \n"
"    margin-bottom: -3px;  \n"
"    border-radius: 5px;  \n"
"}  \n"
"  \n"
"QSlider::handle:"
                        "horizontal:hover {  \n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.6 #FFFFFF,   \n"
"    stop:0.778409 rgba(255, 255, 255, 255));  \n"
"    width: 11px;  \n"
"    margin-top: -3px;  \n"
"    margin-bottom: -3px;  \n"
"    border-radius: 7px;  \n"
"}  \n"
"  \n"
"QSlider::sub-page:horizontal:disabled {  \n"
"background: #00009C;  \n"
"border-color: #999;  \n"
"}  \n"
"  \n"
"QSlider::add-page:horizontal:disabled {  \n"
"background: #eee;  \n"
"border-color: #999;  \n"
"}  \n"
"  \n"
"QSlider::handle:horizontal:disabled {  \n"
"background: #eee;  \n"
"border: 1px solid #aaa;  \n"
"border-radius: 4px;  \n"
"}"));
        progressBar->setMinimum(0);
        progressBar->setMaximum(100);
        progressBar->setSingleStep(5);
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);
        voiceSlider = new QSlider(centralwidget);
        voiceSlider->setObjectName(QStringLiteral("voiceSlider"));
        voiceSlider->setGeometry(QRect(860, 599, 120, 22));
        sizePolicy.setHeightForWidth(voiceSlider->sizePolicy().hasHeightForWidth());
        voiceSlider->setSizePolicy(sizePolicy);
        voiceSlider->setMinimumSize(QSize(120, 0));
        voiceSlider->setMaximumSize(QSize(120, 16777215));
        voiceSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {  \n"
"border: 1px solid #4A708B;    \n"
"height: 5px;  \n"
"border-radius: 1px;  \n"
"padding-left:-1px;  \n"
"padding-right:-1px;  \n"
"}  \n"
"  \n"
"QSlider::sub-page:horizontal {  \n"
"background: rgb(85, 170, 255) \n"
"}  \n"
"  \n"
"QSlider::add-page:horizontal {  \n"
"background: #575757;  \n"
"border: 0px solid #777;  \n"
"height: 10px;  \n"
"border-radius: 2px;  \n"
"}  \n"
"  \n"
"QSlider::handle:horizontal   \n"
"{  \n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:2, fx:0.5, fy:0.5,   \n"
"    stop:0.6 #FFFFFF, stop:0.778409 rgba(255, 255, 255, 255));  \n"
"    width: 11px;  \n"
"    margin-top: -3px;  \n"
"    margin-bottom: -3px;  \n"
"    border-radius: 5px;  \n"
"}  \n"
"  \n"
"QSlider::handle:horizontal:hover {  \n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.6 #FFFFFF,   \n"
"    stop:0.778409 rgba(255, 255, 255, 255));  \n"
"    width: 11px;  \n"
"    margin-top: -3px;  \n"
"    margin-bott"
                        "om: -3px;  \n"
"    border-radius: 5px;  \n"
"}  \n"
"  \n"
"QSlider::sub-page:horizontal:disabled {  \n"
"background: #00009C;  \n"
"border-color: #999;  \n"
"}  \n"
"  \n"
"QSlider::add-page:horizontal:disabled {  \n"
"background: #eee;  \n"
"border-color: #999;  \n"
"}  \n"
"  \n"
"QSlider::handle:horizontal:disabled {  \n"
"background: #eee;  \n"
"border: 1px solid #aaa;  \n"
"border-radius: 4px;  \n"
"}"));
        voiceSlider->setMinimum(0);
        voiceSlider->setMaximum(100);
        voiceSlider->setSingleStep(1);
        voiceSlider->setPageStep(2);
        voiceSlider->setValue(50);
        voiceSlider->setOrientation(Qt::Horizontal);
        voice = new QPushButton(centralwidget);
        voice->setObjectName(QStringLiteral("voice"));
        voice->setGeometry(QRect(830, 595, 30, 30));
        sizePolicy.setHeightForWidth(voice->sizePolicy().hasHeightForWidth());
        voice->setSizePolicy(sizePolicy);
        voice->setMinimumSize(QSize(30, 30));
        voice->setMaximumSize(QSize(30, 30));
        voice->setStyleSheet(QLatin1String("QPushButton{\n"
"border-image:url(:/img/images/voice.svg)\n"
"}"));
        VideoPlayer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VideoPlayer);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 26));
        VideoPlayer->setMenuBar(menubar);
        statusbar = new QStatusBar(VideoPlayer);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        VideoPlayer->setStatusBar(statusbar);

        retranslateUi(VideoPlayer);

        QMetaObject::connectSlotsByName(VideoPlayer);
    } // setupUi

    void retranslateUi(QMainWindow *VideoPlayer)
    {
        VideoPlayer->setWindowTitle(QApplication::translate("VideoPlayer", "MainWindow", 0));
        label->setText(QApplication::translate("VideoPlayer", "\350\247\206\351\242\221\350\267\257\345\276\204\357\274\232", 0));
        playBtn->setText(QString());
        position->setText(QApplication::translate("VideoPlayer", "60:60", 0));
        voice->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VideoPlayer: public Ui_VideoPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPLAYER_H
