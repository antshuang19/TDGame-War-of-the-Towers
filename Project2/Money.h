#ifndef MONEY_H
#define MONEY_H
#include <QGraphicsTextItem>
class Money: public QGraphicsTextItem{
public:
    Money(QGraphicsItem * parent=0);
    void decrease();
    int getMoney();
private:
    float money;
};
#endif // MONEY_H
