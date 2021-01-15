#include "counter.h"
#include "ui_counter.h"
#include "QString"
#include "QStringList"
#include "QMessageBox"
int flag = 0;

Counter::Counter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Counter)
{
    ui->setupUi(this);
}

Counter::~Counter()
{
    delete ui;
}

void Counter::change_flag(){
    if(flag==1){
        ui->result->clear();
        flag = 0;
    }
}

void Counter::append_num(QString str){
    ui->result->setText(ui->result->text().append(str));
}

void Counter::on_btn_0_clicked()
{
    change_flag();
    append_num("0");
}

void Counter::on_btn_1_clicked()
{
    change_flag();
    append_num("1");
}

void Counter::on_btn_2_clicked()
{
    change_flag();
    append_num("2");
}

void Counter::on_btn_3_clicked()
{
    change_flag();
    append_num("3");
}

void Counter::on_btn_4_clicked()
{
    change_flag();
    append_num("4");
}

void Counter::on_btn_5_clicked()
{
    change_flag();
    append_num("5");
}

void Counter::on_btn_6_clicked()
{
    change_flag();
    append_num("6");
}

void Counter::on_btn_7_clicked()
{
    change_flag();
    append_num("7");
}

void Counter::on_btn_8_clicked()
{
    change_flag();
    append_num("8");
}

void Counter::on_btn_9_clicked()
{
    change_flag();
    append_num("9");
}

void Counter::on_btn_clear_clicked()
{
    ui->result->clear();
}

void Counter::on_btn_add_clicked()
{
    if(flag==1)
        flag = 0;
    ui->result->setText(ui->result->text().append("+"));
}

void Counter::on_btn_sub_clicked()
{
    if(flag==1)
        flag = 0;
    ui->result->setText(ui->result->text().append("-"));
}

void Counter::on_btn_mul_clicked()
{
    if(flag==1)
        flag = 0;
    ui->result->setText(ui->result->text().append("*"));
}

void Counter::on_btn_div_clicked()
{
    if(flag==1)
        flag = 0;
    ui->result->setText(ui->result->text().append("/"));
}

void Counter::on_btn_result_clicked()
{
    flag = 1;
    QString str = ui->result->text();
    if(str==""){
        QMessageBox::information(NULL, "title", "please input something", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }
    else if(str.indexOf("+")!=-1){
        QStringList num = str.split("+");
        QString x = num[0];
        QString y = num[1];
        ui->result->setText(QString::number(x.toInt() + y.toInt()));
    }
    else if(str.indexOf("-")!=-1){
        QStringList num = str.split("-");
        QString x = num[0];
        QString y = num[1];
        ui->result->setText(QString::number(x.toInt() - y.toInt()));
    }
    else if(str.indexOf("*")!=-1){
        QStringList num = str.split("*");
        QString x = num[0];
        QString y = num[1];
        ui->result->setText(QString::number(x.toInt() * y.toInt()));
    }
    else if(str.indexOf("/")!=-1){
        QStringList num = str.split("/");
        QString x = num[0];
        QString y = num[1];
        ui->result->setText(QString::number(x.toInt() / y.toInt()));
    }
    else{
        QMessageBox::information(NULL, "title", "please input the correct form", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }
}

void Counter::on_btn_del_clicked()
{
    QString str = ui->result->text();
    if(str==""){
        QMessageBox::information(NULL, "title", "please input something", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }else{
        str = str.left(str.size()-1);
        ui->result->setText(str);
    }
}
