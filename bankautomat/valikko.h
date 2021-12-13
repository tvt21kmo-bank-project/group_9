#ifndef VALIKKO_H
#define VALIKKO_H

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

private slots:
    void on_btnTilisiirto_clicked();
    void on_btnNostaRahaa_clicked();
    void on_btnNaytaSaldo_clicked();
    void getSaldoSlot (QNetworkReply *reply);

private:
    Ui::valikko *ui;
    QNetworkAccessManager *manager;
    QNetworkAccessManager *oneBookManager;
    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;

signals:
    void openTilisiirto();
    void openNostaRahaa();
};

#endif // VALIKKO_H
