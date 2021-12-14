#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objTilisiirto = new Tilisiirto;
    objNosto = new Nosto;
    objValikko = new valikko;

    connect(objValikko, SIGNAL(openTilisiirto()),
            this, SLOT(openTilisiirtoUi()));
    connect(objValikko, SIGNAL(openNostaRahaa()),
            this, SLOT(openNostaRahaaUi()));
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
    delete objTilisiirto;
    objTilisiirto = nullptr;
    delete objNosto;
    objNosto = nullptr;
    delete objValikko;
    objValikko = nullptr;
}

void MainWindow::on_btnLogin_clicked()
{
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("Kayttajatunnus",ui->lineEditUsername->text());
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
}

void MainWindow::loginSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    if(response_data=="true"){
        qDebug()<<"Oikea tunnus ...avaa form";
        objValikko->show();
    }
    else {
        ui->lineEditPassword->setText("");
        ui->lineEditUsername->setText("");
        qDebug()<<"Käyttäjätunnus ja salasana ei täsmää";
    }
}

void MainWindow::openTilisiirtoUi()
{
    objTilisiirto->show();
}

void MainWindow::TilisiirtoButtonClicked()
{

}

void MainWindow::closeTilisiirtoUi()
{
    objTilisiirto->hide();
}

void MainWindow::openNostaRahaaUi()
{
    objNosto->show();
}

void MainWindow::NostaRahaaButtonClicked()
{
    /*custom -summa, ei vielä toteutettu*/
}

void MainWindow::closeNostaRahaaUi()
{
    objNosto->hide();
}
