#ifndef LEVEL_H
#define LEVEL_H

#include <QDialog>

namespace Ui {
class level;
}

class level : public QDialog
{
    Q_OBJECT

public:
    explicit level(QWidget *parent = nullptr);
    ~level();

private slots:
    void on_import_map_2_clicked();

    void on_import_map_clicked();

    void on_import_map_3_clicked();

private:
    Ui::level *ui;
};

#endif // LEVEL_H
