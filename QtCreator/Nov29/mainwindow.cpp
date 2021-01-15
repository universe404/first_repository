
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vardefs.h"
#include <QRadioButton>
#include <QFileDialog>
#include <QColorDialog>
#include <QPushButton>
#include <QLabel>
//接下来，就是从一些奇怪的地方拷贝字库了23333
#include "asciifont.h"

//0x20~0x7e
extern const chunk fontdata_8x16[FONTDATAMAX];
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPushButton* color_button = new QPushButton(this);
    color_button->setText("颜色");
    ui->toolBar->addWidget(color_button);
    connect(color_button,SIGNAL(clicked()),this,SLOT(colour_label_clicked()));
    algo = new statistic();
    QLabel* permanent=new QLabel(this);
    permanent->setFrameStyle(QFrame::Box|QFrame::Sunken);
    permanent->setText("fhh");
    ui->statusbar->addPermanentWidget(permanent);
    wrapper = new VLCWrapper(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete algo;
    delete wrapper;
}


void MainWindow::on_actionOpen_triggered()
{
    //加载QImage
    QString filename = QFileDialog::getOpenFileName(this,"打开图片",".","图片文件(*.bmp)");
    if(filename.isEmpty()) {
        return;
    }
    QImage* image = new QImage(filename);

    QString result = algo->checkImage(image);
    delete image;
    ui->textEdit->setText(result);
}

void MainWindow::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,"打开视频",".","*").replace("/","\\\\");
    //on_actionOpen_triggered();
    if(!filename.isEmpty()) {
        wrapper->openMedia(filename);
    }
}

void MainWindow::on_fontComboBox_currentFontChanged(const QFont &f)
{
    ui->textEdit->setFont(f);
}
void MainWindow::colour_label_clicked()
{
    QColor color = QColorDialog::getColor();
    ui->textEdit->setTextColor(color);
}
void MainWindow::set_text(QString in)
{
    ui->textEdit->setText(in);
}
