#include "standarddialog.h"
#include "ui_standarddialog.h"
#include <QString>
#include <QFileDialog>
#include <QColor>
#include <QColorDialog>
#include <QFont>
#include <QFontDialog>

StandardDialog::StandardDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StandardDialog)
{
    ui->setupUi(this);
}

StandardDialog::~StandardDialog()
{
    delete ui;
}

void StandardDialog::on_fileBtn_clicked()
{
     QString s=QFileDialog::getOpenFileName(this,"open file dialog", "/","C++files(*.cpp);;C files(*.c);;Head files(*.h)");
     ui->fileLineEdit->setText(s.toLatin1());
}

void StandardDialog::on_colorBtn_clicked()
{
    QColor color = QColorDialog::getColor(Qt::blue);
    if(color.isValid())
    {
        ui->colorFrame->setPalette(QPalette(color));
    }
}

void StandardDialog::on_fontBtn_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok);
    if(ok)
    {
        ui->fontLineEdit->setFont(font);
    }
}
