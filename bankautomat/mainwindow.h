#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "aloitus.h"

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QStackedWidget>

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
    void on_btnAloitus_clicked();
    void on_btnAloitus_2_clicked();
    void on_btnAloitus_3_clicked();
    void on_btnAloitus_4_clicked();
    void on_btnAloitus_5_clicked();
    void on_btnAloitus_6_clicked();
    void on_btnAloitus_7_clicked();
    void on_btnAloitus_8_clicked();
    void on_btnAloitus_9_clicked();
    void on_btnAloitus_10_clicked();
    void on_btnAloitus_11_clicked();
    void on_btnAloitus_12_clicked();
    void on_btnAloitus_13_clicked();
    void on_btnAloitus_14_clicked();
    void on_btnAloitus_15_clicked();
    void on_btnAloitus_16_clicked();
    void on_btnAloitus_17_clicked();
    void on_btnAloitus_18_clicked();
    void on_btnAloitus_19_clicked();
    void on_btnAloitus_20_clicked();
    void on_btnAloitus_21_clicked();

private:
    Ui::MainWindow *ui;
    Aloitus *objAloitus;
};
#endif // MAINWINDOW_H
