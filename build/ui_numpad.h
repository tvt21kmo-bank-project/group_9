/********************************************************************************
** Form generated from reading UI file 'numpad.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMPAD_H
#define UI_NUMPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Numpad
{
public:
    NumpadButtons *btn7;
    NumpadButtons *btn4;
    NumpadButtons *btn1;
    NumpadButtons *btn8;
    NumpadButtons *btn5;
    NumpadButtons *btn2;
    NumpadButtons *btn9;
    NumpadButtons *btn6;
    NumpadButtons *btn3;
    QPushButton *btnPeruuta;
    NumpadButtons *btn0;
    QPushButton *btnNostaSumma;
    QLCDNumber *lcdNumber;

    void setupUi(QWidget *Numpad)
    {
        if (Numpad->objectName().isEmpty())
            Numpad->setObjectName(QString::fromUtf8("Numpad"));
        Numpad->resize(577, 521);
        btn7 = new NumpadButtons(Numpad);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setGeometry(QRect(20, 140, 151, 71));
        btn4 = new NumpadButtons(Numpad);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(20, 230, 151, 71));
        btn1 = new NumpadButtons(Numpad);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(20, 310, 151, 71));
        btn8 = new NumpadButtons(Numpad);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setGeometry(QRect(190, 140, 151, 71));
        btn5 = new NumpadButtons(Numpad);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(190, 230, 151, 71));
        btn2 = new NumpadButtons(Numpad);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(190, 310, 151, 71));
        btn9 = new NumpadButtons(Numpad);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setGeometry(QRect(360, 140, 151, 71));
        btn6 = new NumpadButtons(Numpad);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(360, 230, 151, 71));
        btn3 = new NumpadButtons(Numpad);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(360, 310, 151, 71));
        btnPeruuta = new QPushButton(Numpad);
        btnPeruuta->setObjectName(QString::fromUtf8("btnPeruuta"));
        btnPeruuta->setGeometry(QRect(20, 410, 151, 71));
        btn0 = new NumpadButtons(Numpad);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setGeometry(QRect(190, 410, 151, 71));
        btnNostaSumma = new QPushButton(Numpad);
        btnNostaSumma->setObjectName(QString::fromUtf8("btnNostaSumma"));
        btnNostaSumma->setGeometry(QRect(360, 410, 151, 71));
        lcdNumber = new QLCDNumber(Numpad);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(20, 10, 511, 121));

        retranslateUi(Numpad);

        QMetaObject::connectSlotsByName(Numpad);
    } // setupUi

    void retranslateUi(QWidget *Numpad)
    {
        Numpad->setWindowTitle(QCoreApplication::translate("Numpad", "Form", nullptr));
        btn7->setText(QCoreApplication::translate("Numpad", "7", nullptr));
        btn4->setText(QCoreApplication::translate("Numpad", "4", nullptr));
        btn1->setText(QCoreApplication::translate("Numpad", "1", nullptr));
        btn8->setText(QCoreApplication::translate("Numpad", "8", nullptr));
        btn5->setText(QCoreApplication::translate("Numpad", "5", nullptr));
        btn2->setText(QCoreApplication::translate("Numpad", "2", nullptr));
        btn9->setText(QCoreApplication::translate("Numpad", "9", nullptr));
        btn6->setText(QCoreApplication::translate("Numpad", "6", nullptr));
        btn3->setText(QCoreApplication::translate("Numpad", "3", nullptr));
        btnPeruuta->setText(QCoreApplication::translate("Numpad", "Peruuta", nullptr));
        btn0->setText(QCoreApplication::translate("Numpad", "0", nullptr));
        btnNostaSumma->setText(QCoreApplication::translate("Numpad", "Nosta summa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Numpad: public Ui_Numpad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMPAD_H
