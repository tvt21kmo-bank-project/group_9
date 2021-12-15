#ifndef TILISIIRTO_H
#define TILISIIRTO_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class Tilisiirto;
}

class Tilisiirto : public QDialog
{
    Q_OBJECT

public:
    explicit Tilisiirto(QWidget *parent = nullptr);
    ~Tilisiirto(); 
    void naytaTilisiirtoIkkuna();
    QTimer *objTimerTilisiirto;

private slots:
    void on_btnDebit_clicked();
    void on_btnCredit_clicked();
    void btnclicked();
    void creditSlot(QNetworkReply *reply);
    void debitSlot(QNetworkReply *reply);
    void suljeIkkuna();

signals:
    void btnPainettu();
    void closed();

private:
    Ui::Tilisiirto *ui;
    QNetworkAccessManager *creditManager;
    QNetworkAccessManager *debitManager;
    QNetworkReply *reply;
    bool eventFilter(QObject*, QEvent*);
};

#endif // TILISIIRTO_H
