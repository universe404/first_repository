#include "demo.h"
#include "ui_demo.h"
#include "chxy.h"
#include <unistd.h>
#include <QToolBUtton>
#include <QSpinBox>
#include <QPushButton>
#include <QMenu>
#include <QIcon>
#include <QFrame>
#include <QLabel>
#include <QString>
#include <QFileDialog>
#include <QFontDialog>
#include <QScreen>
#include <QPainter>
#include <QMessageBox>
#include <QTranslator>
#include <QVideoWidget>
#include <QMediaPlaylist>

QString s = "";
int ascNum = 0;
CHxy c;
QFileInfo fileinfo;
bool horizontalWidgetFlag = false;
QTranslator tran;

demo::demo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::demo)
{
    ui->setupUi(this);
    ui->dockWidget_2->hide();
    ui->horizontalWidget->hide();

    QPushButton *btn1 = new QPushButton(this);
    QIcon icon1(":/img/images/filenew.png");
    btn1->setIcon(icon1);
    ui->mainToolBar->addWidget(btn1);

    QPushButton *btn2 = new QPushButton(this);
    QIcon icon2(":/img/images/fileopen.png");
    btn2->setIcon(icon2);
    ui->mainToolBar->addWidget(btn2);

    QPushButton *btn3 = new QPushButton(this);
    QIcon icon3(":/img/images/filesave.png");
    btn3->setIcon(icon3);
    ui->mainToolBar->addWidget(btn3);

    QPushButton *btn4 = new QPushButton(this);
    QIcon icon4(":/img/images/filesaveas.png");
    btn4->setIcon(icon4);
    ui->mainToolBar->addWidget(btn4);

    QPushButton *btn5 = new QPushButton(this);
    QIcon icon5(":/img/images/find.png");
    btn5->setIcon(icon5);
    ui->mainToolBar->addWidget(btn5);

    QPushButton *btn6 = new QPushButton(this);
    QIcon icon6(":/img/images/help.png");
    btn6->setIcon(icon6);
    ui->mainToolBar->addWidget(btn6);

    QPushButton *btn7 = new QPushButton(this);
    QIcon icon7(":/img/images/zoom-in.png");
    btn7->setIcon(icon7);
    ui->mainToolBar->addWidget(btn7);

    QToolButton *toolBtn = new QToolButton(this);
    toolBtn->setText(tr("颜色"));
    QMenu *colorMenu = new QMenu(this);
    colorMenu->addAction(tr("红色"));
    colorMenu->addAction(tr("绿色"));
    toolBtn->setMenu(colorMenu);
    toolBtn->setPopupMode(QToolButton::MenuButtonPopup);//设置弹出模式
    ui->mainToolBar->addWidget(toolBtn);
    QSpinBox *spinBox = new QSpinBox(this);
    ui->mainToolBar->addWidget(spinBox);

    QLabel *label = new QLabel(this);
    label->setFrameStyle(QFrame::Box|QFrame::Sunken);
    label->setText("189050602黄湘烨");
    ui->statusBar->addPermanentWidget(label);
    sleep(2);
}

demo::~demo()
{
    delete ui;
}

void demo::on_action_Dock_D_triggered()
{
    ui->dockWidget_2->show();
}

void demo::on_show_clicked()
{
    c.setImg(s);
    bool ok;
    ascNum = ui->ascNum->text().toInt(&ok,10);
    QString str = c.getASCII(ascNum);
    ui->label->setPixmap(QPixmap(""));
    ui->label->setAlignment(Qt::AlignVCenter);
    ui->label->setText(str);
    ui->label->adjustSize();
}

void demo::on_clear_clicked()
{
    ui->label->clear();
}

void demo::on_font_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok);
    if(ok)
    {
        ui->label->setFont(font);
        ui->label->adjustSize();
    }
}

void demo::on_grayBtn_clicked()
{
    QPixmap pix = QPixmap::fromImage(c.gray());
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    c.setImg(pix);
    if(!horizontalWidgetFlag)
    {
        ui->horizontalWidget->show();
        horizontalWidgetFlag = true;
    }
}

void demo::on_horizontalSlider_sliderMoved(int position)
{
    QPixmap pix = QPixmap::fromImage(c.bright(position));
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    ui->horizontalWidget->show();
    if(!horizontalWidgetFlag)
    {
        ui->horizontalWidget->show();
        horizontalWidgetFlag = true;
    }
}

void demo::on_horizontalSlider_2_sliderMoved(int position)
{
    QPixmap pix = QPixmap::fromImage(c.saturation(position));
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    if(!horizontalWidgetFlag)
    {
        ui->horizontalWidget->show();
        horizontalWidgetFlag = true;
    }
}

void demo::on_blurBtn_clicked()
{
    QPixmap pix = QPixmap::fromImage(c.blur());
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    c.setImg(pix);
    if(!horizontalWidgetFlag)
    {
        ui->horizontalWidget->show();
        horizontalWidgetFlag = true;
    }
}

void demo::on_restoreBtn_clicked()
{
    QPixmap pix(s);
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    ui->label->setAlignment(Qt::AlignCenter);
    c.setImg(s);
    ui->horizontalSlider->setValue(0);
    ui->horizontalSlider_2->setValue(0);
}

