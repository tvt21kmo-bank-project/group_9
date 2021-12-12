/********************************************************************************
** Form generated from reading UI file 'keypad.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYPAD_H
#define UI_KEYPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Keypad
{
public:
    QPushButton *btn5;
    QPushButton *btn8;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn7;
    QPushButton *btn9;
    QPushButton *btnClear;
    QPushButton *btnEnter;
    QPushButton *btn6;
    QPushButton *btn4;
    QPushButton *btn0;
    QPushButton *btnCancel;
    QPushButton *btn3;

    void setupUi(QWidget *Keypad)
    {
        if (Keypad->objectName().isEmpty())
            Keypad->setObjectName(QStringLiteral("Keypad"));
        Keypad->resize(264, 179);
        btn5 = new QPushButton(Keypad);
        btn5->setObjectName(QStringLiteral("btn5"));
        btn5->setEnabled(true);
        btn5->setGeometry(QRect(60, 50, 41, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        btn5->setFont(font);
#ifndef QT_NO_ACCESSIBILITY
        btn5->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        btn5->setAutoFillBackground(false);
        btn5->setStyleSheet(QLatin1String("border: none;\n"
""));
        btn5->setCheckable(false);
        btn8 = new QPushButton(Keypad);
        btn8->setObjectName(QStringLiteral("btn8"));
        btn8->setEnabled(true);
        btn8->setGeometry(QRect(60, 90, 41, 31));
        btn8->setFont(font);
#ifndef QT_NO_ACCESSIBILITY
        btn8->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        btn8->setAutoFillBackground(false);
        btn8->setStyleSheet(QLatin1String("border: none;\n"
""));
        btn8->setCheckable(false);
        btn1 = new QPushButton(Keypad);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setEnabled(true);
        btn1->setGeometry(QRect(10, 0, 41, 41));
        btn1->setFont(font);
#ifndef QT_NO_ACCESSIBILITY
        btn1->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        btn1->setAutoFillBackground(false);
        btn1->setStyleSheet(QLatin1String("border: none;\n"
""));
        btn1->setCheckable(false);
        btn2 = new QPushButton(Keypad);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setEnabled(true);
        btn2->setGeometry(QRect(60, 0, 41, 41));
        btn2->setFont(font);
#ifndef QT_NO_ACCESSIBILITY
        btn2->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        btn2->setAutoFillBackground(false);
        btn2->setStyleSheet(QLatin1String("border: none;\n"
""));
        btn2->setCheckable(false);
        btn7 = new QPushButton(Keypad);
        btn7->setObjectName(QStringLiteral("btn7"));
        btn7->setEnabled(true);
        btn7->setGeometry(QRect(10, 90, 41, 31));
        btn7->setFont(font);
#ifndef QT_NO_ACCESSIBILITY
        btn7->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        btn7->setAutoFillBackground(false);
        btn7->setStyleSheet(QLatin1String("border: none;\n"
""));
        btn7->setCheckable(false);
        btn9 = new QPushButton(Keypad);
        btn9->setObjectName(QStringLiteral("btn9"));
        btn9->setEnabled(true);
        btn9->setGeometry(QRect(110, 90, 41, 31));
        btn9->setFont(font);
#ifndef QT_NO_ACCESSIBILITY
        btn9->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        btn9->setAutoFillBackground(false);
        btn9->setStyleSheet(QLatin1String("border: none;\n"
""));
        btn9->setCheckable(false);
        btnClear = new QPushButton(Keypad);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        btnClear->setEnabled(true);
        btnClear->setGeometry(QRect(190, 50, 71, 31));
        btnClear->setFont(font);
#ifndef QT_NO_ACCESSIBILITY
        btnClear->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        btnClear->setAutoFillBackground(false);
        btnClear->setStyleSheet(QLatin1String("border: none;\n"
""));
        btnClear->setCheckable(false);
        btnEnter = new QPushButton(Keypad);
        btnEnter->setObjectName(QStringLiteral("btnEnter"));
        btnEnter->setEnabled(true);
        btnEnter->setGeometry(QRect(190, 90, 71, 31));
        btnEnter->setFont(font);
#ifndef QT_NO_ACCESSIBILITY
        btnEnter->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        btnEnter->setAutoFillBackground(false);
        btnEnter->setStyleSheet(QLatin1String("border: none;\n"
""));
        btnEnter->setCheckable(false);
        btn6 = new QPushButton(Keypad);
        btn6->setObjectName(QStringLiteral("btn6"));
        btn6->setEnabled(true);
        btn6->setGeometry(QRect(110, 50, 41, 31));
        btn6->setFont(font);
#ifndef QT_NO_ACCESSIBILITY
        btn6->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        btn6->setAutoFillBackground(false);
        btn6->setStyleSheet(QLatin1String("border: none;\n"
""));
        btn6->setCheckable(false);
        btn4 = new QPushButton(Keypad);
        btn4->setObjectName(QStringLiteral("btn4"));
        btn4->setEnabled(true);
        btn4->setGeometry(QRect(10, 50, 41, 31));
        btn4->setFont(font);
#ifndef QT_NO_ACCESSIBILITY
        btn4->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        btn4->setAutoFillBackground(false);
        btn4->setStyleSheet(QLatin1String("border: none;\n"
""));
        btn4->setCheckable(false);
        btn0 = new QPushButton(Keypad);
        btn0->setObjectName(QStringLiteral("btn0"));
        btn0->setEnabled(true);
        btn0->setGeometry(QRect(60, 130, 41, 31));
        btn0->setFont(font);
#ifndef QT_NO_ACCESSIBILITY
        btn0->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        btn0->setAutoFillBackground(false);
        btn0->setStyleSheet(QLatin1String("border: none;\n"
""));
        btn0->setCheckable(false);
        btnCancel = new QPushButton(Keypad);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(190, 0, 71, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        btnCancel->setFont(font1);
        btnCancel->setStyleSheet(QLatin1String("border: none;\n"
""));
        btn3 = new QPushButton(Keypad);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setEnabled(true);
        btn3->setGeometry(QRect(110, 0, 41, 41));
        btn3->setFont(font);
#ifndef QT_NO_ACCESSIBILITY
        btn3->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        btn3->setAutoFillBackground(false);
        btn3->setStyleSheet(QLatin1String("border: none;\n"
""));
        btn3->setCheckable(false);

        retranslateUi(Keypad);

        QMetaObject::connectSlotsByName(Keypad);
    } // setupUi

    void retranslateUi(QWidget *Keypad)
    {
        Keypad->setWindowTitle(QApplication::translate("Keypad", "Form", Q_NULLPTR));
        btn5->setText(QString());
        btn8->setText(QString());
        btn1->setText(QString());
        btn2->setText(QString());
        btn7->setText(QString());
        btn9->setText(QString());
        btnClear->setText(QString());
        btnEnter->setText(QString());
        btn6->setText(QString());
        btn4->setText(QString());
        btn0->setText(QString());
        btnCancel->setText(QString());
        btn3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Keypad: public Ui_Keypad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYPAD_H
