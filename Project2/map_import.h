#ifndef MAP_IMPORT_H
#define MAP_IMPORT_H
#include <QDialog>
#include<map>
#include<string.h>
#include<iostream>
#include <QDialog>
#include<QMessageBox>
using namespace std;
namespace Ui {
class Map_import;
}

class Map_import : public QDialog
{
    Q_OBJECT

public:
    explicit Map_import(QWidget *parent = nullptr);
    ~Map_import();
    void intilize_combox();

private slots:
    void on_import_2_clicked();

    void on_ok_clicked();

private:
     map<std::string,pair<std::string,std::string>> mapping;
    Ui::Map_import *ui;
};

#endif // MAP_IMPORT_H
