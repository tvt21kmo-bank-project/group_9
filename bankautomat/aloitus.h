#ifndef ALOITUS_H
#define ALOITUS_H

#include "valikko.h"

#include <QWidget>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class Aloitus;
}

class Aloitus : public QWidget
{
    Q_OBJECT

public:
    explicit Aloitus(QWidget *parent = nullptr);
    ~Aloitus();

public slots:
    void numpadinSyotto(const QString &teksti);

private slots:
    void loginSlot (QNetworkReply *reply);
    void saveUserInfo (QNetworkReply *reply);
    int on_btnLogin_clicked();
    void getUserInfo();
    void openAloitus();

private:
    int Ktunnus;
    Ui::Aloitus *ui;
    QNetworkAccessManager *manager;
    QNetworkAccessManager *getDataManager;
    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;

    valikko *objValikko;

    bool editingUsername = true;
    bool valmista = false;

//  EventFilter *filtr;
};

#endif // ALOITUS_H
