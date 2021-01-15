#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <point.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Point p(0,0);
    double x = ui->lineEdit->text().toDouble();
    double y = ui->lineEdit_2->text().toDouble();
    p.Set(x,y);
    p.Add();
    p.Show();
    ui->lineEdit->setText(QString::number(x+1));
    ui->lineEdit_2->setText(QString::number(y+1));
}
