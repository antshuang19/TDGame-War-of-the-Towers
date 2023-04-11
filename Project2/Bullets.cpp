#include "Bullets.h"
#include <QPixmap>
#include <QTimer>
#include <QGraphicsScene>
#include <qmath.h> // qSin, qCos, qTan
#include<iostream>
using namespace std;
bool condition_bullets = false;
int bullet_pos_x =-1,bullet_pos_y =-1;
extern int x_pos,y_pos;
Bullets::Bullets(QGraphicsItem *parent): QObject(),QGraphicsPixmapItem(parent){
    // set graphics
    setPixmap(QPixmap("img/zubat.png"));


    // connect a timer to move()
    QTimer * move_timer = new QTimer(this);
    connect(move_timer,SIGNAL(timeout()),this,SLOT(move()));
    move_timer->start(100);
}




void Bullets::move()
{
    if(condition_bullets or (x() < 0 or x() > 800 or y() < 0 or y() > 600) or calculate_condition(x_pos,y_pos,bullet_pos_x,bullet_pos_y))
    {
        bullet_pos_x =-1;
        bullet_pos_y=-1;
        scene()->removeItem(this);
        delete this;
        condition_bullets=false;
        return;
    }
    int STEP_SIZE = 30;
    double theta = rotation(); // degrees

    double dy = STEP_SIZE * qSin(qDegreesToRadians(theta));
    double dx = STEP_SIZE * qCos(qDegreesToRadians(theta));

    setPos(x()+dx, y()+dy);
    bullet_pos_x =x()+dx;
    bullet_pos_y=y()+dy;


}
bool Bullets::calculate_condition(int x, int y , int x1, int y1)
{
    if((x-30 <= x1 and x+30 >= x1) and (y-30 <= y1 and y+30 >= y1))
            return true;
    return false;
}
