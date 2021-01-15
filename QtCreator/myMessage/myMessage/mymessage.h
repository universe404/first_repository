#ifndef MYMESSAGE_H
#define MYMESSAGE_H

#include <QDialog>

namespace Ui {
class myMessage;
}

class myMessage : public QDialog
{
    Q_OBJECT

public:
    explicit myMessage(QWidget *parent = 0);
    ~myMessage();

private slots:
    void on_QuestionBtn_clicked();

    void on_InformationBtn_clicked();

    void on_WarningBtn_clicked();

    void on_CriticalBtn_clicked();

    void on_AboutBtn_clicked();

    void on_AboutQTBtn_clicked();

    void on_CustomBtn_clicked();

private:
    Ui::myMessage *ui;
};

#endif // MYMESSAGE_H
