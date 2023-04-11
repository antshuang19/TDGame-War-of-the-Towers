#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>
#include<vector>
using namespace std;
class Player:public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Player(vector<int>&,vector<int>&,vector<int>&,char * );
public slots:
    void spawn();
private:
    vector<int>arrayx;
    vector<int>arrayy;
    vector<int>direction;
    char enemy_path[100];
    void copy_vector(vector<int>&dest,vector<int>&source)
    {
        for(int i =0; i < source.size();i++)
        {
            dest.push_back(source[i]);
        }
    }
};
#endif // PLAYER_H
