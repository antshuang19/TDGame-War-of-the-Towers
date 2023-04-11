/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *menu;
    QPushButton *START;
    QPushButton *QUIT;
    QPushButton *START_2;
    QPushButton *import_map;
    QPushButton *LEVEL;
    QPushButton *LEVEL_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        menu = new QLabel(centralwidget);
        menu->setObjectName("menu");
        menu->setGeometry(QRect(0, -10, 831, 581));
        START = new QPushButton(centralwidget);
        START->setObjectName("START");
        START->setGeometry(QRect(600, 180, 151, 51));
        QUIT = new QPushButton(centralwidget);
        QUIT->setObjectName("QUIT");
        QUIT->setGeometry(QRect(600, 470, 151, 51));
        START_2 = new QPushButton(centralwidget);
        START_2->setObjectName("START_2");
        START_2->setGeometry(QRect(600, 240, 151, 51));
        import_map = new QPushButton(centralwidget);
        import_map->setObjectName("import_map");
        import_map->setGeometry(QRect(600, 300, 151, 51));
        LEVEL = new QPushButton(centralwidget);
        LEVEL->setObjectName("LEVEL");
        LEVEL->setGeometry(QRect(600, 410, 151, 51));
        LEVEL_2 = new QPushButton(centralwidget);
        LEVEL_2->setObjectName("LEVEL_2");
        LEVEL_2->setGeometry(QRect(600, 350, 151, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        menu->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        START->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        QUIT->setText(QCoreApplication::translate("MainWindow", "QUIT", nullptr));
        START_2->setText(QCoreApplication::translate("MainWindow", "CHOOSE ENEMY", nullptr));
        import_map->setText(QCoreApplication::translate("MainWindow", "CHOOSE MAP", nullptr));
        LEVEL->setText(QCoreApplication::translate("MainWindow", "LEVEL", nullptr));
        LEVEL_2->setText(QCoreApplication::translate("MainWindow", "RULES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
