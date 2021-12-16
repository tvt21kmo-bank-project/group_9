#include "tapahtumat.h"
#include "ui_tapahtumat.h"

tapahtumat::tapahtumat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tapahtumat)
{
    installEventFilter(this);
    ui->setupUi(this);

    objTimerTapahtumat = new QTimer(this);
    connect(objTimerTapahtumat,SIGNAL(timeout()), this, SLOT(suljeIkkuna()));
}

tapahtumat::~tapahtumat()
{
    removeEventFilter(this);
    delete ui;
    delete objTimerTapahtumat;
    objTimerTapahtumat = nullptr;
}

void tapahtumat::naytaTapahtumatIkkuna()
{
    objTimerTapahtumat->start(20000);
    //qDebug()<<"timer tapahtumat started";
    this->showFullScreen();
}

void tapahtumat::suljeIkkuna()
{
    objTimerTapahtumat->stop();
    //qDebug() << "timer tapahtumat stopped";
    this->close();
    emit closed();
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
    tapahtumat+=QString::number(json_obj["Summa"].toDouble())+" | "+json_obj["Tapahtuma"].toString()+" | "+json_obj["PVM"].toString()+" | "+json_obj["tili"].toString()+"<br><br>";
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

bool tapahtumat::eventFilter(QObject *obj, QEvent *e)
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
        objTimerTapahtumat->start(20000);
       //qDebug() << "timer restarted on mouse or key press";
    }
    return QWidget::eventFilter( obj, e ); // apply default filter
}
