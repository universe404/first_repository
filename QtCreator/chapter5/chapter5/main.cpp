#include "demo.h"
#include "videoplayer.h"
#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pix(":/img/images/cat.jpg");
    QSplashScreen splash(pix);
    splash.show();
    a.processEvents();

    demo w;
    w.setWindowTitle("189050602黄湘烨");
    w.show();

    splash.finish(&w);
    return a.exec();
}
