#include "pokemon.h"
#include "Games.h"
#include "Tower.h"
#include "Tower2.h"
extern Games * games;

pokemon::pokemon(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap("img/kotak.png"));
}

void pokemon::mousePressEvent(QGraphicsSceneMouseEvent* event)
{
    if (!games->tower)
    {
        games->tower = new Tower();
        games->setCursor(QString("img/pokemon.png"),true);
    }
}
void pokemon::delete_tower()
{
    games->setCursor(QString("img/pokemon.png"),false);
}
pokemon2::pokemon2(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap("img/kotak2.png"));
}

void pokemon2::mousePressEvent(QGraphicsSceneMouseEvent* event)
{
    if (!games->tower2)
    {
        games->tower2 = new Tower2();
        games->setCursor(QString("img/pokemon2.png"),true);
    }
}

void pokemon2::delete_tower()
{
    games->setCursor(QString("img/pokemon.png"),false);
}
