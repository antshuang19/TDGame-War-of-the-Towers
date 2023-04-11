#ifndef WIN_H
#define WIN_H

#include <QDialog>

namespace Ui {
class WIN;
}

class WIN : public QDialog
{
    Q_OBJECT

public:
    explicit WIN(QWidget *parent = nullptr);
    ~WIN();

private slots:
    void on_quit_clicked();




private:
    Ui::WIN *ui;
};

#endif // WIN_H
