#include "saldo.h"
#include "ui_saldo.h"

saldo::saldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saldo)
{
    installEventFilter(this);
    ui->setupUi(this);

    objTimerSaldo = new QTimer(this);
    connect(objTimerSaldo,SIGNAL(timeout()), this, SLOT(suljeIkkuna()));
}

saldo::~saldo()
{
    removeEventFilter(this);
    delete ui;
    delete objTimerSaldo;
    objTimerSaldo = nullptr;
}

void saldo::naytaSaldoIkkuna(){
    objTimerSaldo->start(20000);
    //qDebug()<<"timer saldo started -> showNosto";
    this->showFullScreen();
}

void saldo::naytasaldo(QString username)
{
    QString site_url="http://localhost:3000/saldo/"+username;
    qDebug() << site_url;
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
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
    saldo+=QString::number(json_obj["Saldo"].toInt())+"   "+json_obj["Tilinumero"].toString()+"   "+json_obj["Etunimi"].toString()+"   "+json_obj["Sukunimi"].toString();
    }
    qDebug()<<saldo;
    ui->txtSaldo->setText(saldo);
    reply->deleteLater();
    manager->deleteLater();
}

void saldo::on_btnNostoAlkuun_clicked()
{
    this->suljeIkkuna();
}

void saldo::suljeIkkuna()
{
    objTimerSaldo->stop();
    //qDebug() << "timer saldo stopped";
    this->close();
    emit closed();
}

bool saldo::eventFilter(QObject *obj, QEvent *e)
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
        objTimerSaldo->start(20000);
       //qDebug() << "timer restarted on mouse or key press";
    }
    return QWidget::eventFilter( obj, e ); // apply default filter
}
