#include "choose_enemy.h"
#include "ui_choose_enemy.h"
#include<QPixmap>
#include<iostream>
using namespace std;
extern string path_for_enemy;
choose_enemy::choose_enemy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::choose_enemy)
{
    ui->setupUi(this);
    QPixmap background("img/background.png");
    ui->wallpaper->setPixmap(background.scaled(600,500));
    QPixmap picture("img/enemy.png");
    ui->monster1->setPixmap(picture.scaled(60,90));
    QPixmap picture1("img/enemy1.png");
    ui->monster2->setPixmap(picture1.scaled(60,90));
    QPixmap picture2("img/enemy2.png");
    ui->monster3->setPixmap(picture2.scaled(60,90));
    QPixmap picture3("img/enemy3.png");
    ui->monster4->setPixmap(picture3.scaled(60,90));
}

choose_enemy::~choose_enemy()
{
    delete ui;
}

void choose_enemy::on_push1_clicked()
{
    path_for_enemy="img/enemy.png";
    this->close();
}
void choose_enemy::on_push2_clicked()
{
    path_for_enemy="img/enemy1.png";
    this->close();
}

void choose_enemy::on_push3_clicked()
{
    path_for_enemy="img/enemy2.png";
    this->close();
}


void choose_enemy::on_push4_clicked()
{
    path_for_enemy="img/enemy3.png";
    this->close();
}

