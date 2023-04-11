#include "Games.h"
#include<QTimer>
#include <QGraphicsScene>
#include"Player.h"
#include"Score.h"
#include"Money.h"
#include"Bullets.h"
#include"pokemon.h"
#include<QPixmap>
#include<iostream>
#include<vector>
#include<QMenuBar>
#include<QPushButton>
#include<QPixmap>
#include<QMessageBox>
#include<map>
using namespace std;
Score *score;
Money * money;
pokemon *pk;
pokemon2 *pk2;
Player * player;
extern int number_speed;

map<pair<int,int>,Tower*> mapping;
map<pair<int,int>,Tower2*>mapping2;

Games::Games(char *image,vector<int>&x,vector<int>&y,vector<int>&a,char * enemy_path)
{
     //set the scene
     cout<<image<<" hadhe"<<endl;
     strcpy(this->enemy_path,enemy_path);
     scene = new QGraphicsScene;
     scene->setBackgroundBrush(Qt::black);
     scene->setSceneRect(0,0,800,600);
     QPixmap pixmap(image);
     scene->addPixmap(pixmap.scaled(800,500));
     setScene(scene);

     QPushButton *button = new QPushButton("&Quit", this);
     connect(button,&QPushButton::clicked,this,&Games::closing);

     button->setGeometry(730,0,60,40);
     scene->addWidget(button);
     //copy the information
     cout<<" hadhe"<<endl;
     copy_vector(this->arrayx,x);
     copy_vector(this->arrayy,y);
     copy_vector(this->direction,a);
     cout<<" hadhe"<<endl;
    // make a enemy move from start to end point
     player = new Player(x,y,a,enemy_path);
     scene->addItem(player);
     QTimer * timer = new QTimer();
     QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
     timer->start(number_speed);
     //make a tower item
     pk = new pokemon;
     scene->addItem(pk);
     //make a tower item2
     pk2 = new pokemon2;
     pk2->setPos(0,100);
     scene->addItem(pk2);
     //add enemy score
     score = new Score;
     score->setPos(0,560);
     scene->addItem(score);
     //add money value
     money = new Money;
     money->setPos(0,530);
     scene->addItem(money);
}

void Games::setCursor(QString filename, bool condition){
    // if there is already a cursor, remove it first
    if (cursor){
        scene->removeItem(cursor);
        delete cursor;
    }
    if(condition==false)
        return;
    cursor = new QGraphicsPixmapItem();
    cursor->setPixmap(QPixmap(filename));
    scene->addItem(cursor);
}

void Games::mouseMoveEvent(QMouseEvent *event)
{
    if (cursor){
        cursor->setPos(event->pos());
    }
}
void Games::mousePressEvent(QMouseEvent *event)
{
    // if we are building
    if(money->getMoney()<=0)
        return;

    if (tower)
    {
        // return if the cursor is colliding with a tower
        QList<QGraphicsItem *> items = cursor->collidingItems();
        for (size_t i = 0, n = items.size(); i < n; i++)
        {
            if (dynamic_cast<Tower*>(items[i]))
            {
                return;
            }
        }

        // otherwise, build at the clicked location
        int x = event->pos().x();
        int y = event->pos().y();
        mapping[make_pair(x,y)] = tower;

        money->decrease();
        scene->addItem(this->tower);
        cout<<event->pos().x()<<" "<<event->pos().y()<<endl;
        tower->setPos(event->pos());
        cursor = nullptr;
        tower = nullptr;
    }
    else if(tower2)
    {        // return if the cursor is colliding with a tower
        QList<QGraphicsItem *> items = cursor->collidingItems();
        for (size_t i = 0, n = items.size(); i < n; i++)
        {
            if (dynamic_cast<Tower2*>(items[i]) )
            {
                return;
            }
        }

        // otherwise, build at the clicked location
        money->decrease();
        int x = event->pos().x();
        int y = event->pos().y();
        mapping2[make_pair(x,y)] = tower2;

        scene->addItem(this->tower2);
        tower2->setPos(event->pos());
        cursor = nullptr;
        tower2 = nullptr;

    }

    else
    {
        QGraphicsView::mousePressEvent(event);
    }

}
void Games::closing()
{
    QMessageBox::StandardButton reply =  QMessageBox::question(this,"QUIT","Are you sure to quit ?",QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        qDeleteAll(this->items());
        this->close();
    }
}


