#ifndef POKEMON_H
#define POKEMON_H


#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>

class pokemon: public QGraphicsPixmapItem
{
public:
    pokemon(QGraphicsItem* parent=0);
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
    void delete_tower();
};

class pokemon2: public QGraphicsPixmapItem
{
public:
    pokemon2(QGraphicsItem* parent=0);
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
    void delete_tower();
};


#endif
