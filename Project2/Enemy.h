#ifndef ENEMY_H
#define ENEMY_H
#include<iostream>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include<vector>
using namespace std;

class Enemy: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy(QGraphicsItem * parent=0,vector<int>x={},vector<int>y={},vector<int>a={},char enemy_path[]="");
public slots:

    void move_backward();

private:
//    bool tower_flag =false;
    int temp_flag;
    int flag;
    int cond;
    int index;
    int health =8;
    vector<int>arrayx;
    vector<int>arrayy;
    vector<int>direction;
    void decrease_health();
    bool calculate_condition(int x, int y , int x1, int y1);
    void copy_vector(vector<int>&dest,vector<int>&source)
    {
        for(int i =0; i < source.size();i++)
        {
            dest.push_back(source[i]);
        }
    }
    bool check_tower(int , int);
};
class Bang:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Bang(QGraphicsItem * parent=0);
};

class Bang1:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Bang1(QGraphicsItem * parent=0);
};
#endif // ENEMY_H
