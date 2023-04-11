/********************************************************************************
** Form generated from reading UI file 'lose.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOSE_H
#define UI_LOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Lose
{
public:
    QLabel *wallpaper;
    QLabel *label;

    void setupUi(QDialog *Lose)
    {
        if (Lose->objectName().isEmpty())
            Lose->setObjectName("Lose");
        Lose->resize(400, 300);
        wallpaper = new QLabel(Lose);
        wallpaper->setObjectName("wallpaper");
        wallpaper->setGeometry(QRect(0, 0, 401, 301));
        label = new QLabel(Lose);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 90, 201, 121));

        retranslateUi(Lose);

        QMetaObject::connectSlotsByName(Lose);
    } // setupUi

    void retranslateUi(QDialog *Lose)
    {
        Lose->setWindowTitle(QCoreApplication::translate("Lose", "Dialog", nullptr));
        wallpaper->setText(QCoreApplication::translate("Lose", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Lose", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; color:#ffffff;\">YOU LOSE</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lose: public Ui_Lose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOSE_H
