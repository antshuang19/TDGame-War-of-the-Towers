#include "Money.h"

#include <QFont>
#include <QGuiApplication>

Money::Money(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    money = 100;
    setPlainText(QString("Money: ") + QString::number(money));
    setDefaultTextColor(Qt::white);
    setFont(QFont("times",28));
}

void Money::decrease(){
    money-=10;
    setPlainText(QString("Money: ") + QString::number(money));
}
int Money::getMoney()
{
    return money;
}
