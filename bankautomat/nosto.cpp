#include "nosto.h"
#include "ui_nosto.h"
#include "keypad.h"
#include "qmath.h"

#include <QDebug>
#include <QRegExpValidator>

Nosto::Nosto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nosto)
{
    installEventFilter(this);
    ui->setupUi(this);

    objTimerNosto = new QTimer(this);
    connect(objTimerNosto,SIGNAL(timeout()), this, SLOT(suljeIkkuna()));

    Keypad *keypad = new Keypad(this);
    connect(keypad, SIGNAL(numpadiaPainettu(QString)),
            this, SLOT(custom_summan_syotto(QString)));
    ui->verticalLayout->addWidget(keypad);
    ui->syota_muu_summa->setValidator(new QRegExpValidator(QRegExp("[0-9]*"), ui->syota_muu_summa));
}

Nosto::~Nosto()
{
    removeEventFilter(this);
    delete ui;
    ui = nullptr;
    delete objTimerNosto;
    objTimerNosto = nullptr;
}

void Nosto::showNosto(){
    objTimerNosto->start(20000);
    //qDebug()<<"timer nosto started -> showNosto";
    this->showFullScreen();
    QString string = this->getTilinumero();
    ui->infoNosto->setText("");
    ui->label_tilinro->setText("Tili: "+string);
    ui->btnNosto20->show();
    ui->btnNosto40->show();
    ui->btnNosto60->show();
    ui->btnNosto100->show();
    ui->btnNosto200->show();
    ui->btnNosto500->show();
    ui->btnNostoAlkuun->show();
    ui->btnNostoMuuSumma->show();
    ui->syota_muu_summa->show();
    ui->label->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->label_4->show();
    ui->label_5->show();
    ui->label_6->show();
    ui->label_7->show();
}

void Nosto::on_btnNostoAlkuun_clicked()
{
    ui->infoNosto->clear();
    ui->syota_muu_summa->setText("");
    close();
}

void Nosto::on_btnNosto20_clicked()
{
    this->kasitteleNosto(20);
}

void Nosto::on_btnNosto40_clicked()
{
    this->kasitteleNosto(40);
}

void Nosto::on_btnNosto60_clicked()
{
    this->kasitteleNosto(60);
}

void Nosto::on_btnNosto100_clicked()
{
    this->kasitteleNosto(100);
}

void Nosto::on_btnNosto200_clicked()
{
    this->kasitteleNosto(200);
}

void Nosto::on_btnNosto500_clicked()
{
    this->kasitteleNosto(500);
}

void Nosto::on_btnNostoMuuSumma_clicked()
{
    int muu_summa = ui->syota_muu_summa->text().toInt();
    if(muu_summa %10 != 0 || muu_summa == 0) {
        ui->infoNosto->setText("Valitettavasti automaattimme voi luovuttaa vain 10, 20, 50, 100, 200 ja 500 euron seteleitä");
        QTimer::singleShot(6000, this, SLOT(onTimeout()));
        ui->syota_muu_summa->setText("");
    } else {
        this->kasitteleNosto(muu_summa);
        this->talletaNostonArvo(muu_summa);
        ui->syota_muu_summa->setText("");
    }
}

void Nosto::custom_summan_syotto(const QString &text)
{
    if(text == "poistu"){
        ui->syota_muu_summa->setText("");
        this->close();
    } else if (text =="tyhjenna"){
        ui->syota_muu_summa->setText("");
    } else if (text == "enter"){
        this->on_btnNostoMuuSumma_clicked();
    } else {
        ui->syota_muu_summa->insert(text);
    }
}

void Nosto::infoNostoSlot(QNetworkReply *reply)
{
    QTimer::singleShot(10000, this, &Nosto::onTimeout);
    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    if(response_data == "1"){
        ui->infoNosto->setText("NOSTO ONNISTUI.<br>KIITOS AUTOMAATIN KÄYTÖSTÄ.<br><br>PALATAAN AUTOMAATTISESTI TAKAISIN.");
        this->NostoLaskuri();
    }
    else {
        ui->infoNosto->setText("VALITETTAVASTI NOSTO EPÄONNISTUI.<br><br>TARKISTA SALDO JA YRITÄ UUDELLEEN.");
    }
}

void Nosto::talletaNostonArvo(int arvo){
    nostonSumma = arvo;
}

int Nosto::haeNostonArvo(){
    return nostonSumma;
}

void Nosto::saveTilinumero(QString nro){
    tilinumero = nro;
}

QString Nosto::getTilinumero(){
    return tilinumero;
}

void Nosto::kasitteleNosto(int nostonSumma)
{
    QString tili = this->getTilinumero();
    qDebug()<<tili;
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("id",tili);
    json.insert("summa",nostonSumma);

    this->talletaNostonArvo(nostonSumma);

    QString site_url="http://localhost:3000/bank/debit_nosto";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

    NostoManager = new QNetworkAccessManager(this);
    connect(NostoManager, SIGNAL(finished(QNetworkReply*)),
    this, SLOT(infoNostoSlot(QNetworkReply*)));
    reply = NostoManager->post(request, QJsonDocument(json).toJson());
}

