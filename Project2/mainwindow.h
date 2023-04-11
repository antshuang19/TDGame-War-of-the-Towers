#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<vector>
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void read_file();
private slots:
    void on_START_clicked();
    void on_QUIT_clicked();

    void on_START_2_clicked();

    void on_import_map_clicked();

    void on_LEVEL_clicked();

    void on_LEVEL_2_clicked();

private:
    Ui::MainWindow *ui;
    vector<int>arrayx;
    vector<int> arrayy;
    vector<int>direction;
};
#endif // MAINWINDOW_H
