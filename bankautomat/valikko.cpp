#include "valikko.h"
#include "ui_valikko.h"

valikko::valikko(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::valikko)
{
    ui->setupUi(this);

    objNosto = new Nosto;
    objSaldo = new saldo;
    objTilisiirto = new Tilisiirto;
}

valikko::~valikko()
{
    delete ui;
    delete objNosto;
    objNosto = nullptr;
    delete objSaldo;
    objSaldo = nullptr;
    delete objTilisiirto;
    objTilisiirto = nullptr;
}

void valikko::kirjautumistietojenTallentaminen(QStringList lista){
    etunimi = lista[0];
    sukunimi = lista[1];
    kayttajatunnus = lista[2];
    tilinro = lista[3];
    //qDebug()<< "kirjautumistiedot: " << etunimi + sukunimi + kayttajatunnus + tilinro;

    //alla tilinomistajan + tilinumeron alustaminen näytölle
    ui->label_tilinomistaja->setText(etunimi+" "+sukunimi);
    ui->label_tilinumero->setText("Valittu tili: "+tilinro);
}

void valikko::on_btnTilisiirto_clicked()
{
    emit openTilisiirto();
}


void valikko::on_btnNostaRahaa_clicked()
{
    objNosto->showNosto(tilinro);
}

void valikko::on_btnNaytaSaldo_clicked()
{
    objSaldo->show();
    objSaldo->naytasaldo(kayttajatunnus);
}

void valikko::on_btnKirjauduUlos_clicked()
{
    this->hide();
    ui->label_tilinomistaja->clear();
    ui->label_tilinumero->clear();
    etunimi = "0";
    sukunimi = "0";
    kayttajatunnus = "0";
    tilinro = "0";
    emit closeValikko();
}

