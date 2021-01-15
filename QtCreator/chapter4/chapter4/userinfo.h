#ifndef USERINFO_H
#define USERINFO_H

#include <QDialog>

namespace Ui {
class UserInfo;
}

class UserInfo : public QDialog
{
    Q_OBJECT

public:
    explicit UserInfo(QWidget *parent = 0);
    ~UserInfo();

private slots:

    void on_image_update_clicked();

private:
    Ui::UserInfo *ui;
};

#endif // USERINFO_H
