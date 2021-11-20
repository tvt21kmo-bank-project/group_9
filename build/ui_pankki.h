/********************************************************************************
** Form generated from reading UI file 'pankki.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANKKI_H
#define UI_PANKKI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Pankki
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

    void setupUi(QDialog *Pankki)
    {
        if (Pankki->objectName().isEmpty())
            Pankki->setObjectName(QString::fromUtf8("Pankki"));
        Pankki->resize(650, 764);
        label = new QLabel(Pankki);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 231, 41));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        leDebitMaksaja = new QLineEdit(Pankki);
        leDebitMaksaja->setObjectName(QString::fromUtf8("leDebitMaksaja"));
        leDebitMaksaja->setGeometry(QRect(80, 120, 111, 41));
        QFont font1;
        font1.setPointSize(12);
        leDebitMaksaja->setFont(font1);
        leDebitSaaja = new QLineEdit(Pankki);
        leDebitSaaja->setObjectName(QString::fromUtf8("leDebitSaaja"));
        leDebitSaaja->setGeometry(QRect(210, 120, 111, 41));
        leDebitSaaja->setFont(font1);
        leDebitSumma = new QLineEdit(Pankki);
        leDebitSumma->setObjectName(QString::fromUtf8("leDebitSumma"));
        leDebitSumma->setGeometry(QRect(340, 120, 111, 41));
        leDebitSumma->setFont(font1);
        label_2 = new QLabel(Pankki);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 80, 91, 31));
        label_2->setFont(font1);
        label_3 = new QLabel(Pankki);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 80, 71, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(Pankki);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 90, 71, 16));
        label_4->setFont(font1);
        btnDebit = new QPushButton(Pankki);
        btnDebit->setObjectName(QString::fromUtf8("btnDebit"));
        btnDebit->setGeometry(QRect(250, 200, 191, 41));
        btnDebit->setFont(font1);
        leCreditSaaja = new QLineEdit(Pankki);
        leCreditSaaja->setObjectName(QString::fromUtf8("leCreditSaaja"));
        leCreditSaaja->setGeometry(QRect(220, 480, 111, 41));
        leCreditSaaja->setFont(font1);
        leCreditSumma = new QLineEdit(Pankki);
        leCreditSumma->setObjectName(QString::fromUtf8("leCreditSumma"));
        leCreditSumma->setGeometry(QRect(350, 480, 111, 41));
        leCreditSumma->setFont(font1);
        label_5 = new QLabel(Pankki);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 440, 91, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(Pankki);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(360, 450, 71, 16));
        label_6->setFont(font1);
        leCreditMaksaja = new QLineEdit(Pankki);
        leCreditMaksaja->setObjectName(QString::fromUtf8("leCreditMaksaja"));
        leCreditMaksaja->setGeometry(QRect(90, 480, 111, 41));
        leCreditMaksaja->setFont(font1);
        btnCredit = new QPushButton(Pankki);
        btnCredit->setObjectName(QString::fromUtf8("btnCredit"));
        btnCredit->setGeometry(QRect(260, 560, 191, 41));
        btnCredit->setFont(font1);
        label_7 = new QLabel(Pankki);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(230, 440, 71, 31));
        label_7->setFont(font1);
        labelDebitInfo = new QLabel(Pankki);
        labelDebitInfo->setObjectName(QString::fromUtf8("labelDebitInfo"));
        labelDebitInfo->setGeometry(QRect(110, 280, 381, 41));
        labelDebitInfo->setFont(font1);

        retranslateUi(Pankki);

        QMetaObject::connectSlotsByName(Pankki);
    } // setupUi

    void retranslateUi(QDialog *Pankki)
    {
        Pankki->setWindowTitle(QCoreApplication::translate("Pankki", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Pankki", "<html><head/><body><p>Tervetuloa</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Pankki", "maksaja", nullptr));
        label_3->setText(QCoreApplication::translate("Pankki", "saaja", nullptr));
        label_4->setText(QCoreApplication::translate("Pankki", "summa", nullptr));
        btnDebit->setText(QCoreApplication::translate("Pankki", "Suorita", nullptr));
        label_5->setText(QCoreApplication::translate("Pankki", "maksaja", nullptr));
        label_6->setText(QCoreApplication::translate("Pankki", "summa", nullptr));
        btnCredit->setText(QCoreApplication::translate("Pankki", "Suorita", nullptr));
        label_7->setText(QCoreApplication::translate("Pankki", "saaja", nullptr));
        labelDebitInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Pankki: public Ui_Pankki {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANKKI_H
