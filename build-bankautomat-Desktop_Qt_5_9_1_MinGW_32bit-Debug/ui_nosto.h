/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
    QLabel *infoNosto;
    QLabel *background_image;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *syota_muu_summa;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *note_animation;

    void setupUi(QDialog *Nosto)
    {
        if (Nosto->objectName().isEmpty())
            Nosto->setObjectName(QStringLiteral("Nosto"));
        Nosto->resize(687, 871);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        Nosto->setFont(font);
        btnNosto20 = new QPushButton(Nosto);
        btnNosto20->setObjectName(QStringLiteral("btnNosto20"));
        btnNosto20->setEnabled(true);
        btnNosto20->setGeometry(QRect(30, 180, 41, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        btnNosto20->setFont(font1);
#ifndef QT_NO_ACCESSIBILITY
        btnNosto20->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        btnNosto20->setAutoFillBackground(false);
        btnNosto20->setStyleSheet(QLatin1String("border: none;\n"
""));
        btnNosto20->setCheckable(false);
        btnNosto100 = new QPushButton(Nosto);
        btnNosto100->setObjectName(QStringLiteral("btnNosto100"));
        btnNosto100->setGeometry(QRect(690, 180, 41, 51));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        btnNosto100->setFont(font2);
        btnNosto100->setStyleSheet(QLatin1String("border: none;\n"
""));
        btnNosto250 = new QPushButton(Nosto);
        btnNosto250->setObjectName(QStringLiteral("btnNosto250"));
        btnNosto250->setGeometry(QRect(680, 260, 51, 51));
        btnNosto250->setFont(font2);
        btnNosto250->setStyleSheet(QLatin1String("border: none;\n"
""));
        btnNosto500 = new QPushButton(Nosto);
        btnNosto500->setObjectName(QStringLiteral("btnNosto500"));
        btnNosto500->setGeometry(QRect(690, 350, 41, 41));
        btnNosto500->setFont(font2);
        btnNosto500->setStyleSheet(QLatin1String("border: none;\n"
""));
        btnNostoMuuSumma = new QPushButton(Nosto);
        btnNostoMuuSumma->setObjectName(QStringLiteral("btnNostoMuuSumma"));
        btnNostoMuuSumma->setEnabled(true);
        btnNostoMuuSumma->setGeometry(QRect(680, 430, 51, 51));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        btnNostoMuuSumma->setFont(font3);
        btnNostoMuuSumma->setStyleSheet(QLatin1String("border: none;\n"
""));
        btnNosto40 = new QPushButton(Nosto);
        btnNosto40->setObjectName(QStringLiteral("btnNosto40"));
        btnNosto40->setGeometry(QRect(20, 260, 51, 51));
        btnNosto40->setFont(font2);
        btnNosto40->setStyleSheet(QLatin1String("border: none;\n"
""));
        btnNosto60 = new QPushButton(Nosto);
        btnNosto60->setObjectName(QStringLiteral("btnNosto60"));
        btnNosto60->setGeometry(QRect(20, 350, 51, 41));
        btnNosto60->setFont(font2);
        btnNosto60->setStyleSheet(QLatin1String("border: none;\n"
""));
        btnNostoAlkuun = new QPushButton(Nosto);
        btnNostoAlkuun->setObjectName(QStringLiteral("btnNostoAlkuun"));
        btnNostoAlkuun->setGeometry(QRect(20, 430, 51, 51));
        btnNostoAlkuun->setFont(font2);
        btnNostoAlkuun->setStyleSheet(QLatin1String("border: none;\n"
""));
        infoNosto = new QLabel(Nosto);
        infoNosto->setObjectName(QStringLiteral("infoNosto"));
        infoNosto->setGeometry(QRect(200, 170, 271, 201));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        infoNosto->setFont(font4);
        infoNosto->setStyleSheet(QStringLiteral("color: yellow;"));
        infoNosto->setWordWrap(true);
        background_image = new QLabel(Nosto);
        background_image->setObjectName(QStringLiteral("background_image"));
        background_image->setGeometry(QRect(0, 0, 687, 871));
        background_image->setMinimumSize(QSize(687, 871));
        background_image->setAcceptDrops(false);
        background_image->setAutoFillBackground(false);
        background_image->setStyleSheet(QStringLiteral("background-color: grey;"));
        background_image->setFrameShape(QFrame::NoFrame);
        background_image->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/bankautomat_front_panel.png")));
        background_image->setScaledContents(true);
        background_image->setWordWrap(false);
        background_image->setOpenExternalLinks(false);
        label = new QLabel(Nosto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 170, 91, 41));
        QFont font5;
        font5.setPointSize(22);
        font5.setBold(true);
        font5.setWeight(75);
        label->setFont(font5);
        label->setStyleSheet(QStringLiteral("color: white;"));
        label_2 = new QLabel(Nosto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 250, 91, 41));
        label_2->setFont(font5);
        label_2->setStyleSheet(QStringLiteral("color: white;"));
        label_3 = new QLabel(Nosto);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 320, 91, 41));
        label_3->setFont(font5);
        label_3->setStyleSheet(QStringLiteral("color: white;"));
        label_4 = new QLabel(Nosto);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(490, 170, 121, 41));
        label_4->setFont(font5);
        label_4->setStyleSheet(QStringLiteral("color: white;"));
        label_5 = new QLabel(Nosto);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(490, 250, 121, 41));
        label_5->setFont(font5);
        label_5->setStyleSheet(QStringLiteral("color: white;"));
        label_6 = new QLabel(Nosto);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(490, 320, 121, 41));
        label_6->setFont(font5);
        label_6->setStyleSheet(QStringLiteral("color: white;"));
        label_7 = new QLabel(Nosto);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 400, 171, 41));
        label_7->setFont(font5);
        label_7->setStyleSheet(QStringLiteral("color: white;"));
        syota_muu_summa = new QLineEdit(Nosto);
        syota_muu_summa->setObjectName(QStringLiteral("syota_muu_summa"));
        syota_muu_summa->setGeometry(QRect(410, 390, 191, 51));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setWeight(75);
        syota_muu_summa->setFont(font6);
        syota_muu_summa->setAutoFillBackground(false);
        verticalLayoutWidget = new QWidget(Nosto);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(210, 490, 261, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        note_animation = new QLabel(Nosto);
        note_animation->setObjectName(QStringLiteral("note_animation"));
        note_animation->setGeometry(QRect(210, 750, 281, 121));
        note_animation->setStyleSheet(QStringLiteral("border: 0px;"));
        note_animation->setFrameShadow(QFrame::Plain);
        background_image->raise();
        btnNosto20->raise();
        btnNosto100->raise();
        btnNosto250->raise();
        btnNosto500->raise();
        btnNostoMuuSumma->raise();
        btnNosto40->raise();
        btnNosto60->raise();
        btnNostoAlkuun->raise();
        infoNosto->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        syota_muu_summa->raise();
        verticalLayoutWidget->raise();
        note_animation->raise();

        retranslateUi(Nosto);

        QMetaObject::connectSlotsByName(Nosto);
    } // setupUi

    void retranslateUi(QDialog *Nosto)
    {
        Nosto->setWindowTitle(QApplication::translate("Nosto", "Dialog", Q_NULLPTR));
        btnNosto20->setText(QString());
        btnNosto100->setText(QString());
        btnNosto250->setText(QString());
        btnNosto500->setText(QString());
        btnNostoMuuSumma->setText(QString());
        btnNosto40->setText(QString());
        btnNosto60->setText(QString());
        btnNostoAlkuun->setText(QString());
        infoNosto->setText(QString());
        background_image->setText(QString());
        label->setText(QApplication::translate("Nosto", "20 \342\202\254", Q_NULLPTR));
        label_2->setText(QApplication::translate("Nosto", "40 \342\202\254", Q_NULLPTR));
        label_3->setText(QApplication::translate("Nosto", "60 \342\202\254", Q_NULLPTR));
        label_4->setText(QApplication::translate("Nosto", "100 \342\202\254", Q_NULLPTR));
        label_5->setText(QApplication::translate("Nosto", "250 \342\202\254", Q_NULLPTR));
        label_6->setText(QApplication::translate("Nosto", "500 \342\202\254", Q_NULLPTR));
        label_7->setText(QApplication::translate("Nosto", "ALKUUN", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        syota_muu_summa->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        syota_muu_summa->setText(QString());
        syota_muu_summa->setPlaceholderText(QApplication::translate("Nosto", " SY\303\226T\303\204 MUU SUMMA", Q_NULLPTR));
        note_animation->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Nosto: public Ui_Nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
