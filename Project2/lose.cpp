#include "lose.h"
#include "ui_lose.h"

Lose::Lose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lose)
{
    ui->setupUi(this);
    QPixmap pix("img/lose.jpeg");
    ui->wallpaper->setPixmap(pix.scaled(400,300));
}

Lose::~Lose()
{
    delete ui;
}
