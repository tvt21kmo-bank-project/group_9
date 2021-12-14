#include "valikko.h"
#include "ui_valikko.h"

valikko::valikko(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::valikko)
{
    ui->setupUi(this);
}

valikko::~valikko()
{
    delete ui;
}

void valikko::on_btnTilisiirto_clicked()
{
    emit openTilisiirto();
}


void valikko::on_btnNostaRahaa_clicked()
{
    emit openNostaRahaa();
}

void valikko::on_btnNaytaSaldo_clicked()
{
    emit openNaytaSaldo();
}
