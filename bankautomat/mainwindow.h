#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "tilisiirto.h"
#include "nosto.h"
#include "valikko.h"
#include "aloitus.h"

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void loginSlot (QNetworkReply *reply);
    void on_btnLogin_clicked();

public slots:
    void openNostaRahaaUi();
    void NostaRahaaButtonClicked();
    void closeNostaRahaaUi();

    void openTilisiirtoUi();
    void TilisiirtoButtonClicked();
    void closeTilisiirtoUi();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    QNetworkAccessManager *oneBookManager;
    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;

    Tilisiirto *objTilisiirto;
    Nosto *objNosto;
    valikko *objValikko;
//  EventFilter *filtr;
};
#endif // MAINWINDOW_H
