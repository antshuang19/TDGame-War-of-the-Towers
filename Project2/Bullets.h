#ifndef BULLETS_H
#define BULLETS_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Bullets: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Bullets(QGraphicsItem * parent=0);
    bool calculate_condition(int x, int y , int x1, int y1);
public slots:
    void move();
};
#endif // BULLETS_H
