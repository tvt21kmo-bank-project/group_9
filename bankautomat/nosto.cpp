#include "nosto.h"
#include "ui_nosto.h"

Nosto::Nosto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nosto)
{
    ui->setupUi(this);
}

Nosto::~Nosto()
{
    delete ui;
}

void Nosto::on_btnNostoAlkuun_clicked()
{

}

void Nosto::on_btnNosto20_clicked()
{
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("id","1");
    json.insert("summa","20");

    QString site_url="http://localhost:3000/bank/debit_nosto";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

    NostoManager = new QNetworkAccessManager(this);
    connect(NostoManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(infoNostoSlot(QNetworkReply*)));
    reply = NostoManager->post(request, QJsonDocument(json).toJson());
}


void Nosto::on_btnNosto40_clicked()
{
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("id","1");
    json.insert("summa","40");

    QString site_url="http://localhost:3000/bank/debit_nosto";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

    NostoManager = new QNetworkAccessManager(this);
    connect(NostoManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(infoNostoSlot(QNetworkReply*)));
    reply = NostoManager->post(request, QJsonDocument(json).toJson());
}


void Nosto::on_btnNosto60_clicked()
{
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("id","1");
    json.insert("summa","60");

    QString site_url="http://localhost:3000/bank/debit_nosto";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

    NostoManager = new QNetworkAccessManager(this);
    connect(NostoManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(infoNostoSlot(QNetworkReply*)));
    reply = NostoManager->post(request, QJsonDocument(json).toJson());
}


void Nosto::on_btnNosto100_clicked()
{
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("id","1");
    json.insert("summa","100");

    QString site_url="http://localhost:3000/bank/debit_nosto";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

    NostoManager = new QNetworkAccessManager(this);
    connect(NostoManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(infoNostoSlot(QNetworkReply*)));
    reply = NostoManager->post(request, QJsonDocument(json).toJson());
}


void Nosto::on_btnNosto250_clicked()
{
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("id","1");
    json.insert("summa","250");

    QString site_url="http://localhost:3000/bank/debit_nosto";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

    NostoManager = new QNetworkAccessManager(this);
    connect(NostoManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(infoNostoSlot(QNetworkReply*)));
    reply = NostoManager->post(request, QJsonDocument(json).toJson());
}


void Nosto::on_btnNosto500_clicked()
{
    /*
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("id","1");
    json.insert("summa","500");

    QString site_url="http://localhost:3000/bank/debit_nosto";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

    NostoManager = new QNetworkAccessManager(this);
    connect(NostoManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(infoNostoSlot(QNetworkReply*)));
    reply = NostoManager->post(request, QJsonDocument(json).toJson());
    */
}


void Nosto::on_btnNostoMuuSumma_clicked()
{
    emit callNumpadSLOT();
    /*
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("id","1");
    json.insert("summa","20");

    QString site_url="http://localhost:3000/bank/debit_nosto";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

    NostoManager = new QNetworkAccessManager(this);
    connect(NostoManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(infoNostoSlot(QNetworkReply*)));
    reply = NostoManager->post(request, QJsonDocument(json).toJson());*/
}

void Nosto::infoNostoSlot(QNetworkReply *reply)
{
    QTimer::singleShot(4000, this, &Nosto::onTimeout);
    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    if(response_data == "1"){
        ui->infoNosto->setText("Nosto onnistui");
    }
    else {
        ui->infoNosto->setText("Nosto epäonnistui");
    }
}

void Nosto::onTimeout()
{
    ui->infoNosto->setText("");
}
