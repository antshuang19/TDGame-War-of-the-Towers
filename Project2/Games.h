#ifndef GAMES_H
#define GAMES_H
#include<QGraphicsView>
#include<QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include<QApplication>
#include<QMouseEvent>
#include<vector>
#include"Tower.h"
#include"Tower2.h"
using namespace std;
class Games : public QGraphicsView
{
private:
    vector<int>arrayx;
    vector<int>arrayy;
    vector<int>direction;
    char enemy_path[100];
public slots:
public:
    Games(char *,vector<int>&,vector<int>&,vector<int>&,char * enemy_path);
    QGraphicsScene * scene;
    void copy_vector(vector<int>&dest,vector<int>&source)
    {
        for(int i =0; i < source.size();i++)
        {
            dest.push_back(source[i]);
        }
    }
    void setCursor(QString filename,bool);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    QGraphicsPixmapItem * cursor;
    Tower * tower=NULL;
    Tower2 * tower2=NULL;
    bool quit_buttom_condition = false;
    void closing();

};


#endif // GAMES_H
