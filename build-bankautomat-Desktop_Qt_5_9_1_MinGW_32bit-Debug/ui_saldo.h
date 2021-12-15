/********************************************************************************
** Form generated from reading UI file 'saldo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDO_H
#define UI_SALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_saldo
{
public:
    QTextEdit *txtSaldo;
    QLabel *background_valikko;
    QLabel *label_naytasaldo;
    QLabel *label_naytasaldo_2;
    QLabel *label_naytasaldo_3;
    QLabel *label_naytasaldo_4;
    QLabel *label_naytasaldo_5;
    QPushButton *btnNostoAlkuun;
    QLabel *label_7;

    void setupUi(QWidget *saldo)
    {
        if (saldo->objectName().isEmpty())
            saldo->setObjectName(QStringLiteral("saldo"));
        saldo->resize(760, 829);
        txtSaldo = new QTextEdit(saldo);
        txtSaldo->setObjectName(QStringLiteral("txtSaldo"));
        txtSaldo->setGeometry(QRect(220, 260, 321, 141));
        QFont font;
        font.setPointSize(12);
        txtSaldo->setFont(font);
        background_valikko = new QLabel(saldo);
        background_valikko->setObjectName(QStringLiteral("background_valikko"));
        background_valikko->setGeometry(QRect(0, 0, 791, 1041));
        background_valikko->setMinimumSize(QSize(687, 871));
        background_valikko->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/bankautomat_front_panel.png")));
        label_naytasaldo = new QLabel(saldo);
        label_naytasaldo->setObjectName(QStringLiteral("label_naytasaldo"));
        label_naytasaldo->setGeometry(QRect(220, 200, 51, 51));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        label_naytasaldo->setFont(font1);
        label_naytasaldo->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_naytasaldo_2 = new QLabel(saldo);
        label_naytasaldo_2->setObjectName(QStringLiteral("label_naytasaldo_2"));
        label_naytasaldo_2->setGeometry(QRect(280, 200, 101, 51));
        label_naytasaldo_2->setFont(font1);
        label_naytasaldo_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_naytasaldo_3 = new QLabel(saldo);
        label_naytasaldo_3->setObjectName(QStringLiteral("label_naytasaldo_3"));
        label_naytasaldo_3->setGeometry(QRect(390, 200, 71, 51));
        label_naytasaldo_3->setFont(font1);
        label_naytasaldo_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_naytasaldo_4 = new QLabel(saldo);
        label_naytasaldo_4->setObjectName(QStringLiteral("label_naytasaldo_4"));
        label_naytasaldo_4->setGeometry(QRect(470, 200, 81, 51));
        label_naytasaldo_4->setFont(font1);
        label_naytasaldo_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_naytasaldo_5 = new QLabel(saldo);
        label_naytasaldo_5->setObjectName(QStringLiteral("label_naytasaldo_5"));
        label_naytasaldo_5->setGeometry(QRect(290, 140, 181, 51));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label_naytasaldo_5->setFont(font2);
        label_naytasaldo_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        btnNostoAlkuun = new QPushButton(saldo);
        btnNostoAlkuun->setObjectName(QStringLiteral("btnNostoAlkuun"));
        btnNostoAlkuun->setGeometry(QRect(20, 440, 51, 51));
        btnNostoAlkuun->setFont(font2);
        btnNostoAlkuun->setStyleSheet(QLatin1String("border: none;\n"
""));
        label_7 = new QLabel(saldo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 440, 171, 51));
        QFont font3;
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setWeight(75);
        label_7->setFont(font3);
        label_7->setStyleSheet(QStringLiteral("color: white;"));
        background_valikko->raise();
        txtSaldo->raise();
        label_naytasaldo->raise();
        label_naytasaldo_2->raise();
        label_naytasaldo_3->raise();
        label_naytasaldo_4->raise();
        label_naytasaldo_5->raise();
        btnNostoAlkuun->raise();
        label_7->raise();

        retranslateUi(saldo);

        QMetaObject::connectSlotsByName(saldo);
    } // setupUi

    void retranslateUi(QWidget *saldo)
    {
        saldo->setWindowTitle(QApplication::translate("saldo", "Form", Q_NULLPTR));
        background_valikko->setText(QString());
        label_naytasaldo->setText(QApplication::translate("saldo", "Saldo", Q_NULLPTR));
        label_naytasaldo_2->setText(QApplication::translate("saldo", "Tilinumero", Q_NULLPTR));
        label_naytasaldo_3->setText(QApplication::translate("saldo", "Etunimi", Q_NULLPTR));
        label_naytasaldo_4->setText(QApplication::translate("saldo", "Sukunimi", Q_NULLPTR));
        label_naytasaldo_5->setText(QApplication::translate("saldo", "N\303\244yt\303\244 Saldo", Q_NULLPTR));
        btnNostoAlkuun->setText(QString());
        label_7->setText(QApplication::translate("saldo", "Sulje", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class saldo: public Ui_saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDO_H
