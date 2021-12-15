#ifndef NOSTO_H
#define NOSTO_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QTimer>
#include <QMovie>

namespace Ui {
class Nosto;
}

class Nosto : public QDialog
{
    Q_OBJECT

public:
    explicit Nosto(QWidget *parent = nullptr);
    virtual ~Nosto();
    void showNosto();
    //QTimer timer;
    void saveTilinumero(QString);

public slots:
    void custom_summan_syotto(const QString &text);

private slots:
    void on_btnNostoAlkuun_clicked();
    void on_btnNosto20_clicked();
    void on_btnNosto40_clicked();
    void on_btnNosto60_clicked();
    void on_btnNosto100_clicked();
    void on_btnNosto200_clicked();
    void on_btnNosto500_clicked();
    void on_btnNostoMuuSumma_clicked();

    void infoNostoSlot(QNetworkReply *reply);
    void onTimeout();

    void clear_animation_screen();
signals:
    void NostoPainettu();

private:
    int nostonSumma;
    int nostonArvo;
    QString tilinumero;
    //int timerInterval = 5000;

    void hideButtons();
    void kasitteleNosto(int nostonSumma);
    void naytaAnimaatio(QMovie *fileaddress);
    void tulostaCustomSumma();
    void NostoLaskuri();
    void talletaNostonArvo(int arvo);
    int haeNostonArvo();
    QString getTilinumero();


    Ui::Nosto *ui;
    QNetworkAccessManager *NostoManager;
    QNetworkReply *reply;
//  bool eventFilter(QObject*, QEvent*);
};

#endif // NOSTO_H
