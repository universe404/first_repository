#include "updateinfo.h"
#include "ui_updateinfo.h"

UpdateInfo::UpdateInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateInfo)
{
    ui->setupUi(this);
}

UpdateInfo::~UpdateInfo()
{
    delete ui;
}
