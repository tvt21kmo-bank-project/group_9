#ifndef SALDO_H
#define SALDO_H

#include <QWidget>
#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class saldo;
}

class saldo : public QDialog
{
    Q_OBJECT

public:
    explicit saldo(QWidget *parent = 0);
    ~saldo();

private:
    Ui::saldo *ui;
    void on_btnNaytaSaldo_clicked();
    void getSaldoSlot (QNetworkReply *reply);
    QNetworkAccessManager *manager;
    QNetworkAccessManager *oneBookManager;
    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;
    void btnclicked();

signals:
    void btnPainettu();
};

#endif // SALDO_H
