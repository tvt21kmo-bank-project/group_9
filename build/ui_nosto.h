/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Nosto
{
public:
    QPushButton *btnNosto20;
    QPushButton *btnNosto100;
    QPushButton *btnNosto250;
    QPushButton *btnNosto500;
    QPushButton *btnNostoMuuSumma;
    QPushButton *btnNosto40;
    QPushButton *btnNosto60;
    QPushButton *btnNostoAlkuun;
    QLabel *label;
    QLabel *label_2;
    QLabel *infoNosto;

    void setupUi(QDialog *Nosto)
    {
        if (Nosto->objectName().isEmpty())
            Nosto->setObjectName(QString::fromUtf8("Nosto"));
        Nosto->resize(957, 764);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        Nosto->setFont(font);
        btnNosto20 = new QPushButton(Nosto);
        btnNosto20->setObjectName(QString::fromUtf8("btnNosto20"));
        btnNosto20->setGeometry(QRect(10, 370, 461, 61));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        btnNosto20->setFont(font1);
        btnNosto100 = new QPushButton(Nosto);
        btnNosto100->setObjectName(QString::fromUtf8("btnNosto100"));
        btnNosto100->setGeometry(QRect(480, 370, 461, 61));
        btnNosto100->setFont(font1);
        btnNosto250 = new QPushButton(Nosto);
        btnNosto250->setObjectName(QString::fromUtf8("btnNosto250"));
        btnNosto250->setGeometry(QRect(480, 440, 461, 61));
        btnNosto250->setFont(font1);
        btnNosto500 = new QPushButton(Nosto);
        btnNosto500->setObjectName(QString::fromUtf8("btnNosto500"));
        btnNosto500->setGeometry(QRect(480, 510, 461, 61));
        btnNosto500->setFont(font1);
        btnNostoMuuSumma = new QPushButton(Nosto);
        btnNostoMuuSumma->setObjectName(QString::fromUtf8("btnNostoMuuSumma"));
        btnNostoMuuSumma->setGeometry(QRect(480, 580, 461, 61));
        btnNostoMuuSumma->setFont(font1);
        btnNosto40 = new QPushButton(Nosto);
        btnNosto40->setObjectName(QString::fromUtf8("btnNosto40"));
        btnNosto40->setGeometry(QRect(10, 440, 461, 61));
        btnNosto40->setFont(font1);
        btnNosto60 = new QPushButton(Nosto);
        btnNosto60->setObjectName(QString::fromUtf8("btnNosto60"));
        btnNosto60->setGeometry(QRect(10, 510, 461, 61));
        btnNosto60->setFont(font1);
        btnNostoAlkuun = new QPushButton(Nosto);
        btnNostoAlkuun->setObjectName(QString::fromUtf8("btnNostoAlkuun"));
        btnNostoAlkuun->setGeometry(QRect(10, 580, 461, 61));
        btnNostoAlkuun->setFont(font1);
        label = new QLabel(Nosto);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(380, 320, 201, 41));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        font2.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font2);
        label->setAutoFillBackground(false);
        label->setTextFormat(Qt::AutoText);
        label->setWordWrap(false);
        label_2 = new QLabel(Nosto);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 381, 81));
        QFont font3;
        font3.setPointSize(30);
        font3.setBold(true);
        font3.setWeight(75);
        label_2->setFont(font3);
        infoNosto = new QLabel(Nosto);
        infoNosto->setObjectName(QString::fromUtf8("infoNosto"));
        infoNosto->setGeometry(QRect(210, 140, 561, 161));

        retranslateUi(Nosto);

        QMetaObject::connectSlotsByName(Nosto);
    } // setupUi

    void retranslateUi(QDialog *Nosto)
    {
        Nosto->setWindowTitle(QCoreApplication::translate("Nosto", "Dialog", nullptr));
        btnNosto20->setText(QCoreApplication::translate("Nosto", "20 euroa", nullptr));
        btnNosto100->setText(QCoreApplication::translate("Nosto", "100 euroa", nullptr));
        btnNosto250->setText(QCoreApplication::translate("Nosto", "250 euroa", nullptr));
        btnNosto500->setText(QCoreApplication::translate("Nosto", "500 euroa", nullptr));
        btnNostoMuuSumma->setText(QCoreApplication::translate("Nosto", "Sy\303\266t\303\244 muu summa", nullptr));
        btnNosto40->setText(QCoreApplication::translate("Nosto", "40 euroa", nullptr));
        btnNosto60->setText(QCoreApplication::translate("Nosto", "60 euroa", nullptr));
        btnNostoAlkuun->setText(QCoreApplication::translate("Nosto", "Palaa alkuun", nullptr));
        label->setText(QCoreApplication::translate("Nosto", "Valitse summa", nullptr));
        label_2->setText(QCoreApplication::translate("Nosto", "BankAutomat", nullptr));
        infoNosto->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Nosto: public Ui_Nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
