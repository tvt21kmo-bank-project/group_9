#ifndef SALDO_H
#define SALDO_H

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
    explicit saldo(QWidget *parent = nullptr);
    ~saldo();

private slots:
    void on_btnSaldo_clicked();

    void btnclicked();

    void creditSlot(QNetworkReply *reply);
    void debitSlot(QNetworkReply *reply);

signals:
    void btnPainettu();

private:
    Ui::saldo *ui;
    QNetworkAccessManager *SaldoManager;
    QNetworkReply *reply;

    int timerInterval = 5000;
};

#endif // SALDO_H
