#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objAloitus = new Aloitus;
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
    delete objAloitus;
    objAloitus = nullptr;
}

void MainWindow::on_btnAloitus_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_2_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_3_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_4_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_5_clicked()
{
    this->hide();
    objAloitus->show();
}


void MainWindow::on_btnAloitus_6_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_7_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_8_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_9_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_10_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_11_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_12_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_13_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_14_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_15_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_16_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_17_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_18_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_19_clicked()
{
    objAloitus->show();
}


void MainWindow::on_btnAloitus_20_clicked()
{
    objAloitus->show();
}

void MainWindow::on_btnAloitus_21_clicked()
{
    objAloitus->show();
}
