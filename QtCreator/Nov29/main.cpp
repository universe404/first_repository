#include "mainwindow.h"

#include <QApplication>
#include <QSplashScreen>
#include <QPixmap>
#include <QElapsedTimer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen splash(QPixmap("://images/splash.png"));
    QElapsedTimer timer;
    MainWindow w;
    splash.show();
    timer.start();
    while(timer.elapsed()<3000)
    {
        a.processEvents();
    }
    splash.finish(nullptr);
    w.show();
    return a.exec();
}
