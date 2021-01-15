#include "hellodialog.h"
#include "ui_hellodialog.h"
#include <point.h>
Point p;

HelloDialog::HelloDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelloDialog)
{
    ui->setupUi(this);
}

HelloDialog::~HelloDialog()
{
    delete ui;
}

void HelloDialog::on_pushButton_clicked()
{
    double x = ui->lineEdit->text().toDouble();
    double y = ui->lineEdit_2->text().toDouble();
    p.Set(x,y);
    p.Add();
    p.Show();
    ui->lineEdit->setText(QString::number(x+1));
    ui->lineEdit_2->setText(QString::number(y+1));
}
