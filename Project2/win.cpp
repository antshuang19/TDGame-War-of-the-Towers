#include "win.h"
#include "ui_win.h"
#include"Games.h"
extern Games * games;
WIN::WIN(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WIN)
{
    ui->setupUi(this);
    QPixmap pix("img/win.jpeg");
    ui->wallpaper->setPixmap(pix.scaled(400,300));
}

WIN::~WIN()
{
    delete ui;
}

void WIN::on_quit_clicked()
{
    this->close();
}

