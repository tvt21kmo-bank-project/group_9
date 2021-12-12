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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_valikko
{
public:
    QPushButton *btnTilisiirto;
    QPushButton *btnNostaRahaa;
    QPushButton *btnNaytaSaldo;
    QTextEdit *txtSaldo;

    void setupUi(QWidget *valikko)
    {
        if (valikko->objectName().isEmpty())
            valikko->setObjectName(QStringLiteral("valikko"));
        valikko->resize(853, 525);
        btnTilisiirto = new QPushButton(valikko);
        btnTilisiirto->setObjectName(QStringLiteral("btnTilisiirto"));
        btnTilisiirto->setGeometry(QRect(80, 210, 131, 71));
        QFont font;
        font.setPointSize(17);
        btnTilisiirto->setFont(font);
        btnNostaRahaa = new QPushButton(valikko);
        btnNostaRahaa->setObjectName(QStringLiteral("btnNostaRahaa"));
        btnNostaRahaa->setGeometry(QRect(280, 210, 191, 71));
        btnNostaRahaa->setFont(font);
        btnNaytaSaldo = new QPushButton(valikko);
        btnNaytaSaldo->setObjectName(QStringLiteral("btnNaytaSaldo"));
        btnNaytaSaldo->setGeometry(QRect(534, 212, 181, 71));
        btnNaytaSaldo->setFont(font);
        txtSaldo = new QTextEdit(valikko);
        txtSaldo->setObjectName(QStringLiteral("txtSaldo"));
        txtSaldo->setGeometry(QRect(180, 360, 451, 111));

        retranslateUi(valikko);

        QMetaObject::connectSlotsByName(valikko);
    } // setupUi

    void retranslateUi(QWidget *valikko)
    {
        valikko->setWindowTitle(QApplication::translate("valikko", "Form", Q_NULLPTR));
        btnTilisiirto->setText(QApplication::translate("valikko", "Tilisiirto", Q_NULLPTR));
        btnNostaRahaa->setText(QApplication::translate("valikko", "Nosta rahaa", Q_NULLPTR));
        btnNaytaSaldo->setText(QApplication::translate("valikko", "Nayta Saldo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class valikko: public Ui_valikko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIKKO_H
