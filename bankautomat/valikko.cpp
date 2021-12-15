#include "valikko.h"
#include "ui_valikko.h"

valikko::valikko(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::valikko)
{
    installEventFilter(this);
    ui->setupUi(this);

    objTimerValikko = new QTimer(this);
    connect(objTimerValikko,SIGNAL(timeout()), this, SLOT(suljeIkkuna()));

    objNosto = new Nosto;
    connect(objNosto,SIGNAL(closed()), this, SLOT(startTimer()));
    objSaldo = new saldo;
    connect(objSaldo,SIGNAL(closed()), this, SLOT(startTimer()));
    objTapahtumat = new tapahtumat;
    //connect(objTapahtumat,SIGNAL(closed()), this, SLOT(startTimer()));
    objTilisiirto = new Tilisiirto;
    connect(objTilisiirto,SIGNAL(closed()), this, SLOT(startTimer()));
}

valikko::~valikko()
{
    removeEventFilter(this);
    delete ui;
    delete objNosto;
    objNosto = nullptr;
    delete objSaldo;
    objSaldo = nullptr;
    delete objTilisiirto;
    objTilisiirto = nullptr;
    delete objTapahtumat;
    objTapahtumat = nullptr;
    delete objTimerValikko;
    objTimerValikko = nullptr;
}

void valikko::kirjautumistietojenTallentaminen(QStringList lista){
    etunimi = lista[0];
    sukunimi = lista[1];
    kayttajatunnus = lista[2];
    tilinro = lista[3];
    //qDebug()<< "kirjautumistiedot: " << etunimi + sukunimi + kayttajatunnus + tilinro;

    objNosto->saveTilinumero(tilinro);
    qDebug() << tilinro;
    //alla tilinomistajan + tilinumeron alustaminen näytölle
    ui->label_tilinomistaja->setText(etunimi+" "+sukunimi);
    ui->label_tilinumero->setText("Valittu tili: "+tilinro);
}

void valikko::naytaValikkoIkkuna()
{
    objTimerValikko->start(30000);
    qDebug()<<"timer valikko started -> naytaValikkoIkkuna";
    this->showFullScreen();
}

void valikko::on_btnTilisiirto_clicked()
{
    objTimerValikko->stop();
    objTilisiirto->naytaTilisiirtoIkkuna();
}


void valikko::on_btnNostaRahaa_clicked()
{
    objTimerValikko->stop();
    objNosto->showNosto();
}

void valikko::on_btnNaytaSaldo_clicked()
{
    objTimerValikko->stop();
    objSaldo->naytaSaldoIkkuna();
    objSaldo->naytasaldo(kayttajatunnus);
}

void valikko::on_btnKirjauduUlos_clicked()
{
    objTimerValikko->stop();
    this->close();
    ui->label_tilinomistaja->clear();
    ui->label_tilinumero->clear();
    etunimi = "0";
    sukunimi = "0";
    kayttajatunnus = "0";
    tilinro = "0";
    //emit closeValikko(); kommentoidaan tämä niin ei palata kirjautumisruutuun, vaan aloitusnäkymään
}

void valikko::on_btnTapahtumat_clicked()
{
    objTimerValikko->stop();
    objTapahtumat->show();
    objTapahtumat->naytatapahtumat(kayttajatunnus);
}

void valikko::suljeIkkuna()
{
    objTimerValikko->stop();
    //qDebug() << "timer valikko stopped";
    this->close();
}

bool valikko::eventFilter(QObject *obj, QEvent *e)
{
    if(e->type() == QEvent::ChildAdded) // install eventfilter on children
    {
        QChildEvent *ce = static_cast<QChildEvent*>(e);
        ce->child()->installEventFilter(this);
    }
    else if(e->type() == QEvent::ChildRemoved) // remove eventfilter from children
    {
        QChildEvent *ce = static_cast<QChildEvent*>(e);
        ce->child()->removeEventFilter(this);
    }
    if((e->type() == QEvent::MouseButtonPress) || (e->type() == QEvent::KeyPress)) //check for mouse or key press
    {
        objTimerValikko->start(30000);
       //qDebug() << "timer restarted on mouse or key press";
    }
    return QWidget::eventFilter( obj, e ); // apply default filter
}

void valikko::startTimer(){
    objTimerValikko->start(30000);
}
