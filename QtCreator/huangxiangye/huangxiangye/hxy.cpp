#include "hxy.h"
#include "ui_hxy.h"
#include "infodialog.h"
#include "number.h"
#include <QGraphicsDropShadowEffect>
Number num;


hxy::hxy(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hxy)
{
    ui->setupUi(this);
}

hxy::~hxy()
{
    delete ui;
}

void hxy::on_pushButton_clicked()
{
    InfoDialog *idlg = new InfoDialog(this);
    idlg->setWindowFlags(idlg->windowFlags() |  Qt::FramelessWindowHint);
    idlg->exec();
}

void hxy::on_pushButton_2_clicked()
{
    num.add();
    num.show();
}
