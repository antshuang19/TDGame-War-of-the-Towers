/********************************************************************************
** Form generated from reading UI file 'level.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVEL_H
#define UI_LEVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_level
{
public:
    QPushButton *import_map;
    QPushButton *import_map_2;
    QPushButton *import_map_3;
    QLabel *label;

    void setupUi(QDialog *level)
    {
        if (level->objectName().isEmpty())
            level->setObjectName("level");
        level->resize(400, 300);
        import_map = new QPushButton(level);
        import_map->setObjectName("import_map");
        import_map->setGeometry(QRect(110, 120, 151, 51));
        import_map_2 = new QPushButton(level);
        import_map_2->setObjectName("import_map_2");
        import_map_2->setGeometry(QRect(110, 60, 151, 51));
        import_map_3 = new QPushButton(level);
        import_map_3->setObjectName("import_map_3");
        import_map_3->setGeometry(QRect(110, 190, 151, 51));
        label = new QLabel(level);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 401, 301));
        label->raise();
        import_map->raise();
        import_map_2->raise();
        import_map_3->raise();

        retranslateUi(level);

        QMetaObject::connectSlotsByName(level);
    } // setupUi

    void retranslateUi(QDialog *level)
    {
        level->setWindowTitle(QCoreApplication::translate("level", "Dialog", nullptr));
        import_map->setText(QCoreApplication::translate("level", "MEDIUM", nullptr));
        import_map_2->setText(QCoreApplication::translate("level", "EASY", nullptr));
        import_map_3->setText(QCoreApplication::translate("level", "HARD", nullptr));
        label->setText(QCoreApplication::translate("level", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class level: public Ui_level {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVEL_H
