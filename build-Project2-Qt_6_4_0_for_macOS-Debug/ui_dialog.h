/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *enemy_road;
    QLineEdit *image;
    QLineEdit *name;
    QLabel *menu;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(425, 306);
        comboBox = new QComboBox(Dialog);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(80, 70, 241, 31));
        comboBox->setMinimumSize(QSize(241, 31));
        comboBox->setMaximumSize(QSize(16777215, 31));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 240, 100, 32));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 240, 100, 32));
        enemy_road = new QLineEdit(Dialog);
        enemy_road->setObjectName("enemy_road");
        enemy_road->setGeometry(QRect(290, 210, 113, 21));
        image = new QLineEdit(Dialog);
        image->setObjectName("image");
        image->setGeometry(QRect(290, 180, 113, 21));
        name = new QLineEdit(Dialog);
        name->setObjectName("name");
        name->setGeometry(QRect(290, 150, 113, 21));
        menu = new QLabel(Dialog);
        menu->setObjectName("menu");
        menu->setGeometry(QRect(0, 0, 421, 301));
        menu->raise();
        comboBox->raise();
        pushButton->raise();
        pushButton_2->raise();
        enemy_road->raise();
        image->raise();
        name->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "IMPORT", nullptr));
        menu->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
