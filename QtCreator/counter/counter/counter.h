#ifndef COUNTER_H
#define COUNTER_H

#include <QDialog>
#include <QString>

namespace Ui {
class Counter;
}

class Counter : public QDialog
{
    Q_OBJECT

public:
    explicit Counter(QWidget *parent = 0);
    ~Counter();

private slots:
    void change_flag();

    void append_num(QString str);

    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_0_clicked();

    void on_btn_clear_clicked();

    void on_btn_add_clicked();

    void on_btn_sub_clicked();

    void on_btn_mul_clicked();

    void on_btn_div_clicked();

    void on_btn_result_clicked();

    void on_btn_del_clicked();

private:
    Ui::Counter *ui;
};

#endif // COUNTER_H
