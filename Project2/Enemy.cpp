#include "Enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include"Score.h"
#include<iostream>
#include <vector>
#include"Games.h"
#include"pokemon.h"
#include"lose.h"
#include<map>
bool lose_condition=false;
extern int number_level;
extern Score * score;
using namespace std;
int x_pos=-1,y_pos=-1;
extern int bullet_pos_x,bullet_pos_y;
extern bool condition_bullets;
bool condition = false;
Bang * bang;
Bang1 * bung_tower;
extern pokemon *pk;
extern Games * games;
int x_tower,y_tower;
extern map<pair<int,int>,Tower*> mapping;
extern map<pair<int,int>,Tower2*>mapping2;
Tower * temp_tower=NULL;
Tower2 * tmp_tower = NULL;
Enemy::Enemy(QGraphicsItem *parent,vector<int>x,vector<int>y,vector<int>a,char enemy_path[]): QObject(), QGraphicsPixmapItem(parent)
{
    cout<<"Sini"<<endl;
    cond = cond % 4;
    setPixmap(QPixmap(enemy_path));
    copy_vector(this->arrayx,x);
    copy_vector(this->arrayy,y);
    copy_vector(this->direction,a);
    index =0;
    flag = direction[index];
    setPos(arrayx[index],arrayy[index]);
    index++;
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move_backward()));
    timer->start(number_level);
}
void Enemy::move_backward()
{
    if(bang != NULL)
    {
        scene()->removeItem(bang);
    }

    if(bullet_pos_x !=-1 or bullet_pos_y!=-1)
    {
        if(calculate_condition(pos().x(),pos().y() ,bullet_pos_x, bullet_pos_y))
        {

            decrease_health();
            bullet_pos_x=-1;
            bullet_pos_y=-1;
            condition_bullets=true;
            bang = new Bang();
            bang->setPos(x_pos,y_pos);
            scene()->addItem(bang);
        }
    }
    if(this->health <=0)
    {
        score->increase();
        condition =false;
        scene()->removeItem(this);
        delete this;
        return;
    }
    cout<<"score:"<<check_tower(pos().x(),pos().y())<<" "<<mapping.size()<<" "<<mapping2.size()<<endl;
    if(check_tower(pos().x(),pos().y()))
    {
        this->temp_flag=this->flag;
        this->flag=3;
    }
    x_pos = pos().x()+1;
    y_pos = pos().y()+1;
    condition =true;
    if(pos().x() == 0)
    {

        condition =false;
        scene()->removeItem(this);
        delete this;
        games->close();
        Lose * lose = new Lose();
        lose->show();
        qDeleteAll(games->items());
        return;
    }

    if(this->flag ==0)
    {
        setPos(x()-1,y());
        if (pos().x() == arrayx[index] and pos().y() == arrayy[index])
        {
            this->flag=direction[index];
            index++;
        }
    }
    if(this->flag ==1)
    {

        setPos(x(),y()+2);
        if (pos().x() == arrayx[index] and pos().y() == arrayy[index])
        {
            this->flag=direction[index];
            index++;
        }
    }
    if(this->flag ==2)
    {

        setPos(x(),y()-2);
        if (pos().x() == arrayx[index] and pos().y() == arrayy[index])
        {
            this->flag=direction[index];
            index++;
        }
    }
    if(this->flag==3)
    {

        if(tmp_tower!=NULL)
        {
            mapping2.erase(make_pair(x_tower,y_tower));
            tmp_tower->setPos(900,900);//no move anymore
            tmp_tower=NULL;
            x_pos = pos().x();
            y_pos = pos().y();
            this->flag = this->temp_flag;
            this->temp_flag=0;
            cout<<this->flag<<endl;
        }
        else
        {
            mapping.erase(make_pair(x_tower,y_tower));
            temp_tower->setPos(900,900);
            temp_tower=NULL;
            x_pos = pos().x();
            y_pos = pos().y();
            this->flag = this->temp_flag;
            this->temp_flag=0;
            cout<<this->flag<<endl;
        }
    }
}

void Enemy::decrease_health()
{
    this->health--;
}
bool Enemy::calculate_condition(int x, int y , int x1, int y1)
{
    if((x-30 <= x1 and x+30 >= x1) and (y-30 <= y1 and y+30 >= y1))
            return true;
    return false;
}

Bang::Bang(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap("img/bang.png"));
}

bool Enemy::check_tower(int x , int y)
{
    for(auto itr = mapping.begin(); itr!= mapping.end();itr++)
    {

        if((x >= itr->first.first and x <= itr->first.first+60) and (y >= itr->first.second and y <= itr->first.second +60))
        {
//            this->tower_flag=false;
            temp_tower = itr->second;
            tmp_tower = NULL;
            x_tower = itr->first.first;
            y_tower = itr->first.second;
            return true;
        }
    }
    for(auto itr = mapping2.begin(); itr!= mapping2.end();itr++)
    {
        if((x >= itr->first.first and x <= itr->first.first+60) and (y >= itr->first.second and y <= itr->first.second +60))
        {
//            this->tower_flag=true;
            tmp_tower = itr->second;
            temp_tower = NULL;
            x_tower = itr->first.first;
            y_tower = itr->first.second;
            return true;
        }
    }
    return false;
}

Bang1::Bang1(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap("img/bang.png"));
}






