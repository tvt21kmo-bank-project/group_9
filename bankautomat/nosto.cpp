#include "nosto.h"
#include "ui_nosto.h"
#include "keypad.h"

//#include <QDebug>
//#include <QObject>
#include <QRegExpValidator>

Nosto::Nosto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nosto)
{
   // installEventFilter(this);
    ui->setupUi(this);

    Keypad *keypad = new Keypad(this);
    connect(keypad, SIGNAL(numpadiaPainettu(const QString&)),
            this, SLOT(custom_summan_syotto(const QString&)));
    ui->verticalLayout->addWidget(keypad);
    ui->syota_muu_summa->setValidator(new QRegExpValidator(QRegExp("[0-9]*"), ui->syota_muu_summa));

    connect(this, SIGNAL(animation_type_changed(const QMovie&)),
            this, SLOT(handle_animation(const QMovie&)));
}

Nosto::~Nosto()
{
   // removeEventFilter(this);
    delete ui;
}

/*
bool Nosto::eventFilter(QObject *obj, QEvent *e)
{
    //vaatii vielä signaalin liittämisen ikkunan sulkemiseen

    timer.start(timerInterval);
    qDebug() << "timer started";

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
    if(e->type() == QEvent::MouseButtonRelease) //filter out Mouse Buttons Relases
    {
       timer.stop();
       qDebug() << "mouse event happened";
       timer.start(timerInterval);
       qDebug() << "timer started";
       return true; // filter these events out
    }
    return QWidget::eventFilter( obj, e ); // apply default filter / just a wrapper, we don't want to override any events
}*/

void Nosto::on_btnNostoAlkuun_clicked()
{
    ui->syota_muu_summa->setText("");
    this->close();
}

void Nosto::on_btnNosto20_clicked()
{
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("id","FI1111");
    json.insert("summa","20");

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

    QTimer::singleShot(1000, this, SLOT(nosta_20()));

    //QTimer::singleShot(1000, this,
    //SLOT(handle_animation("C:/Users/Antti/OneDrive/Kuvat/notes/animations/note20.gif")));
   // emit animation_type_changed("C:/Users/Antti/OneDrive/Kuvat/notes/animations/note20.gif");
}

void Nosto::on_btnNosto40_clicked()
{
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("id","FI1111");
    json.insert("summa","40");

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


void Nosto::on_btnNosto60_clicked()
{
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("id","FI1111");
    json.insert("summa","60");

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


void Nosto::on_btnNosto100_clicked()
{
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("id","FI1111");
    json.insert("summa","100");

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


void Nosto::on_btnNosto250_clicked()
{
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("id","FI1111");
    json.insert("summa","250");

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


void Nosto::on_btnNosto500_clicked()
{
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("id","FI1111");
    json.insert("summa","500");

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


void Nosto::on_btnNostoMuuSumma_clicked()
{
    int muu_summa = ui->syota_muu_summa->text().toInt();
    if(muu_summa %10 != 0 || muu_summa == 0) {
        ui->infoNosto->setText("pitäisikö tässä ilmoittaa että esimerkiksi ei anneta summia jotka ei kymmenellä jaollisia? sillä tavalla tämä non nyt toteutettu");
        QTimer::singleShot(5000, this, SLOT(onTimeout()));
        ui->syota_muu_summa->setText("");
    } else {
        QJsonObject json; //luodaan JSON objekti ja lisätään data
        json.insert("id","FI2222");
        json.insert("summa", muu_summa);

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

        ui->syota_muu_summa->setText("");
    }
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

void Nosto::onTimeout() //infoNosto labelin tekstin nollaus
{
    ui->infoNosto->setText("");
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

/*
void Nosto::handle_animation(&animation_type){
    QMovie *animation = new QMovie(&animation_type);
    ui->note_animation->setMovie(animation);
    animation->start();

    connect(animation, &QMovie::frameChanged, this, [animation]()
    {
        if(animation->currentFrameNumber() == (animation->frameCount() - 1))
        {
            animation->stop();

        // Alla lähetetään "finished()" signaali kun animaatio pysäytetty, niin että
        // viimeinen frame voidaan jättää päälle hetkeksi minkä jälkeen animaatiokuvan poisto
            if(animation->state() == QMovie::NotRunning)
            {
                emit animation->finished();
            }
        }
    });

    //lähetä signaali slottiin, joka päivittää animaatioruudun kun "finished()" vastaanotettu
    connect(animation, &QMovie::finished, this, [&]()
    {
        QTimer::singleShot(2000, this, SLOT(clear_animation_screen()));
    });
}
*/

void Nosto::nosta_20(){
    QMovie *note20animation = new QMovie("C:/apps/group_9/bankautomat/note20.gif");
    ui->note_animation->setMovie(note20animation);
    note20animation->start();

    connect(note20animation, &QMovie::frameChanged, this, [note20animation]()
    {
        if(note20animation->currentFrameNumber() == (note20animation->frameCount() - 1))
        {
            note20animation->stop();

        // Alla lähetetään "finished()" signaali kun animaatio pysäytetty, niin että
        // viimeinen frame voidaan jättää päälle hetkeksi minkä jälkeen animaatiokuvan poisto
            if (note20animation->state() == QMovie::NotRunning)
            {
                emit note20animation->finished();
            }
        }
    });

    //lähetä signaali slottiin, joka päivittää animaatioruudun kun "finished()" vastaanotettu
    connect(note20animation, &QMovie::finished, this, [&]()
    {
        QTimer::singleShot(2000, this, SLOT(clear_animation_screen()));
    });
}

void Nosto::clear_animation_screen()
{
    ui->note_animation->clear();
}
