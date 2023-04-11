#include "level.h"
#include "ui_level.h"
#include<QMovie>
int number_level=200;
int number_speed=11000;
level::level(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::level)
{
    ui->setupUi(this);
    QMovie *movie = new QMovie("img/img.gif");
    ui->label->setMovie(movie);
    movie->start();
}

level::~level()
{
    delete ui;
}

void level::on_import_map_2_clicked()
{
    number_speed=11000;
    number_level=200;
    this->close();
}


void level::on_import_map_clicked()
{
    number_speed=8000;
    number_level=75;
    this->close();
}


void level::on_import_map_3_clicked()
{
    number_speed=1000;
    number_level=25;
    this->close();
}

