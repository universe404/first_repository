#include "main.h"
#include "ui_main.h"
#include "drawer.h"
#include <QtGui>
#include <QApplication>

main::main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::main)
{
    ui->setupUi(this);
}

main::~main()
{
    delete ui;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    drawer *w=new drawer();
    w->show();
    return a.exec();
}
