#include "userinfo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UserInfo w;
    w.setWindowTitle("189050602黄湘烨");
    w.show();

    return a.exec();
}
