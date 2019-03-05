#ifndef GRADE_CALCULATOR_H
#define GRADE_CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class grade_calculator;
}

class grade_calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit grade_calculator(QWidget *parent = nullptr);
    ~grade_calculator();

private slots:
    void on_hw1slider_valueChanged(int value);

private:
    Ui::grade_calculator *ui;
};

#endif // MAINWINDOW_H
