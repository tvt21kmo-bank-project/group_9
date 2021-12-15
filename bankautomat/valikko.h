#ifndef VALIKKO_H
#define VALIKKO_H

#include "nosto.h"
#include "saldo.h"
#include "tilisiirto.h"
#include "tapahtumat.h"

#include <QWidget>
#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class valikko;
}

class valikko : public QWidget
{
    Q_OBJECT

public:
    explicit valikko(QWidget *parent = nullptr);
    ~valikko();

    void kirjautumistietojenTallentaminen(QStringList);

private slots:
    void on_btnTilisiirto_clicked();
    void on_btnNostaRahaa_clicked();
    void on_btnNaytaSaldo_clicked();
    void on_btnTapahtumat_clicked();

    void on_btnKirjauduUlos_clicked();

private:
    Ui::valikko *ui;
    QNetworkAccessManager *manager;
    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;

    Nosto *objNosto;
    saldo *objSaldo;
    Tilisiirto *objTilisiirto;
    tapahtumat *objTapahtumat;

    QString etunimi, sukunimi, kayttajatunnus, tilinro;

signals:
    void openTilisiirto();
    void openNostaRahaa();
    void closeValikko();
};

#endif // VALIKKO_H
