#ifndef ALOITUS_H
#define ALOITUS_H

#include "valikko.h"

#include <QTimer>
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
    QTimer *objTimer;

public slots:
    void openAloitus();
    void numpadinSyotto(const QString &teksti);

private slots:
    void loginSlot (QNetworkReply *reply);
    void saveUserInfo (QNetworkReply *reply);
    int on_btnLogin_clicked();
    void getUserInfo();
    void suljeIkkuna();

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
    bool eventFilter(QObject*, QEvent*);
};

#endif // ALOITUS_H
