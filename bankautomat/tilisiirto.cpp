#include "tilisiirto.h"
#include "ui_tilisiirto.h"


Tilisiirto::Tilisiirto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tilisiirto)
{
    installEventFilter(this);
    ui->setupUi(this);

    objTimerTilisiirto = new QTimer(this);
    connect(objTimerTilisiirto, SIGNAL(timeout()), this, SLOT(suljeIkkuna()));

    connect(this, SIGNAL(btnPainettu()),
            this, SLOT(btnclicked()));
}

Tilisiirto::~Tilisiirto()
{
    removeEventFilter(this);
    delete ui;
    delete objTimerTilisiirto;
    objTimerTilisiirto = nullptr;
}

void Tilisiirto::naytaTilisiirtoIkkuna()
{
    objTimerTilisiirto->start(20000);
    //qDebug()<<"timer nosto started -> showNosto";
    this->showFullScreen();
}

void Tilisiirto::btnclicked(){
        qDebug() << "button clicked";
}

void Tilisiirto::on_btnDebit_clicked()
{
    emit btnPainettu();
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("id1",ui->leDebitMaksaja->text());
    json.insert("id2",ui->leDebitSaaja->text());
    json.insert("summa",ui->leDebitSumma->text());
    QString site_url="http://localhost:3000/bank/debit_tilisiirto";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    debitManager = new QNetworkAccessManager(this);
    connect(debitManager, SIGNAL(finished(QNetworkReply*)),
    this, SLOT(debitSlot(QNetworkReply*)));
    reply = debitManager->post(request, QJsonDocument(json).toJson());
}

void Tilisiirto::debitSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    if(response_data == "1"){
        ui->labelDebitInfo->setText("Siirto onnistui");
        ui->leDebitMaksaja->setText("");
        ui->leDebitSaaja->setText("");
        ui->leDebitSumma->setText("");
    }
    else {
        ui->labelDebitInfo->setText("Siirto epäonnistui");
        ui->leDebitMaksaja->setText("");
        ui->leDebitSaaja->setText("");
        ui->leDebitSumma->setText("");
    }
}

void Tilisiirto::suljeIkkuna()
{
    objTimerTilisiirto->stop();
    //qDebug() << "timer tilisiirto stopped";
    this->close();
    emit closed();
}

void Tilisiirto::on_btnCredit_clicked()
{
    emit btnPainettu();
}

void Tilisiirto::creditSlot(QNetworkReply *reply)
{

}

bool Tilisiirto::eventFilter(QObject *obj, QEvent *e)
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
        objTimerTilisiirto->start(20000);
       //qDebug() << "timer restarted on mouse or key press";
    }
    return QWidget::eventFilter( obj, e ); // apply default filter
}

