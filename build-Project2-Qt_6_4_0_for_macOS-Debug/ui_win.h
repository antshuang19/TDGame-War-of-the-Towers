/********************************************************************************
** Form generated from reading UI file 'win.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_H
#define UI_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WIN
{
public:
    QPushButton *quit;
    QLabel *label;
    QLabel *wallpaper;

    void setupUi(QDialog *WIN)
    {
        if (WIN->objectName().isEmpty())
            WIN->setObjectName("WIN");
        WIN->resize(400, 300);
        quit = new QPushButton(WIN);
        quit->setObjectName("quit");
        quit->setGeometry(QRect(110, 140, 151, 51));
        label = new QLabel(WIN);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 20, 271, 81));
        wallpaper = new QLabel(WIN);
        wallpaper->setObjectName("wallpaper");
        wallpaper->setGeometry(QRect(0, 0, 401, 301));
        wallpaper->raise();
        quit->raise();
        label->raise();

        retranslateUi(WIN);

        QMetaObject::connectSlotsByName(WIN);
    } // setupUi

    void retranslateUi(QDialog *WIN)
    {
        WIN->setWindowTitle(QCoreApplication::translate("WIN", "Dialog", nullptr));
        quit->setText(QCoreApplication::translate("WIN", "QUIT", nullptr));
        label->setText(QCoreApplication::translate("WIN", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700; color:#ffffff;\">YOU WIN VS POKEMON</span></p></body></html>", nullptr));
        wallpaper->setText(QCoreApplication::translate("WIN", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WIN: public Ui_WIN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_H
