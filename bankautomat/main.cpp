#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    Numpad login;
    int loginResult;
    do {
        loginResult = login.exec();
        if (loginResult == QDialog::Rejected) {
            QMessageBox::warning(&login, "Virhe", "Tunnus tai salasana väärin");
        }
    } while (loginResult == QDialog::Rejected);
    MainWindow w;
    w.showFullScreen();
    w.showNormal();
   // w.show();
    return a.exec();
    /*
    Mainwindow w;
    w.setWindowState(Qt::WindowFullScreen);
    w.show();
    */
}
