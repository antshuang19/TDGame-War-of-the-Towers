#include "Tower.h"
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
Bullets * bullet;
Tower::Tower(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent){
    // set the graphics
//    setPixmap(QPixmap("/Users/anthonyhuang/Desktop/Project/img/pokemon.png"));

    // connect a timer to attack_target
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(attack_target()));
    timer->start(1000);

    // set attack_dest
    attack_dest = QPointF(x_pos,y_pos);
}

void Tower::attack_target()
{
    if(x_pos > x()+200 or y_pos > y()+200 or x_pos < x()-200 or y_pos < y()-200)
        return;
    if(condition==false)
        return;
    bullet = new Bullets();
    bullet->setPos(x(),y());
    attack_dest = QPointF(x_pos,y_pos);
    QLineF ln(QPointF(x(),y()),attack_dest);
    int angle = -1 * ln.angle();

    bullet->setRotation(angle);
    games->scene->addItem(bullet);
}


