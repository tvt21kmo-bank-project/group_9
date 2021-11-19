#ifndef NUMPAD_H
#define NUMPAD_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class Numpad;
}

class Numpad : public QDialog
{
    Q_OBJECT

public:
    explicit Numpad(QWidget *parent = nullptr);
    ~Numpad();

protected:
#if defined (MY_DEBUG)
    void resizeEvent(QResizeEvent *e) override;
#endif
private slots:
    void on_btnPeruuta_clicked();
    void on_btnNostaSumma_clicked();
    void kunOnPainettu(const QString &numero);

private:
    void connectKeys();
    void resizeKey(QPushButton *key, const QSize &size);
    Ui::Numpad *ui;
};

// hox alla toinen class numpadia varten

#include <QPushButton>

class NumpadButtons : public QPushButton
{
    Q_OBJECT
public:
    NumpadButtons(QWidget *parent = nullptr);
signals:
    void onPainettu(QString);
};

#endif // NUMPAD_H
