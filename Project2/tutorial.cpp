#include "tutorial.h"
#include "ui_tutorial.h"

tutorial::tutorial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tutorial)
{
    ui->setupUi(this);
}

tutorial::~tutorial()
{
    delete ui;
}

void tutorial::on_pushButton_clicked()
{
    this->close();
}

