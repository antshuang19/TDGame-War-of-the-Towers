#ifndef CHOOSE_ENEMY_H
#define CHOOSE_ENEMY_H

#include <QDialog>
#include<string.h>
using namespace std;

namespace Ui {
class choose_enemy;
}

class choose_enemy : public QDialog
{
    Q_OBJECT

public:
    explicit choose_enemy(QWidget *parent = nullptr);
    ~choose_enemy();
    string get_path()
    {
        return path;
    }
private slots:
    void on_push1_clicked();

    void on_push2_clicked();

    void on_push3_clicked();

    void on_push4_clicked();

private:
    Ui::choose_enemy *ui;
    string path;
};

#endif // CHOOSE_ENEMY_H
