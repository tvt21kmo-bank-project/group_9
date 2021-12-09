#ifndef NOSTO_H
#define NOSTO_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QTimer>

namespace Ui {
class Nosto;
}

class Nosto : public QDialog
{
    Q_OBJECT

public:
    explicit Nosto(QWidget *parent = nullptr);
    ~Nosto();

    QTimer timer;
public slots:
    void custom_summan_syotto(const QString &text);

private slots:
    void on_btnNostoAlkuun_clicked();
    void on_btnNosto20_clicked();
    void on_btnNosto40_clicked();
    void on_btnNosto60_clicked();
    void on_btnNosto100_clicked();
    void on_btnNosto250_clicked();
    void on_btnNosto500_clicked();
    void on_btnNostoMuuSumma_clicked();

    void infoNostoSlot(QNetworkReply *reply);
    void onTimeout();

signals:
    void NostoPainettu();

private:
    Ui::Nosto *ui;
    QNetworkAccessManager *NostoManager;
    QNetworkReply *reply;

//    bool eventFilter(QObject*, QEvent*);

    int timerInterval = 5000;
};

#endif // NOSTO_H
