#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "statistic.h"
#include "vlcwrapper.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

    void on_pushButton_clicked();

    void on_fontComboBox_currentFontChanged(const QFont &f);

    void colour_label_clicked();

    void set_text(QString);
private:
    Ui::MainWindow *ui;
    algorithm* algo;
    VLCWrapper* wrapper;
};
#endif // MAINWINDOW_H
