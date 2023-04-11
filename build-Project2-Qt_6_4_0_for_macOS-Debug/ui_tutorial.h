/********************************************************************************
** Form generated from reading UI file 'tutorial.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORIAL_H
#define UI_TUTORIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_tutorial
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;

    void setupUi(QDialog *tutorial)
    {
        if (tutorial->objectName().isEmpty())
            tutorial->setObjectName("tutorial");
        tutorial->resize(558, 407);
        textBrowser = new QTextBrowser(tutorial);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 20, 521, 361));
        label = new QLabel(tutorial);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 20, 181, 51));
        label_2 = new QLabel(tutorial);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 90, 461, 61));
        label_3 = new QLabel(tutorial);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 150, 411, 81));
        label_4 = new QLabel(tutorial);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 230, 401, 16));
        label_5 = new QLabel(tutorial);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 260, 311, 16));
        label_6 = new QLabel(tutorial);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 290, 371, 16));
        label_7 = new QLabel(tutorial);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 320, 181, 16));
        pushButton = new QPushButton(tutorial);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 340, 100, 32));

        retranslateUi(tutorial);

        QMetaObject::connectSlotsByName(tutorial);
    } // setupUi

    void retranslateUi(QDialog *tutorial)
    {
        tutorial->setWindowTitle(QCoreApplication::translate("tutorial", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("tutorial", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" dir='rtl' style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; font-weight:700;\">TUTORIAL</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("tutorial", "<html><head/><body><p>1.\346\234\254\346\270\270\346\210\217\346\230\257\344\270\200\346\254\276\345\241\224\351\230\262\346\270\270\346\210\217\357\274\214\344\275\240\345\277\205\351\241\273\346\235\200\346\255\273\345\244\232\350\276\276100\344\270\252\346\200\252\347\211\251\357\274\214\346\211\215\350\203\275\350\265\242\345\276\227\350\277\231\345\234\272\346\257\224\350\265\233\343\200\202</p><p>   \345\217\246\344\270\200\346\226\271\351\235\242\357\274\214\345\246\202\346\236\234\344\270\200\344\270\252\346\200\252\347\211\251\350\256\276\346\263\225\344\273\216\346\217\220\344\276\233\347\232\204\350\267\257\345\276\204\344\270\255\351\200\203\350\204\261\357\274\214\351\202\243\344\271\210\344\275\240\345\260\206\350\242\253\345\256\243\345\270\203\344\270\272\345\244\261\350\264\245\350\200\205\343\200\202</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("tutorial", "<html><head/><body><p>2.\344\275\240\346\234\211\344\270\244\347\247\215\347\261\273\345\236\213\347\232\204\345\241\224\357\274\214\346\257\217\347\247\215\345\241\224\351\203\275\346\234\211\344\274\230\347\274\272\347\202\271\357\274\214\350\277\221\350\267\235\347\246\273\345\241\224\345\217\257\344\273\245\345\276\210\345\245\275\345\234\260\346\235\200\346\255\273\346\225\214\344\272\272\357\274\214</p><p>\350\200\214\350\277\234\347\250\213\345\241\224\345\217\257\344\273\245\345\276\210\345\245\275\345\234\260\346\235\200\346\255\273\346\200\252\347\211\251\357\274\214\344\275\206\350\277\234\344\270\215\345\246\202\350\277\234\347\250\213\345\241\224\343\200\202</p><p> \346\257\217\345\234\272\346\270\270\346\210\217\347\273\231\344\275\240100\351\207\221\345\270\201\357\274\214\351\207\221\345\270\201\344\270\215\350\203\275\350\241\245\357\274\214\347\255\211\347\272\247\350\266\212\351\253\230\357\274\214\346\225\214\344\272\272\345\274\272\345\272\246\350\266\212\351\253\230\343\200\202</p></body>"
                        "</html>", nullptr));
        label_4->setText(QCoreApplication::translate("tutorial", "3. \345\214\205\345\220\253\344\270\211\344\270\252\347\272\247\345\210\253\357\274\232\347\256\200\345\215\225\343\200\201\344\270\255\347\255\211\345\222\214\345\233\260\351\232\276\343\200\202", nullptr));
        label_5->setText(QCoreApplication::translate("tutorial", "4. \345\246\202\346\236\234\346\202\250\346\224\266\351\233\206\344\272\206\345\244\232\350\276\276 100 \345\210\206\357\274\214\346\202\250\345\260\206\350\242\253\345\256\243\345\270\203\344\270\272\350\216\267\350\203\234\350\200\205\343\200\202", nullptr));
        label_6->setText(QCoreApplication::translate("tutorial", "5.\344\275\240\345\217\257\344\273\245\351\200\211\346\213\251\344\275\240\346\203\263\346\211\223\347\232\204\346\225\214\344\272\272\357\274\214\346\257\217\344\270\252\346\225\214\344\272\272\347\232\204\351\232\276\345\272\246\351\203\275\346\230\257\344\270\200\346\240\267\347\232\204\343\200\202", nullptr));
        label_7->setText(QCoreApplication::translate("tutorial", "6.\344\272\253\345\217\227\350\277\231\344\270\252\346\270\270\346\210\217\347\232\204\345\277\253\346\204\237\357\274\214\350\260\242\350\260\242\343\200\202", nullptr));
        pushButton->setText(QCoreApplication::translate("tutorial", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tutorial: public Ui_tutorial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORIAL_H
