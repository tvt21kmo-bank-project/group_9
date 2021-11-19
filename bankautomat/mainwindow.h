#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "tilisiirto.h"
#include "nosto.h"
#include "numpad.h"

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
/*  void on_btnShowBooks_clicked();
    void getBookSlot (QNetworkReply *reply);
    void getOneBookSlot (QNetworkReply *reply);
    void on_btnShowOneBook_clicked();
*/
    void loginSlot (QNetworkReply *reply);
    void on_btnLogin_clicked();
    void callingNumpadSLOT();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    QNetworkAccessManager *oneBookManager;
    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;

    Tilisiirto *objTilisiirto;
    Nosto *objNosto;
    Numpad *objNumpad;
};
#endif // MAINWINDOW_H
