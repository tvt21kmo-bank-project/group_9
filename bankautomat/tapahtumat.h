#ifndef TAPAHTUMAT_H
#define TAPAHTUMAT_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>

namespace Ui {
class tapahtumat;
}

class tapahtumat : public QDialog
{
    Q_OBJECT

public:
    explicit tapahtumat(QWidget *parent = 0);
    ~tapahtumat();
    QTimer *objTimerTapahtumat;
    void naytatapahtumat(QString);
    void naytaTapahtumatIkkuna();

public slots:
    void getTapahtumatSlot(QNetworkReply *reply);

private slots:
    void on_btnNostoAlkuun_clicked();
    void suljeIkkuna();

signals:
    void closed();

private:
    Ui::tapahtumat *ui;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    bool eventFilter(QObject*, QEvent*);
};

#endif // TAPAHTUMAT_H
