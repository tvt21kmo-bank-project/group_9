#ifndef SALDO_H
#define SALDO_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>

namespace Ui {
class saldo;
}

class saldo : public QDialog
{
    Q_OBJECT

public:
    explicit saldo(QWidget *parent = 0);
    ~saldo();

    void naytasaldo(QString);

public slots:
    void getSaldoSlot(QNetworkReply *reply);

private:
    Ui::saldo *ui;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
};

#endif // SALDO_H
