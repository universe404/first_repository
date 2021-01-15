#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    model = new QSqlTableModel(this);
    model->setTable("course");
    model->select();
    // 设置编辑策略
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()// 提交修改按钮
{
    // 开始事务操作
    model->database().transaction();
    if (model->submitAll()) {
    model->database().commit(); //提交
    } else {
    model->database().rollback(); //回滚
    QMessageBox::warning(this, tr("tableModel"), tr("数据库错误: %1").arg(model->lastError().text()));
    }
}

void MainWindow::on_pushButton_2_clicked()// 撤销修改按钮
{
    model->revertAll();
}

void MainWindow::on_pushButton_5_clicked()// 添加记录按钮
{
    // 获得表的行数
    int rowNum = model->rowCount();
    // 添加一行
    model->insertRow(rowNum);
    model->setData(model->index(rowNum,0),rowNum);
}

void MainWindow::on_pushButton_6_clicked()// 删除选中行按钮
{
    // 获取选中的行
    int curRow = ui->tableView->currentIndex().row();
    // 删除该行
    model->removeRow(curRow);
    int ok = QMessageBox::warning(this,tr("删除当前行!"), tr("你确定删除当前行吗？"),QMessageBox::Yes, QMessageBox::No);
    if(ok == QMessageBox::No)
    { // 如果不删除，则撤销
    model->revertAll();
    } else { // 否则提交，在数据库中删除该行
    model->submitAll();
    }
}

void MainWindow::on_pushButton_7_clicked()// 按 id 升序排列按钮
{

    //id 属性，即第 0 列，升序排列
    model->setSort(0, Qt::AscendingOrder);
    model->select();
}

void MainWindow::on_pushButton_8_clicked()// 按 id 降序排列按钮
{

    model->setSort(0, Qt::DescendingOrder);
    model->select();
}

void MainWindow::on_pushButton_3_clicked()// 查询按钮，进行筛选
{
    QString name = ui->lineEdit->text();
    //根据姓名进行筛选，一定要使用单引号
    model->setFilter(QString("teacher = '%1'").arg(name));
    model->select();
}

void MainWindow::on_pushButton_4_clicked()// 显示全表按钮
{
    model->setTable("course");
    model->select();
}