void demo::on_saveBtn_clicked()
{
    QImage image = c.getImg();
    QString sourcePath = fileinfo.filePath();
    if (!(image.save(sourcePath))) //保存图像
    {

        QMessageBox::information(this,
            tr("提示"),
            tr("保存失败！"));
        return;
    }
    QMessageBox::information(this,tr("提示"), tr("已保存！"));
}

//另存为
void demo::on_saveAsBtn_clicked()
{
    QString newPath = QFileDialog::getSaveFileName(this,tr("保存图片"),"",tr("*.jpg;;*.bmp;; *.png;; *.tif;; *.GIF"));
    //加水印
//    QImage *image = new QImage(c.getImg());
//    QImage *image2 = new QImage("D:/img/hxy.bmp");
//    QPainter imagepainter;//新建画板
//    imagepainter.begin(image);
//    imagepainter.setCompositionMode(QPainter::CompositionMode_SourceOver);//设置重叠效果
//    imagepainter.drawImage(0,0,*image2);
//    imagepainter.end();
    QImage image = c.mark();
    if (!(image.save(newPath))) //保存图像
    {
        QMessageBox::information(this,
            tr("提示"),
            tr("保存失败！"));
        return;
    }
    QMessageBox::information(this,tr("提示"), tr("已保存！"));
}


void demo::on_actionEnglish_triggered()
{
    tran.load(":/ts/english.qm");
    qApp->installTranslator(&tran);
}

void demo::on_action_L_triggered()
{
    tran.load(":/ts/chinese");
    qApp->installTranslator(&tran);
}


void demo::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
        case QEvent::LanguageChange:
            ui->retranslateUi(this);
            break;
        default:
            break;
    }
}

void demo::on_sobelBtn_clicked()
{
    QPixmap pix = QPixmap::fromImage(c.sobel());
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    if(!horizontalWidgetFlag)
    {
        ui->horizontalWidget->show();
        horizontalWidgetFlag = true;
    }
}

void demo::on_prewittBtn_clicked()
{
    QPixmap pix = QPixmap::fromImage(c.prewitt());
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    if(!horizontalWidgetFlag)
    {
        ui->horizontalWidget->show();
        horizontalWidgetFlag = true;
    }
}

void demo::on_robertsBtn_clicked()
{
    QPixmap pix = QPixmap::fromImage(c.roberts());
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    if(!horizontalWidgetFlag)
    {
        ui->horizontalWidget->show();
        horizontalWidgetFlag = true;
    }

}

void demo::on_addOrgBtn_clicked()
{
    QPixmap pix = QPixmap::fromImage(c.addOrg());
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    if(!horizontalWidgetFlag)
    {
        ui->horizontalWidget->show();
        horizontalWidgetFlag = true;
    }
}

void demo::on_action_triggered()
{
    QMessageBox customMsgBox;
    customMsgBox.setWindowTitle(tr("关于本软件"));
    customMsgBox.addButton(tr("发邮件给作者"),QMessageBox::ActionRole);
    customMsgBox.addButton(tr("好的"),QMessageBox::ActionRole);
    customMsgBox.setIconPixmap(QPixmap(":/img/images/panda.jpg"));
    customMsgBox.setText(tr("189050602\n我的QT大作业,可对图像进行灰度化、二值化(阈值可调)、3×3均值滤波、多种边缘检测、亮度、饱和度调节等功能。"));
    customMsgBox.exec();
}

void demo::on_action_V_triggered()
{
    s = QFileDialog::getOpenFileName(this,tr("选择想打开的图片文件"), "","JPEG Files(*.jpg);;PNG Files(*.png);;BMP Files(*.bmp)");
    if(s.isEmpty()||s.isNull())
        return;
    QPixmap pix(s);
    fileinfo = QFileInfo(s);
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    ui->label->setAlignment(Qt::AlignCenter);
    c.setImg(s);
}

void demo::on_mirrorHorBtn_clicked()
{
    QPixmap pix = QPixmap::fromImage(c.mirrorHor());
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    c.setImg(pix);
    if(!horizontalWidgetFlag)
    {
        ui->horizontalWidget->show();
        horizontalWidgetFlag = true;
    }

}

void demo::on_mirrorVerBtn_clicked()
{
    QPixmap pix = QPixmap::fromImage(c.mirrorVer());
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    c.setImg(pix);
    if(!horizontalWidgetFlag)
    {
        ui->horizontalWidget->show();
        horizontalWidgetFlag = true;
    }
}

void demo::on_blackwhiteBtn_clicked()
{
    QPixmap pix = QPixmap::fromImage(c.blackwhite());
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    c.setImg(pix);
    if(!horizontalWidgetFlag)
    {
        ui->horizontalWidget->show();
        horizontalWidgetFlag = true;
    }
}

void demo::on_rotateleftBtn_clicked()
{
    QPixmap pix = QPixmap::fromImage(c.rotateleft());
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    c.setImg(pix);
    if(!horizontalWidgetFlag)
    {
        ui->horizontalWidget->show();
        horizontalWidgetFlag = true;
    }
}

void demo::on_rotaterigBtn_clicked()
{
    QPixmap pix = QPixmap::fromImage(c.rotaterig());
    pix = pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix);
    c.setImg(pix);
    if(!horizontalWidgetFlag)
    {
        ui->horizontalWidget->show();
        horizontalWidgetFlag = true;
    }
}

void demo::on_action_V_2_triggered()
{
    videoPlayer = new VideoPlayer();
    videoPlayer->show();
}


