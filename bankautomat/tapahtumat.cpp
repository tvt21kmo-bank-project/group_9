#include "tapahtumat.h"
#include "ui_tapahtumat.h"

tapahtumat::tapahtumat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tapahtumat)
{
    ui->setupUi(this);
}

tapahtumat::~tapahtumat()
{
    delete ui;
}

void tapahtumat::naytatapahtumat(QString username)
{
    QString site_url="http://localhost:3000/tapahtumat/"+username;
    qDebug() << site_url;
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
    this, SLOT(getTapahtumatSlot(QNetworkReply*)));
    reply = manager->get(request);
}

void tapahtumat::getTapahtumatSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString tapahtumat;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    tapahtumat+=QString::number(json_obj["Summa"].toDouble())+" "+json_obj["Tapahtuma"].toString()+" "+json_obj["PVM"].toString()+" "+json_obj["tili"].toString()+"\r";
    }
    qDebug()<<tapahtumat;
    ui->txtTapahtumat->setText(tapahtumat);
    reply->deleteLater();
    manager->deleteLater();
}

void tapahtumat::on_btnNostoAlkuun_clicked()
{
    this->suljeIkkuna();
    close();
}
