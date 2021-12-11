#ifndef VALIKKO_H
#define VALIKKO_H

#include <QWidget>

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
    void on_btnNaytasaldo_clicked();

private:
    Ui::valikko *ui;

signals:
    void openTilisiirto();
    void openNostaRahaa();
};

#endif // VALIKKO_H
