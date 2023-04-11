#include "Tower2.h"
#include <QPixmap>
#include"Games.h"
#include "Bullets.h"
#include <QTimer>
#include <QGraphicsRectItem>
#include<iostream>
using namespace std;
extern int x_pos,y_pos;
extern bool condition;
extern Games *games;
Bullets * bullets1;
Tower2::Tower2(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent){
    // set the graphics
//    setPixmap(QPixmap("/Users/anthonyhuang/Desktop/Project/img/pokemon.png"));

    // connect a timer to attack_target
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(attack_target()));
    timer->start(1000);

    // set attack_dest
    attack_dest = QPointF(x_pos,y_pos);
}

void Tower2::attack_target()
{
    if(condition==false)
        return;
    bullets1 = new Bullets();
    bullets1->setPos(x(),y());
    attack_dest = QPointF(x_pos,y_pos);
    QLineF ln(QPointF(x(),y()),attack_dest);
    int angle = -1 * ln.angle();

    bullets1->setRotation(angle);
    games->scene->addItem(bullets1);
}
void Tower2::decrease()
{
    this->health--;
}

void Tower2::remove()
{
    scene()->removeItem(this);
    delete this;
    return;
}
