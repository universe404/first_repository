#include "updateinfo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UpdateInfo w;
    w.show();

    return a.exec();
}
