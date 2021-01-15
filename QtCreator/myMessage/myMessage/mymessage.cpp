#include "mymessage.h"
#include "ui_mymessage.h"
#include <QMessageBox>
#include <QPixmap>
#include <QLabel>

myMessage::myMessage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myMessage)
{
    ui->setupUi(this);
}

myMessage::~myMessage()
{
    delete ui;
}

void myMessage::on_QuestionBtn_clicked()
{
    switch(QMessageBox::question(this,tr("问题"),tr("已到达文档结尾,是否从头搜索?"), QMessageBox::Ok|QMessageBox::Cancel, QMessageBox::Ok))
          {
          case QMessageBox::Ok:
            ui->label->setText("Question button / OK");break;
          case QMessageBox::Cancel:
            ui->label->setText("Question button / Cancel");break;
          default: break;
          }
}

void myMessage::on_InformationBtn_clicked()
{
    QMessageBox::information(this,"Information",tr("这是信息显示内容"));
}

void myMessage::on_WarningBtn_clicked()
{
    switch(QMessageBox::warning(this,tr("警告"),tr("是否保存对文档的修改?"), QMessageBox::Save|QMessageBox::Discard|QMessageBox::Cancel, QMessageBox::Save))
        {
        case QMessageBox::Save:
          ui->label->setText("Warning button / Save");break;
        case QMessageBox::Discard:
          ui->label->setText("Warning button / Discard");break;
        case QMessageBox::Cancel:
          ui->label->setText("Warning button / Cancel");break;
        default: break;
        }
}

void myMessage::on_CriticalBtn_clicked()
{
    QMessageBox::critical(this,"Information", tr("致命错误"));
       ui->label->setText("Critical");
}

void myMessage::on_AboutBtn_clicked()
{
    QMessageBox::about(this, "About", tr("QMessageBox实例"));
       ui->label->setText("About QMessageBox");

}

void myMessage::on_AboutQTBtn_clicked()
{
    QMessageBox::aboutQt(this,"About Qt");
     ui->label->setText("About Qt QMessageBox");
}

void myMessage::on_CustomBtn_clicked()
{
      QMessageBox customMsgBox;
      customMsgBox.setWindowTitle("Custom message box");
      QPushButton *lockButton = customMsgBox.addButton(tr("Lock"),QMessageBox::ActionRole);
      QPushButton *unlockButton = customMsgBox.addButton(tr("Unlock"),QMessageBox::ActionRole);
      QPushButton *cancelButton = customMsgBox.addButton(QMessageBox::Cancel);
      customMsgBox.setIconPixmap(QPixmap(":/images/images/light.png"));
      customMsgBox.setText(tr("This is a custom message box"));
      customMsgBox.exec();
      if(customMsgBox.clickedButton() == lockButton)
          ui->label->setText(" Custom MessageBox / Lock ");
      if(customMsgBox.clickedButton() == unlockButton)
          ui->label->setText(" Custom MessageBox / Unlock ");
      if(customMsgBox.clickedButton() == cancelButton)
          ui->label->setText(" Custom MessageBox / Cancel ");
}
