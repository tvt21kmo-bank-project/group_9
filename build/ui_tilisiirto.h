/********************************************************************************
** Form generated from reading UI file 'tilisiirto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILISIIRTO_H
#define UI_TILISIIRTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Tilisiirto
{
public:
    QLabel *label;
    QLineEdit *leDebitMaksaja;
    QLineEdit *leDebitSaaja;
    QLineEdit *leDebitSumma;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *btnDebit;
    QLineEdit *leCreditSaaja;
    QLineEdit *leCreditSumma;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *leCreditMaksaja;
    QPushButton *btnCredit;
    QLabel *label_7;
    QLabel *labelDebitInfo;

    void setupUi(QDialog *Tilisiirto)
    {
        if (Tilisiirto->objectName().isEmpty())
            Tilisiirto->setObjectName(QString::fromUtf8("Tilisiirto"));
        Tilisiirto->resize(650, 764);
        label = new QLabel(Tilisiirto);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 231, 41));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        leDebitMaksaja = new QLineEdit(Tilisiirto);
        leDebitMaksaja->setObjectName(QString::fromUtf8("leDebitMaksaja"));
        leDebitMaksaja->setGeometry(QRect(80, 120, 111, 41));
        QFont font1;
        font1.setPointSize(12);
        leDebitMaksaja->setFont(font1);
        leDebitSaaja = new QLineEdit(Tilisiirto);
        leDebitSaaja->setObjectName(QString::fromUtf8("leDebitSaaja"));
        leDebitSaaja->setGeometry(QRect(210, 120, 111, 41));
        leDebitSaaja->setFont(font1);
        leDebitSumma = new QLineEdit(Tilisiirto);
        leDebitSumma->setObjectName(QString::fromUtf8("leDebitSumma"));
        leDebitSumma->setGeometry(QRect(340, 120, 111, 41));
        leDebitSumma->setFont(font1);
        label_2 = new QLabel(Tilisiirto);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 80, 91, 31));
        label_2->setFont(font1);
        label_3 = new QLabel(Tilisiirto);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 80, 71, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(Tilisiirto);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 90, 71, 16));
        label_4->setFont(font1);
        btnDebit = new QPushButton(Tilisiirto);
        btnDebit->setObjectName(QString::fromUtf8("btnDebit"));
        btnDebit->setGeometry(QRect(250, 200, 191, 41));
        btnDebit->setFont(font1);
        leCreditSaaja = new QLineEdit(Tilisiirto);
        leCreditSaaja->setObjectName(QString::fromUtf8("leCreditSaaja"));
        leCreditSaaja->setGeometry(QRect(220, 480, 111, 41));
        leCreditSaaja->setFont(font1);
        leCreditSumma = new QLineEdit(Tilisiirto);
        leCreditSumma->setObjectName(QString::fromUtf8("leCreditSumma"));
        leCreditSumma->setGeometry(QRect(350, 480, 111, 41));
        leCreditSumma->setFont(font1);
        label_5 = new QLabel(Tilisiirto);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 440, 91, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(Tilisiirto);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(360, 450, 71, 16));
        label_6->setFont(font1);
        leCreditMaksaja = new QLineEdit(Tilisiirto);
        leCreditMaksaja->setObjectName(QString::fromUtf8("leCreditMaksaja"));
        leCreditMaksaja->setGeometry(QRect(90, 480, 111, 41));
        leCreditMaksaja->setFont(font1);
        btnCredit = new QPushButton(Tilisiirto);
        btnCredit->setObjectName(QString::fromUtf8("btnCredit"));
        btnCredit->setGeometry(QRect(260, 560, 191, 41));
        btnCredit->setFont(font1);
        label_7 = new QLabel(Tilisiirto);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(230, 440, 71, 31));
        label_7->setFont(font1);
        labelDebitInfo = new QLabel(Tilisiirto);
        labelDebitInfo->setObjectName(QString::fromUtf8("labelDebitInfo"));
        labelDebitInfo->setGeometry(QRect(110, 280, 381, 41));
        labelDebitInfo->setFont(font1);

        retranslateUi(Tilisiirto);

        QMetaObject::connectSlotsByName(Tilisiirto);
    } // setupUi

    void retranslateUi(QDialog *Tilisiirto)
    {
        Tilisiirto->setWindowTitle(QCoreApplication::translate("Tilisiirto", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Tilisiirto", "<html><head/><body><p>Tervetuloa</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Tilisiirto", "maksaja", nullptr));
        label_3->setText(QCoreApplication::translate("Tilisiirto", "saaja", nullptr));
        label_4->setText(QCoreApplication::translate("Tilisiirto", "summa", nullptr));
        btnDebit->setText(QCoreApplication::translate("Tilisiirto", "Suorita", nullptr));
        label_5->setText(QCoreApplication::translate("Tilisiirto", "maksaja", nullptr));
        label_6->setText(QCoreApplication::translate("Tilisiirto", "summa", nullptr));
        btnCredit->setText(QCoreApplication::translate("Tilisiirto", "Suorita", nullptr));
        label_7->setText(QCoreApplication::translate("Tilisiirto", "saaja", nullptr));
        labelDebitInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tilisiirto: public Ui_Tilisiirto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILISIIRTO_H
