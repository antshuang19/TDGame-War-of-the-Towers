/********************************************************************************
** Form generated from reading UI file 'choose_enemy.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSE_ENEMY_H
#define UI_CHOOSE_ENEMY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_choose_enemy
{
public:
    QLabel *monster3;
    QPushButton *push3;
    QPushButton *push1;
    QPushButton *push2;
    QLabel *monster1;
    QLabel *monster2;
    QLabel *wallpaper;
    QLabel *monster4;
    QPushButton *push4;

    void setupUi(QDialog *choose_enemy)
    {
        if (choose_enemy->objectName().isEmpty())
            choose_enemy->setObjectName("choose_enemy");
        choose_enemy->resize(524, 321);
        monster3 = new QLabel(choose_enemy);
        monster3->setObjectName("monster3");
        monster3->setGeometry(QRect(290, 90, 81, 111));
        push3 = new QPushButton(choose_enemy);
        push3->setObjectName("push3");
        push3->setGeometry(QRect(290, 230, 61, 31));
        push1 = new QPushButton(choose_enemy);
        push1->setObjectName("push1");
        push1->setGeometry(QRect(40, 230, 61, 31));
        push2 = new QPushButton(choose_enemy);
        push2->setObjectName("push2");
        push2->setGeometry(QRect(160, 230, 61, 31));
        monster1 = new QLabel(choose_enemy);
        monster1->setObjectName("monster1");
        monster1->setGeometry(QRect(40, 90, 81, 111));
        monster2 = new QLabel(choose_enemy);
        monster2->setObjectName("monster2");
        monster2->setGeometry(QRect(160, 90, 81, 111));
        wallpaper = new QLabel(choose_enemy);
        wallpaper->setObjectName("wallpaper");
        wallpaper->setGeometry(QRect(0, 0, 521, 321));
        monster4 = new QLabel(choose_enemy);
        monster4->setObjectName("monster4");
        monster4->setGeometry(QRect(410, 90, 81, 111));
        push4 = new QPushButton(choose_enemy);
        push4->setObjectName("push4");
        push4->setGeometry(QRect(410, 230, 61, 31));
        wallpaper->raise();
        monster3->raise();
        push3->raise();
        push1->raise();
        push2->raise();
        monster1->raise();
        monster2->raise();
        monster4->raise();
        push4->raise();

        retranslateUi(choose_enemy);

        QMetaObject::connectSlotsByName(choose_enemy);
    } // setupUi

    void retranslateUi(QDialog *choose_enemy)
    {
        choose_enemy->setWindowTitle(QCoreApplication::translate("choose_enemy", "Dialog", nullptr));
        monster3->setText(QCoreApplication::translate("choose_enemy", "TextLabel", nullptr));
        push3->setText(QCoreApplication::translate("choose_enemy", "3", nullptr));
        push1->setText(QCoreApplication::translate("choose_enemy", "1", nullptr));
        push2->setText(QCoreApplication::translate("choose_enemy", "2", nullptr));
        monster1->setText(QCoreApplication::translate("choose_enemy", "TextLabel", nullptr));
        monster2->setText(QCoreApplication::translate("choose_enemy", "TextLabel", nullptr));
        wallpaper->setText(QCoreApplication::translate("choose_enemy", "TextLabel", nullptr));
        monster4->setText(QCoreApplication::translate("choose_enemy", "TextLabel", nullptr));
        push4->setText(QCoreApplication::translate("choose_enemy", "4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choose_enemy: public Ui_choose_enemy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSE_ENEMY_H
