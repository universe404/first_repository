/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_N;
    QAction *action_O;
    QAction *action_S;
    QAction *action_A;
    QAction *action_L;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        action_N = new QAction(MainWindow);
        action_N->setObjectName(QStringLiteral("action_N"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/myImages/images/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_N->setIcon(icon);
        action_O = new QAction(MainWindow);
        action_O->setObjectName(QStringLiteral("action_O"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/myImages/images/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_O->setIcon(icon1);
        action_S = new QAction(MainWindow);
        action_S->setObjectName(QStringLiteral("action_S"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/myImages/images/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_S->setIcon(icon2);
        action_A = new QAction(MainWindow);
        action_A->setObjectName(QStringLiteral("action_A"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/myImages/images/filesaveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_A->setIcon(icon3);
        action_L = new QAction(MainWindow);
        action_L->setObjectName(QStringLiteral("action_L"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/myImages/images/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_L->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menu_F->addAction(action_N);
        menu_F->addAction(action_O);
        menu_F->addAction(action_S);
        menu_F->addAction(action_A);
        menu_F->addAction(action_L);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_N->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", 0));
        action_N->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        action_O->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", 0));
        action_O->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        action_S->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", 0));
        action_S->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        action_A->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\345\205\250\351\203\250(&A)", 0));
        action_A->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0));
        action_L->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276(&L)", 0));
        action_L->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
