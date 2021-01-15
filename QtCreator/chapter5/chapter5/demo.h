#ifndef DEMO_H
#define DEMO_H

#include <QMainWindow>
#include <chxy.h>
#include <QMediaPlayer>
#include <QSlider>
#include "videoplayer.h"

namespace Ui {
class demo;
}

class demo : public QMainWindow
{
    Q_OBJECT

public:
    explicit demo(QWidget *parent = 0);
    ~demo();

private slots:
    void changeEvent(QEvent *e);

    void on_action_Dock_D_triggered();

    void on_show_clicked();

    void on_clear_clicked();

    void on_font_clicked();

    void on_grayBtn_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void on_horizontalSlider_2_sliderMoved(int position);

    void on_blurBtn_clicked();

    void on_restoreBtn_clicked();

    void on_saveBtn_clicked();

    void on_saveAsBtn_clicked();

    void on_action_L_triggered();

    void on_actionEnglish_triggered();

    void on_sobelBtn_clicked();

    void on_prewittBtn_clicked();

    void on_robertsBtn_clicked();

    void on_addOrgBtn_clicked();

    void on_action_triggered();

    void on_action_V_triggered();

    void on_mirrorHorBtn_clicked();

    void on_mirrorVerBtn_clicked();

    void on_blackwhiteBtn_clicked();

    void on_rotateleftBtn_clicked();

    void on_rotaterigBtn_clicked();

    void on_action_V_2_triggered();

private:
    Ui::demo *ui;
    QApplication *qApp;
    VideoPlayer *videoPlayer;
};

#endif // DEMO_H
