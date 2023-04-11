/********************************************************************************
** Form generated from reading UI file 'map_import.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_IMPORT_H
#define UI_MAP_IMPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Map_import
{
public:
    QComboBox *combobox;
    QPushButton *import_2;
    QLineEdit *image;
    QLineEdit *enemy_road;
    QLineEdit *name;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *wallpaper;
    QPushButton *ok;

    void setupUi(QDialog *Map_import)
    {
        if (Map_import->objectName().isEmpty())
            Map_import->setObjectName("Map_import");
        Map_import->resize(554, 394);
        combobox = new QComboBox(Map_import);
        combobox->setObjectName("combobox");
        combobox->setGeometry(QRect(170, 100, 201, 32));
        import_2 = new QPushButton(Map_import);
        import_2->setObjectName("import_2");
        import_2->setGeometry(QRect(420, 320, 100, 32));
        image = new QLineEdit(Map_import);
        image->setObjectName("image");
        image->setGeometry(QRect(410, 240, 113, 21));
        enemy_road = new QLineEdit(Map_import);
        enemy_road->setObjectName("enemy_road");
        enemy_road->setGeometry(QRect(410, 290, 113, 21));
        name = new QLineEdit(Map_import);
        name->setObjectName("name");
        name->setGeometry(QRect(410, 190, 113, 21));
        label = new QLabel(Map_import);
        label->setObjectName("label");
        label->setGeometry(QRect(440, 170, 58, 16));
        label_2 = new QLabel(Map_import);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(440, 220, 58, 16));
        label_3 = new QLabel(Map_import);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(440, 270, 81, 16));
        wallpaper = new QLabel(Map_import);
        wallpaper->setObjectName("wallpaper");
        wallpaper->setGeometry(QRect(0, 0, 551, 391));
        ok = new QPushButton(Map_import);
        ok->setObjectName("ok");
        ok->setGeometry(QRect(180, 290, 141, 71));
        wallpaper->raise();
        combobox->raise();
        import_2->raise();
        image->raise();
        enemy_road->raise();
        name->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        ok->raise();

        retranslateUi(Map_import);

        QMetaObject::connectSlotsByName(Map_import);
    } // setupUi

    void retranslateUi(QDialog *Map_import)
    {
        Map_import->setWindowTitle(QCoreApplication::translate("Map_import", "Dialog", nullptr));
        import_2->setText(QCoreApplication::translate("Map_import", "IMPORT", nullptr));
        label->setText(QCoreApplication::translate("Map_import", "<html><head/><body><p><span style=\" color:#ffffff;\">NAME:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Map_import", "<html><head/><body><p><span style=\" color:#ffffff;\">Map Path:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Map_import", "<html><head/><body><p><span style=\" color:#ffffff;\">Enemy road:</span></p></body></html>", nullptr));
        wallpaper->setText(QCoreApplication::translate("Map_import", "TextLabel", nullptr));
        ok->setText(QCoreApplication::translate("Map_import", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Map_import: public Ui_Map_import {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_IMPORT_H
