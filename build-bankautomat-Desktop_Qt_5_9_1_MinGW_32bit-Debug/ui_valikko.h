/********************************************************************************
** Form generated from reading UI file 'valikko.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIKKO_H
#define UI_VALIKKO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_valikko
{
public:
    QPushButton *btnTilisiirto;
    QPushButton *btnNostaRahaa;
    QLabel *background_valikko;
    QLabel *Hei;
    QLabel *label_nostarahaa;
    QLabel *label_naytasaldo;
    QLabel *label_tilitapahtumat;
    QLabel *label_talletus;
    QLabel *label_kirjaudu_ulos;
    QLabel *label_tilisiirto;
    QPushButton *btnNaytaSaldo;
    QPushButton *btnKirjauduUlos;
    QLabel *label_tilinomistaja;
    QLabel *label_tilinumero;
    QPushButton *btnTapahtumat;

    void setupUi(QWidget *valikko)
    {
        if (valikko->objectName().isEmpty())
            valikko->setObjectName(QStringLiteral("valikko"));
        valikko->resize(781, 1056);
        valikko->setMinimumSize(QSize(687, 871));
        btnTilisiirto = new QPushButton(valikko);
        btnTilisiirto->setObjectName(QStringLiteral("btnTilisiirto"));
        btnTilisiirto->setGeometry(QRect(690, 270, 51, 51));
        QFont font;
        font.setPointSize(17);
        btnTilisiirto->setFont(font);
        btnTilisiirto->setStyleSheet(QStringLiteral("border: none;"));
        btnNostaRahaa = new QPushButton(valikko);
        btnNostaRahaa->setObjectName(QStringLiteral("btnNostaRahaa"));
        btnNostaRahaa->setGeometry(QRect(20, 190, 51, 41));
        btnNostaRahaa->setFont(font);
        btnNostaRahaa->setStyleSheet(QStringLiteral("border: none;"));
        background_valikko = new QLabel(valikko);
        background_valikko->setObjectName(QStringLiteral("background_valikko"));
        background_valikko->setGeometry(QRect(0, 0, 791, 1041));
        background_valikko->setMinimumSize(QSize(687, 871));
        background_valikko->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/bankautomat_front_panel.png")));
        Hei = new QLabel(valikko);
        Hei->setObjectName(QStringLiteral("Hei"));
        Hei->setGeometry(QRect(180, 100, 61, 51));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        Hei->setFont(font1);
        Hei->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_nostarahaa = new QLabel(valikko);
        label_nostarahaa->setObjectName(QStringLiteral("label_nostarahaa"));
        label_nostarahaa->setGeometry(QRect(100, 180, 201, 51));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        label_nostarahaa->setFont(font2);
        label_nostarahaa->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_naytasaldo = new QLabel(valikko);
        label_naytasaldo->setObjectName(QStringLiteral("label_naytasaldo"));
        label_naytasaldo->setGeometry(QRect(100, 270, 201, 51));
        label_naytasaldo->setFont(font2);
        label_naytasaldo->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_tilitapahtumat = new QLabel(valikko);
        label_tilitapahtumat->setObjectName(QStringLiteral("label_tilitapahtumat"));
        label_tilitapahtumat->setGeometry(QRect(100, 360, 251, 51));
        label_tilitapahtumat->setFont(font2);
        label_tilitapahtumat->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_talletus = new QLabel(valikko);
        label_talletus->setObjectName(QStringLiteral("label_talletus"));
        label_talletus->setGeometry(QRect(450, 180, 211, 51));
        label_talletus->setFont(font2);
        label_talletus->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_kirjaudu_ulos = new QLabel(valikko);
        label_kirjaudu_ulos->setObjectName(QStringLiteral("label_kirjaudu_ulos"));
        label_kirjaudu_ulos->setGeometry(QRect(460, 360, 211, 51));
        label_kirjaudu_ulos->setFont(font2);
        label_kirjaudu_ulos->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_tilisiirto = new QLabel(valikko);
        label_tilisiirto->setObjectName(QStringLiteral("label_tilisiirto"));
        label_tilisiirto->setGeometry(QRect(530, 270, 131, 51));
        label_tilisiirto->setFont(font2);
        label_tilisiirto->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        btnNaytaSaldo = new QPushButton(valikko);
        btnNaytaSaldo->setObjectName(QStringLiteral("btnNaytaSaldo"));
        btnNaytaSaldo->setGeometry(QRect(20, 270, 51, 51));
        btnNaytaSaldo->setStyleSheet(QStringLiteral("border: none;"));
        btnKirjauduUlos = new QPushButton(valikko);
        btnKirjauduUlos->setObjectName(QStringLiteral("btnKirjauduUlos"));
        btnKirjauduUlos->setGeometry(QRect(690, 350, 61, 51));
        btnKirjauduUlos->setStyleSheet(QStringLiteral("border: none;"));
        label_tilinomistaja = new QLabel(valikko);
        label_tilinomistaja->setObjectName(QStringLiteral("label_tilinomistaja"));
        label_tilinomistaja->setGeometry(QRect(260, 100, 291, 51));
        QFont font3;
        font3.setPointSize(20);
        font3.setUnderline(true);
        label_tilinomistaja->setFont(font3);
        label_tilinomistaja->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_tilinumero = new QLabel(valikko);
        label_tilinumero->setObjectName(QStringLiteral("label_tilinumero"));
        label_tilinumero->setGeometry(QRect(230, 450, 291, 51));
        label_tilinumero->setFont(font3);
        label_tilinumero->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        btnTapahtumat = new QPushButton(valikko);
        btnTapahtumat->setObjectName(QStringLiteral("btnTapahtumat"));
        btnTapahtumat->setGeometry(QRect(10, 360, 75, 51));
        btnTapahtumat->setStyleSheet(QStringLiteral("border: none;"));
        background_valikko->raise();
        btnTilisiirto->raise();
        btnNostaRahaa->raise();
        Hei->raise();
        label_nostarahaa->raise();
        label_naytasaldo->raise();
        label_tilitapahtumat->raise();
        label_talletus->raise();
        label_kirjaudu_ulos->raise();
        label_tilisiirto->raise();
        btnNaytaSaldo->raise();
        btnKirjauduUlos->raise();
        label_tilinomistaja->raise();
        label_tilinumero->raise();
        btnTapahtumat->raise();

        retranslateUi(valikko);

        QMetaObject::connectSlotsByName(valikko);
    } // setupUi

    void retranslateUi(QWidget *valikko)
    {
        valikko->setWindowTitle(QApplication::translate("valikko", "Form", Q_NULLPTR));
        btnTilisiirto->setText(QString());
        btnNostaRahaa->setText(QString());
        background_valikko->setText(QString());
        Hei->setText(QApplication::translate("valikko", "Hei", Q_NULLPTR));
        label_nostarahaa->setText(QApplication::translate("valikko", "Nosta rahaa", Q_NULLPTR));
        label_naytasaldo->setText(QApplication::translate("valikko", "N\303\244yt\303\244 saldo", Q_NULLPTR));
        label_tilitapahtumat->setText(QApplication::translate("valikko", "Selaa tilitapahtumia", Q_NULLPTR));
        label_talletus->setText(QApplication::translate("valikko", "Talleta rahaa", Q_NULLPTR));
        label_kirjaudu_ulos->setText(QApplication::translate("valikko", "Kirjaudu ulos", Q_NULLPTR));
        label_tilisiirto->setText(QApplication::translate("valikko", "Tilisiirto", Q_NULLPTR));
        btnNaytaSaldo->setText(QString());
        btnKirjauduUlos->setText(QString());
        label_tilinomistaja->setText(QString());
        label_tilinumero->setText(QString());
        btnTapahtumat->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class valikko: public Ui_valikko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIKKO_H
