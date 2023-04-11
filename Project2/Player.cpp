#include "Player.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Enemy.h"
#include<iostream>
using namespace std;
Enemy * enemy ;
Player::Player(vector<int>&x,vector<int>&y,vector<int>&a,char * enemy_path)
{
    copy_vector(this->arrayx,x);
    copy_vector(this->arrayy,y);
    copy_vector(this->direction,a);
    strcpy(this->enemy_path,enemy_path);

}
void Player::spawn(){
    // create an enemy
    cout<<"masuk player bro"<<endl;
    cout<<enemy_path<<" pathnya boss"<<endl;
    enemy = new Enemy(0,arrayx,arrayy,direction,enemy_path);
    scene()->addItem(enemy);
}