void Nosto::naytaAnimaatio(QMovie *fileaddress)
{
    fileaddress->start();
    connect(fileaddress, &QMovie::frameChanged, this, [fileaddress]()
    {
        if(fileaddress->currentFrameNumber() == (fileaddress->frameCount() - 1))
        {
            fileaddress->stop();

        // Alla lähetetään "finished()" signaali kun animaatio pysäytetty, niin että
        // viimeinen frame voidaan jättää päälle hetkeksi minkä jälkeen animaatiokuvan poisto
            if (fileaddress->state() == QMovie::NotRunning)
            {
                emit fileaddress->finished();
            }
        }
    });

    //lähetä signaali slottiin, joka päivittää animaatioruudun kun "finished()" vastaanotettu
    connect(fileaddress, &QMovie::finished, this, [&]()
    {
        QTimer::singleShot(4000, this, SLOT(clear_animation_screen()));
    });
}

void Nosto::onTimeout() //infoNosto labelin tekstin nollaus
{
    ui->infoNosto->setText("");
}

void Nosto::clear_animation_screen()
{
    ui->label_note10->clear();
    ui->label_note20->clear();
    ui->label_note50->clear();
    ui->label_note100->clear();
    ui->label_note200->clear();
    ui->label_note500->clear();
}

void Nosto::suljeIkkuna()
{
    objTimerNosto->stop();
    //qDebug() << "timer nosto stopped";
    this->close();
    emit closed();
}

void Nosto::hideButtons(){
    ui->btnNosto20->hide();
    ui->btnNosto40->hide();
    ui->btnNosto60->hide();
    ui->btnNosto100->hide();
    ui->btnNosto200->hide();
    ui->btnNosto500->hide();
    ui->btnNostoAlkuun->hide();
    ui->btnNostoMuuSumma->hide();
    ui->syota_muu_summa->hide();
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    QTimer::singleShot(10000, this, SLOT(on_btnNostoAlkuun_clicked()));
}

void Nosto::NostoLaskuri()
{
    int muu_summa = this->haeNostonArvo();
    int viisisataa = qFloor(muu_summa/500);
    muu_summa -= viisisataa*500;
    int kaksisataa = qFloor(muu_summa/200);
    muu_summa -= kaksisataa*200;
    int sata = qFloor(muu_summa/100);
    muu_summa -= sata*100;
    int viisikymmenta = qFloor(muu_summa/50);
    muu_summa -= viisikymmenta*50;
    int kaksikymmenta = qFloor(muu_summa/20);
    muu_summa -= kaksikymmenta*20;
    int kymmenen = muu_summa/10;

    QList<int> setelit;
    setelit.append(viisisataa);
    setelit.append(kaksisataa);
    setelit.append(sata);
    setelit.append(viisikymmenta);
    setelit.append(kaksikymmenta);
    setelit.append(kymmenen);

// Ylläoleva palauttaa listana tarvittavan setelityypin määrän custom summan nostossa
//   [*500 lohko*, *200 lohko*, *100 lohko*, *50 lohko*, *20 lohko*, *10 lohko*]
//    eli esim [1, 0, 0, 2, 0, 1] = 560 eur

    //qDebug()<< "setelit:" << setelit;

    int viisisataset = setelit[0];
    int kaksisataset = setelit[1];
    int sataset = setelit[2];
    int viisikymppiset = setelit[3];
    int kaksikymppiset = setelit[4];
    int kymmenet = setelit[5];

    // alla alustetaan eri seteleiden animaatioiden .gif tiedostot
    QMovie *movie500 = new QMovie(":/new/prefix1/note500.gif");
        ui->label_note500->setMovie(movie500);
    QMovie *movie200 = new QMovie(":/new/prefix1/note200.gif");
        ui->label_note200->setMovie(movie200);
    QMovie *movie100 = new QMovie(":/new/prefix1/note100.gif");
        ui->label_note100->setMovie(movie100);
    QMovie *movie50 = new QMovie(":/new/prefix1/note50.gif");
        ui->label_note50->setMovie(movie50);
    QMovie *movie20 = new QMovie(":/new/prefix1/note20.gif");
        ui->label_note20->setMovie(movie20);
    QMovie *movie10 = new QMovie(":/new/prefix1/note10.gif");
        ui->label_note10->setMovie(movie10);

    for (int i = 0; i < viisisataset; i++){
        this->naytaAnimaatio(movie500);
        movie500->setSpeed(110);
        }
    for (int i = 0; i < kaksisataset; i++){
        this->naytaAnimaatio(movie200);
        movie200->setSpeed(100);
    }
    for (int i = 0; i < sataset; i++){
        this->naytaAnimaatio(movie100);
        movie100->setSpeed(90);
    }
    for (int i = 0; i < viisikymppiset; i++){
        this->naytaAnimaatio(movie50);
        movie50->setSpeed(75);
    }
    for (int i = 0; i < kaksikymppiset; i++){
        this->naytaAnimaatio(movie20);
        movie20->setSpeed(70);
    }
    for (int i = 0; i < kymmenet; i++){
        this->naytaAnimaatio(movie10);
        movie10->setSpeed(25);
    }
    this->hideButtons();
}

bool Nosto::eventFilter(QObject *obj, QEvent *e)
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
        objTimerNosto->start(20000);
       //qDebug() << "timer restarted on mouse or key press";
    }
    return QWidget::eventFilter( obj, e ); // apply default filter
}
