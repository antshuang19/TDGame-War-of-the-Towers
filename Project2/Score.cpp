#include "Score.h"
#include <QFont>
#include"Games.h"
#include <QGuiApplication>
#include"win.h"
#include<qmessagebox.h>
#include"lose.h"
extern Games * games;
extern bool lose_condition;
Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    score = 0;
    setPlainText(QString("Player Score: ") + QString::number(score));
    setDefaultTextColor(Qt::white);
    setFont(QFont("times",28));
}

void Score::increase(){
    score++;
    setPlainText(QString("Player Score: ") + QString::number(score));

    if(score==10)
    {
//        QMessageBox::aboutQt(this,"You Win");
        games->close();
        WIN * home = new WIN();
        home->show();
    }
}
int Score::getScore()
{
    return score;
}
