#include "userinfo.h"
#include "ui_userinfo.h"
#include "QString"
#include "QFileDialog"
#include "QPixmap"

UserInfo::UserInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserInfo)
{
    ui->setupUi(this);
}

UserInfo::~UserInfo()
{
    delete ui;
}


void UserInfo::on_image_update_clicked()
{
    QString image_file = QFileDialog::getOpenFileName(this,"Open file", "/","Image files (*.jpg *.gif *.png *.jpeg)");
    ui->image->setPixmap(QPixmap(image_file));
}
