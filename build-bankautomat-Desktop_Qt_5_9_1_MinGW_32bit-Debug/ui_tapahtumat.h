/********************************************************************************
** Form generated from reading UI file 'tapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAPAHTUMAT_H
#define UI_TAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_tapahtumat
{
public:
    QLabel *background_valikko;
    QLabel *label_naytasaldo_5;
    QTextEdit *txtTapahtumat;
    QLabel *label_naytasaldo;
    QLabel *label_naytasaldo_2;
    QLabel *label_naytasaldo_3;
    QLabel *label_naytasaldo_4;
    QPushButton *btnNostoAlkuun;
    QLabel *label_7;

    void setupUi(QDialog *tapahtumat)
    {
        if (tapahtumat->objectName().isEmpty())
            tapahtumat->setObjectName(QStringLiteral("tapahtumat"));
        tapahtumat->resize(764, 700);
        background_valikko = new QLabel(tapahtumat);
        background_valikko->setObjectName(QStringLiteral("background_valikko"));
        background_valikko->setGeometry(QRect(0, 0, 791, 1041));
        background_valikko->setMinimumSize(QSize(687, 871));
        background_valikko->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/bankautomat_front_panel.png")));
        label_naytasaldo_5 = new QLabel(tapahtumat);
        label_naytasaldo_5->setObjectName(QStringLiteral("label_naytasaldo_5"));
        label_naytasaldo_5->setGeometry(QRect(280, 130, 241, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_naytasaldo_5->setFont(font);
        label_naytasaldo_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        txtTapahtumat = new QTextEdit(tapahtumat);
        txtTapahtumat->setObjectName(QStringLiteral("txtTapahtumat"));
        txtTapahtumat->setGeometry(QRect(200, 240, 381, 191));
        QFont font1;
        font1.setPointSize(9);
        txtTapahtumat->setFont(font1);
        label_naytasaldo = new QLabel(tapahtumat);
        label_naytasaldo->setObjectName(QStringLiteral("label_naytasaldo"));
        label_naytasaldo->setGeometry(QRect(200, 190, 71, 51));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        label_naytasaldo->setFont(font2);
        label_naytasaldo->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_naytasaldo_2 = new QLabel(tapahtumat);
        label_naytasaldo_2->setObjectName(QStringLiteral("label_naytasaldo_2"));
        label_naytasaldo_2->setGeometry(QRect(480, 190, 91, 51));
        label_naytasaldo_2->setFont(font2);
        label_naytasaldo_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_naytasaldo_3 = new QLabel(tapahtumat);
        label_naytasaldo_3->setObjectName(QStringLiteral("label_naytasaldo_3"));
        label_naytasaldo_3->setGeometry(QRect(410, 190, 51, 51));
        label_naytasaldo_3->setFont(font2);
        label_naytasaldo_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_naytasaldo_4 = new QLabel(tapahtumat);
        label_naytasaldo_4->setObjectName(QStringLiteral("label_naytasaldo_4"));
        label_naytasaldo_4->setGeometry(QRect(280, 190, 111, 51));
        label_naytasaldo_4->setFont(font2);
        label_naytasaldo_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        btnNostoAlkuun = new QPushButton(tapahtumat);
        btnNostoAlkuun->setObjectName(QStringLiteral("btnNostoAlkuun"));
        btnNostoAlkuun->setGeometry(QRect(20, 440, 51, 51));
        btnNostoAlkuun->setFont(font);
        btnNostoAlkuun->setStyleSheet(QLatin1String("border: none;\n"
""));
        label_7 = new QLabel(tapahtumat);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 440, 171, 51));
        QFont font3;
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setWeight(75);
        label_7->setFont(font3);
        label_7->setStyleSheet(QStringLiteral("color: white;"));

        retranslateUi(tapahtumat);

        QMetaObject::connectSlotsByName(tapahtumat);
    } // setupUi

    void retranslateUi(QDialog *tapahtumat)
    {
        tapahtumat->setWindowTitle(QApplication::translate("tapahtumat", "Dialog", Q_NULLPTR));
        background_valikko->setText(QString());
        label_naytasaldo_5->setText(QApplication::translate("tapahtumat", "Tilitapahtumat", Q_NULLPTR));
        label_naytasaldo->setText(QApplication::translate("tapahtumat", "Summa", Q_NULLPTR));
        label_naytasaldo_2->setText(QApplication::translate("tapahtumat", "Tilinumero", Q_NULLPTR));
        label_naytasaldo_3->setText(QApplication::translate("tapahtumat", "PVM", Q_NULLPTR));
        label_naytasaldo_4->setText(QApplication::translate("tapahtumat", "Tapahtuma", Q_NULLPTR));
        btnNostoAlkuun->setText(QString());
        label_7->setText(QApplication::translate("tapahtumat", "Sulje", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tapahtumat: public Ui_tapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAPAHTUMAT_H
