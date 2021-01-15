#ifndef NAVICAT_H
#define NAVICAT_H

#include <QMainWindow>

namespace Ui {
class Navicat;
}

class Navicat : public QMainWindow
{
    Q_OBJECT

public:
    explicit Navicat(QWidget *parent = 0);
    ~Navicat();

private:
    Ui::Navicat *ui;
};

#endif // NAVICAT_H
