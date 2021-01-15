#include "mymessage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myMessage w;
    w.show();

    return a.exec();
}
