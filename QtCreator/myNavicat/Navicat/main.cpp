#include "navicat.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Navicat w;
    w.setWindowTitle("Navicat for MySQL");
    w.show();

    return a.exec();
}
