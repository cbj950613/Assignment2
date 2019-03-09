#include "grade_calculator.h"
#include "ui_grade_calculator.h"

grade_calculator::grade_calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::grade_calculator)
{
    ui->setupUi(this);
}

grade_calculator::~grade_calculator()
{
    delete ui;
}

void grade_calculator::on_hw1slider_valueChanged(int value)
{

}
