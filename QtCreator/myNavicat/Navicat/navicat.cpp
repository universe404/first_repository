#include "navicat.h"
#include "ui_navicat.h"

Navicat::Navicat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Navicat)
{
    ui->setupUi(this);
}

Navicat::~Navicat()
{
    delete ui;
}
