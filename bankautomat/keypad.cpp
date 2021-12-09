#include "keypad.h"
#include "ui_keypad.h"

Keypad::Keypad(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Keypad)
{
    ui->setupUi(this);
}

Keypad::~Keypad()
{
    delete ui;
}

void Keypad::on_btn0_clicked()
{
    emit numpadiaPainettu("0");
}

void Keypad::on_btn1_clicked()
{
    emit numpadiaPainettu("1");
}

void Keypad::on_btn2_clicked()
{
    emit numpadiaPainettu("2");
}

void Keypad::on_btn3_clicked()
{
    emit numpadiaPainettu("3");
}

void Keypad::on_btn4_clicked()
{
    emit numpadiaPainettu("4");
}

void Keypad::on_btn5_clicked()
{
    emit numpadiaPainettu("5");
}

void Keypad::on_btn6_clicked()
{
    emit numpadiaPainettu("6");
}

void Keypad::on_btn7_clicked()
{
    emit numpadiaPainettu("7");
}

void Keypad::on_btn8_clicked()
{
    emit numpadiaPainettu("8");
}

void Keypad::on_btn9_clicked()
{
    emit numpadiaPainettu("9");
}

void Keypad::on_btnEnter_clicked()
{
   emit numpadiaPainettu("enter");
}

void Keypad::on_btnCancel_clicked()
{
    emit numpadiaPainettu("poistu");
}

void Keypad::on_btnClear_clicked()
{
    emit numpadiaPainettu("tyhjenna");
}
