#include <QApplication>
#include "widget.h"
#include "connect.h"
#include "logindialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if(!createConnection())
        return 0;
    Widget w;
    LoginDialog dlg;
    if (dlg.exec() == QDialog::Accepted) {
        w.show();
        return a.exec();
    }
    else
        return 0;
}
