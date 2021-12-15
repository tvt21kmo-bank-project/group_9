#ifndef KEYPAD_H
#define KEYPAD_H

#include <QWidget>

namespace Ui {
class Keypad;
}

class Keypad : public QWidget
{
    Q_OBJECT

public:
    explicit Keypad(QWidget *parent = nullptr);
    ~Keypad();

private slots:
    void on_btn0_clicked();
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_btn8_clicked();
    void on_btn9_clicked();
    void on_btnCancel_clicked();
    void on_btnClear_clicked();
    void on_btnEnter_clicked();

signals:
    void numpadiaPainettu(const QString &text);

private:
    Ui::Keypad *ui;
};

#endif // KEYPAD_H
