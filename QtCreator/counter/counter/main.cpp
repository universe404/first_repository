#include "counter.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Counter w;
    w.setWindowTitle("189050602黄湘烨");
    w.show();
    return a.exec();
}
