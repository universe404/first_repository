#ifndef HXY_H
#define HXY_H

#include <QMainWindow>

namespace Ui {
class hxy;
}

class hxy : public QMainWindow
{
    Q_OBJECT

public:
    explicit hxy(QWidget *parent = 0);
    ~hxy();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::hxy *ui;
};

#endif // HXY_H
