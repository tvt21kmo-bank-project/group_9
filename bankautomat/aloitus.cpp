#include "aloitus.h"
#include "ui_aloitus.h"
#include "keypad.h"

#include <QRegExpValidator>

Aloitus::Aloitus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Aloitus)
{
    installEventFilter(this);
    ui->setupUi(this);

    objTimer = new QTimer(this);
    connect(objTimer,SIGNAL(timeout()), this, SLOT(suljeIkkuna()));

    objValikko = new valikko;
    //connect(objValikko, SIGNAL(closeValikko()),this, SLOT(openAloitus()));

    // keypadin signaalin yhdistäminen ja lisääminen ui:n myVerticalLayout:iin
    Keypad *keypad = new Keypad(this);
    connect(keypad, SIGNAL(numpadiaPainettu(QString)),
            this, SLOT(numpadinSyotto(QString)));
    ui->MyVerticalLayout->addWidget(keypad);

    /* HOX!!!!! nämä kaksi allaolevaa aktiivisiksi jos haluat, että
       käyttäjä voi syöttää kirjautumiskenttiin vain numeroita 0-9 !!!!!!!!!!!!*/
    // ui->lineEditUsername->setValidator(new QRegExpValidator(QRegExp("[0-9]*"), ui->lineEditUsername));
    // ui->lineEditPassword->setValidator(new QRegExpValidator(QRegExp("[0-9]*"), ui->lineEditPassword));
}

Aloitus::~Aloitus()
{
    removeEventFilter(this);
    delete ui;
    ui = nullptr;
    delete objValikko;
    objValikko = nullptr;
    delete objTimer;
    objTimer = nullptr;
}

void Aloitus::numpadinSyotto(const QString &teksti) //tässä siis numpadilla tunnusten syöttö & käsittely
{
    // tälle on pitkä jokseenkin ei kovin monimutkainen logiikka. Jokseenkin itseään toistavaa koodia on...
    // 1. alkuun username syöttö. enter vaihtaa passwordin syöttöön ja username kentän harmaaksi
    // 2. password kentässä ollessa enter lähettää tunnukset. Kenttien värit nollataan
    // 3. clear tyhjentää ruudut ja aloittaa taas usernamen syötöstä
    // 4. cancel (koodissa "poistu") tyhjentää syötöt ja palaa aloitusnäyttöön


    if(teksti == "enter"){
        if(editingUsername == true){
            editingUsername = false;
            ui->lineEditUsername->setStyleSheet("background: rgb(128, 128, 128);");
            ui->lineEditPassword->setStyleSheet(" ");
        } else if (editingUsername == false && valmista == true){
            this->on_btnLogin_clicked();
            editingUsername = true;
            valmista = false;
        }
    } else if(teksti == "poistu"){
        this->suljeIkkuna();
    } else if (teksti =="tyhjenna"){
        ui->lineEditUsername->clear();
        ui->lineEditPassword->clear();
        ui->lineEditUsername->setStyleSheet(" ");
        ui->lineEditPassword->setStyleSheet(" ");
        editingUsername = true;
        valmista = false;
    } else {
        if(editingUsername == true){
            ui->lineEditPassword->setStyleSheet("background: rgb(128, 128, 128);");
            ui->lineEditUsername->setStyleSheet(" ");
            ui->lineEditUsername->insert(teksti);
        }
        else{
            valmista = true;
            //ui->lineEditUsername->setStyleSheet("background: rgb(128, 128, 128);");
            //ui->lineEditPassword->setStyleSheet(" ");
            ui->lineEditPassword->insert(teksti);
        }
    }
}

int Aloitus::on_btnLogin_clicked()
{
    //qDebug()<<"btn login clicked";
    ui->lineEditUsername->setStyleSheet(" ");
    ui->lineEditPassword->setStyleSheet(" ");

    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("Kayttajatunnus",ui->lineEditUsername->text());

    Ktunnus = ui->lineEditUsername->text().toInt();

    json.insert("Salasana",ui->lineEditPassword->text());
    QString site_url="http://localhost:3000/login";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    loginManager = new QNetworkAccessManager(this);
    connect(loginManager, SIGNAL(finished(QNetworkReply*)),
    this, SLOT(loginSlot(QNetworkReply*)));
    reply = loginManager->post(request, QJsonDocument(json).toJson());

    return Ktunnus;
}

void Aloitus::loginSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    if(response_data=="true"){
        qDebug()<<"Oikea tunnus ...avaa form";
        objValikko->naytaValikkoIkkuna();
        this->getUserInfo();
        ui->lineEditUsername->clear();
        ui->lineEditPassword->clear();
        this->hide();
    }
    else {
        ui->lineEditPassword->setText("");
        ui->lineEditUsername->setText("");
        qDebug()<<"Käyttäjätunnus ja salasana ei täsmää";
    }
}

void Aloitus::getUserInfo(){
    QString str;
    str.setNum(Ktunnus);
    QString site_url="http://localhost:3000/login/"+str;
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    getDataManager = new QNetworkAccessManager(this);
    connect(getDataManager, SIGNAL(finished(QNetworkReply*)),
    this, SLOT(saveUserInfo(QNetworkReply*)));
    reply = getDataManager->get(request);
}

void Aloitus::saveUserInfo(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_docum = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_docum.array();
    QString string;
    foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        string+=QString(json_obj["etunimi"].toString())+" "+json_obj["sukunimi"].toString()+" "+json_obj["kayttajatunnus"].toString()+" "+json_obj["tilinumero"].toString()+"";
    }
    //qDebug() <<"saveUserInfo: "<< string;
    reply->deleteLater();
    getDataManager->deleteLater();

    QStringList list = string.split(QRegExp(" "));
    //qDebug() << "stringlist: " << list;
    objValikko->kirjautumistietojenTallentaminen(list);
}

void Aloitus::openAloitus(){
    objTimer->start(30000);
    this->showFullScreen();
    //qDebug()<<"timer started -> open aloitus";
}

bool Aloitus::eventFilter(QObject *obj, QEvent *e)
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
        objTimer->start(30000);
       //qDebug() << "timer restarted on mouse or key press";
    }
    return QWidget::eventFilter( obj, e ); // apply default filter
}

void Aloitus::suljeIkkuna(){
    objTimer->stop();
    //qDebug() << "timer stopped";
    ui->lineEditUsername->clear();
    ui->lineEditPassword->clear();
    editingUsername = true;
    ui->lineEditUsername->setStyleSheet(" ");
    ui->lineEditPassword->setStyleSheet(" ");
    this->close();
}
