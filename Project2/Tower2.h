#ifndef TOWER2_H
#define TOWER2_H
#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsItem>
#include <QPointF>
#include <QObject>

class Tower2:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Tower2(QGraphicsItem * parent=0);
    void decrease();
    void remove();
    int get_health()
    {
        return this->health;
    }
public slots:
    void attack_target();

private:
    int health=4;
    QPointF attack_dest;

};

#endif // TOWER2_H
