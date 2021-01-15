#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    if(ui->userLineEdit->text().trimmed() == tr("huangxiangye") &&
    ui->pwdLineEdit->text() == tr("189050602"))
    {
        accept();
    }
    else {
        QMessageBox::warning(this, tr("Waring"), tr("用户名或密码输入错误！"), QMessageBox::Yes);
        ui->userLineEdit->clear();
        ui->pwdLineEdit->clear();
        ui->userLineEdit->setFocus();
    }
}
