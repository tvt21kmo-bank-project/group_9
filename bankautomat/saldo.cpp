#include "saldo.h"
#include "ui_saldo.h"

saldo::saldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saldo)
{
    ui->setupUi(this);
    connect(this, SIGNAL(btnPainettu()),
            this, SLOT(btnclicked()));
}

saldo::~saldo()
{
    delete ui;
}

void saldo::btnclicked(){
        qDebug() << "button clicked";
  //  objectTimer->quit();
}

void saldo::on_btnNaytaSaldo_clicked()
{
    QString site_url="http://localhost:3000/saldo/1234";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(getSaldoSlot(QNetworkReply*)));
    reply = manager->get(request);
}

void saldo::getSaldoSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString saldo;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    saldo+=QString::number(json_obj["Saldo"].toInt())+" "+json_obj["Tilinumero"].toString()+" "+json_obj["Etunimi"].toString()+" "+json_obj["Sukunimi"].toString();
    }
    qDebug()<<saldo;
    ui->txtSaldo->setText(saldo);
    reply->deleteLater();
    manager->deleteLater();
}
