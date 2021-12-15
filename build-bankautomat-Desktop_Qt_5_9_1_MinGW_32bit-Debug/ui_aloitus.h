/********************************************************************************
** Form generated from reading UI file 'aloitus.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALOITUS_H
#define UI_ALOITUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Aloitus
{
public:
    QLineEdit *lineEditPassword;
    QLabel *label_kayttajatunnus;
    QPushButton *btnLogin;
    QLineEdit *lineEditUsername;
    QLabel *background_login;
    QLabel *label_salasana;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *MyVerticalLayout;

    void setupUi(QWidget *Aloitus)
    {
        if (Aloitus->objectName().isEmpty())
            Aloitus->setObjectName(QStringLiteral("Aloitus"));
        Aloitus->resize(774, 1245);
        Aloitus->setMinimumSize(QSize(687, 871));
        lineEditPassword = new QLineEdit(Aloitus);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(290, 230, 141, 31));
        QFont font;
        font.setPointSize(12);
        lineEditPassword->setFont(font);
        lineEditPassword->setEchoMode(QLineEdit::Password);
        label_kayttajatunnus = new QLabel(Aloitus);
        label_kayttajatunnus->setObjectName(QStringLiteral("label_kayttajatunnus"));
        label_kayttajatunnus->setGeometry(QRect(290, 130, 181, 16));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_kayttajatunnus->setFont(font1);
        label_kayttajatunnus->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        btnLogin = new QPushButton(Aloitus);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setGeometry(QRect(290, 310, 141, 51));
        btnLogin->setFont(font);
        lineEditUsername = new QLineEdit(Aloitus);
        lineEditUsername->setObjectName(QStringLiteral("lineEditUsername"));
        lineEditUsername->setGeometry(QRect(290, 160, 141, 31));
        lineEditUsername->setFont(font);
        lineEditUsername->setStyleSheet(QStringLiteral(""));
        background_login = new QLabel(Aloitus);
        background_login->setObjectName(QStringLiteral("background_login"));
        background_login->setGeometry(QRect(0, 0, 791, 1041));
        background_login->setMinimumSize(QSize(687, 871));
        background_login->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/bankautomat_front_panel.png")));
        label_salasana = new QLabel(Aloitus);
        label_salasana->setObjectName(QStringLiteral("label_salasana"));
        label_salasana->setGeometry(QRect(290, 200, 131, 16));
        label_salasana->setFont(font1);
        label_salasana->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(Aloitus);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(240, 549, 281, 181));
        MyVerticalLayout = new QVBoxLayout(verticalLayoutWidget);
        MyVerticalLayout->setObjectName(QStringLiteral("MyVerticalLayout"));
        MyVerticalLayout->setContentsMargins(0, 0, 0, 0);
        background_login->raise();
        lineEditPassword->raise();
        label_kayttajatunnus->raise();
        btnLogin->raise();
        lineEditUsername->raise();
        label_salasana->raise();
        verticalLayoutWidget->raise();

        retranslateUi(Aloitus);

        QMetaObject::connectSlotsByName(Aloitus);
    } // setupUi

    void retranslateUi(QWidget *Aloitus)
    {
        Aloitus->setWindowTitle(QApplication::translate("Aloitus", "Form", Q_NULLPTR));
        lineEditPassword->setText(QString());
        label_kayttajatunnus->setText(QApplication::translate("Aloitus", "K\303\244ytt\303\244j\303\244tunnus:", Q_NULLPTR));
        btnLogin->setText(QApplication::translate("Aloitus", "Kirjaudu", Q_NULLPTR));
        background_login->setText(QString());
        label_salasana->setText(QApplication::translate("Aloitus", "Salasana:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Aloitus: public Ui_Aloitus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALOITUS_H
