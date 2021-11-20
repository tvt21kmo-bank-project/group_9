/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnShowBooks;
    QTextEdit *txtBooks;
    QPushButton *btnShowOneBook;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QPushButton *btnLogin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1002, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnShowBooks = new QPushButton(centralwidget);
        btnShowBooks->setObjectName(QString::fromUtf8("btnShowBooks"));
        btnShowBooks->setGeometry(QRect(80, 60, 141, 51));
        QFont font;
        font.setPointSize(14);
        btnShowBooks->setFont(font);
        txtBooks = new QTextEdit(centralwidget);
        txtBooks->setObjectName(QString::fromUtf8("txtBooks"));
        txtBooks->setGeometry(QRect(80, 160, 311, 241));
        btnShowOneBook = new QPushButton(centralwidget);
        btnShowOneBook->setObjectName(QString::fromUtf8("btnShowOneBook"));
        btnShowOneBook->setGeometry(QRect(420, 70, 281, 51));
        btnShowOneBook->setFont(font);
        lineEditUsername = new QLineEdit(centralwidget);
        lineEditUsername->setObjectName(QString::fromUtf8("lineEditUsername"));
        lineEditUsername->setGeometry(QRect(470, 180, 141, 31));
        QFont font1;
        font1.setPointSize(12);
        lineEditUsername->setFont(font1);
        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(470, 220, 141, 31));
        lineEditPassword->setFont(font1);
        lineEditPassword->setEchoMode(QLineEdit::Password);
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(470, 270, 141, 51));
        btnLogin->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1002, 27));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnShowBooks->setText(QCoreApplication::translate("MainWindow", "Hae kirjat", nullptr));
        btnShowOneBook->setText(QCoreApplication::translate("MainWindow", "Hae ensimm\303\244inen kirja", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
