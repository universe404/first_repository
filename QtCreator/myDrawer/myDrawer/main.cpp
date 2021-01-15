#include "drawer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    drawer *w=new drawer();
    w->show();
    return a.exec();
}
