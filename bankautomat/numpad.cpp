#include "numpad.h"
#include "ui_numpad.h"

//#define PASSWORD 1234 voi poistaa

#if defined (MY_DEBUG)
//bankautomat.pro tiedostossa voi poistaa ylläolevan määrittelyn tarvittaessa. Tämä oli vain Antin debuggausta varten..
#include <QDebug>
#include <QResizeEvent>
#endif

Numpad::Numpad(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::Numpad)
{
    ui->setupUi(this);
    resizeKey(ui->btnNostaSumma, QSize(100,100));
    resizeKey(ui->btnPeruuta, QSize(100,100));
    resizeKey(ui->btn0, QSize(100,100));
    resizeKey(ui->btn1, QSize(100,100));
    resizeKey(ui->btn2, QSize(100,100));
    resizeKey(ui->btn3, QSize(100,100));
    resizeKey(ui->btn4, QSize(100,100));
    resizeKey(ui->btn5, QSize(100,100));
    resizeKey(ui->btn6, QSize(100,100));
    resizeKey(ui->btn7, QSize(100,100));
    resizeKey(ui->btn8, QSize(100,100));
    resizeKey(ui->btn9, QSize(100,100));
    connectKeys();
}

Numpad::~Numpad()
{
    delete ui;
}

#if defined (MY_DEBUG)
void Numpad::resizeEvent(QResizeEvent *event)
{
  //  qDebug() << event->size();
    QDialog::resizeEvent(event);
}
#endif

void Numpad::on_btnPeruuta_clicked()
{
  ui->lcdNumber->display(0);
}

void Numpad::on_btnNostaSumma_clicked()
{
    /* voi poistaa
    const double passwd = ui->lcdNumber->value();
    if (passwd == PASSWORD){
        accept();
        return;
    }
    reject();
    */
}

void Numpad::kunOnPainettu(const QString &number)
{
    ui->lcdNumber->display(QString::number(ui->lcdNumber->value())+number);
}

void Numpad::connectKeys()
{
    connect(ui->btn0, &NumpadButtons::onPainettu,
            this, &Numpad::kunOnPainettu);
    connect(ui->btn1, &NumpadButtons::onPainettu,
            this, &Numpad::kunOnPainettu);
    connect(ui->btn2, &NumpadButtons::onPainettu,
            this, &Numpad::kunOnPainettu);
    connect(ui->btn3, &NumpadButtons::onPainettu,
            this, &Numpad::kunOnPainettu);
    connect(ui->btn4, &NumpadButtons::onPainettu,
            this, &Numpad::kunOnPainettu);
    connect(ui->btn5, &NumpadButtons::onPainettu,
            this, &Numpad::kunOnPainettu);
    connect(ui->btn6, &NumpadButtons::onPainettu,
            this, &Numpad::kunOnPainettu);
    connect(ui->btn7, &NumpadButtons::onPainettu,
            this, &Numpad::kunOnPainettu);
    connect(ui->btn8, &NumpadButtons::onPainettu,
            this, &Numpad::kunOnPainettu);
    connect(ui->btn9, &NumpadButtons::onPainettu,
            this, &Numpad::kunOnPainettu);

}

void Numpad::resizeKey(QPushButton *resizingkey, const QSize &size)
{
    resizingkey->setMinimumSize(size);
    resizingkey->setMaximumSize(size);
}


// alapuolinen on numpad.h:n toisesta luokasta luotu

NumpadButtons::NumpadButtons(QWidget *parent) : QPushButton(parent)
{

    connect(this, &NumpadButtons::clicked, [&](){
        emit onPainettu(text());
    });

//eli yllä: connect(begin(), end(), [](int) { *what is being done* });
//lähde https://stackoverflow.com/questions/7627098/what-is-a-lambda-expression-in-c11

}
