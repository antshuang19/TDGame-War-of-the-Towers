#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
#include "Games.h"
#include"map_import.h""
#include<QMessageBox>
#include<string.h>
#include"choose_enemy.h"
#include"pokemon.h"
#include"Player.h"
#include"Enemy.h"
#include"Bullets.h"
#include"tutorial.h"
#include"level.h"
#include<iostream>

using namespace std;
Games * games;
string path_for_enemy;
string image_result ="img/map.jpeg",road_result="img/img.txt";
extern pokemon *pk;
extern pokemon2 *pk2;
extern Player * player;
extern Enemy * enemy ;
extern Bullets * bullet;
extern Bullets * bullets1;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    cout<<"enter this part"<<endl;
    ui->setupUi(this);
    QPixmap pix("img/image.jpg");
    ui->menu->setPixmap(pix.scaled(900,600));
    image_result ="img/map.jpeg";
    road_result="img/img.txt";
    path_for_enemy= "img/enemy.png";
    read_file();
    cout<<direction.size()<<endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_START_clicked()
{
     cout<<"masuk game"<<endl;
     if(games)
     {
         qDeleteAll(games->items());
     }
    char path_enemy[100],image[100];
    strcpy(image,image_result.c_str());
    strcpy(path_enemy,path_for_enemy.c_str());
    read_file();
    cout<<image<<" hellllooo "<<path_enemy<<endl;
    games = new Games(image,this->arrayx,this->arrayy,this->direction,path_enemy);
    games->show();
}


void MainWindow::on_QUIT_clicked()
{
    QMessageBox::StandardButton reply =  QMessageBox::question(this,"QUIT","Are you sure to quit ?",QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        exit(1);
    }
}

void MainWindow::read_file()
{
    FILE *source = fopen(road_result.c_str(), "r");
    if (source == NULL)
    {
        cout << "error"<< endl;
        QMessageBox::about(this,"错误","文件无法打开或出现错误");
        fclose(source);
        return;
    }
    else
    {
        char nums[100],number[100],direct[100];
        this->arrayx.clear();
        this->arrayy.clear();
        this->direction.clear();
        while(fscanf(source, "%[^,],%[^,],%s\n",nums,number,direct) != EOF)
        {
            int x = atoi(nums);
            int y = atoi(number);
            int a = atoi(direct);
            this->arrayx.push_back(x);
            this->arrayy.push_back(y);
            this->direction.push_back(a);
        }
        fclose(source);
        return;
    }
}

void MainWindow::on_START_2_clicked()
{
    choose_enemy * temp = new choose_enemy();
    temp->show();
}


void MainWindow::on_import_map_clicked()
{
    Map_import * temp = new Map_import();
    temp->show();
}


void MainWindow::on_LEVEL_clicked()
{
    level * temp = new level();
    temp->show();
}


void MainWindow::on_LEVEL_2_clicked()
{
    tutorial * temp = new tutorial();
    temp->show();
}

