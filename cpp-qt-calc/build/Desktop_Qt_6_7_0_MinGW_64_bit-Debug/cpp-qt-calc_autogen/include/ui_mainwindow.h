/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QToolButton *acButton;
    QLabel *numberDisplay;
    QToolButton *absoluteButton;
    QToolButton *percentButton;
    QToolButton *devideButton;
    QToolButton *sevenButton;
    QToolButton *eightButton;
    QToolButton *nineButton;
    QToolButton *fourButton;
    QToolButton *fiveButton;
    QToolButton *sixButton;
    QToolButton *oneButton;
    QToolButton *twoButton;
    QToolButton *threeButton;
    QToolButton *timesButton;
    QToolButton *minusButton;
    QToolButton *plusButton;
    QToolButton *dotButton;
    QToolButton *equalsButton;
    QToolButton *zeroButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(397, 658);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(8, 8, 8);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        acButton = new QToolButton(centralwidget);
        acButton->setObjectName("acButton");
        acButton->setGeometry(QRect(30, 170, 75, 75));
        QFont font;
        font.setFamilies({QString::fromUtf8("Poppins")});
        font.setPointSize(20);
        acButton->setFont(font);
        acButton->setStyleSheet(QString::fromUtf8("background-color: rgb(143, 143, 143);\n"
"color: rgb(0, 0, 0);\n"
"border: 0px solid;\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        numberDisplay = new QLabel(centralwidget);
        numberDisplay->setObjectName("numberDisplay");
        numberDisplay->setGeometry(QRect(30, 89, 341, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Poppins Light")});
        font1.setPointSize(36);
        numberDisplay->setFont(font1);
        numberDisplay->setAutoFillBackground(false);
        numberDisplay->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        numberDisplay->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        absoluteButton = new QToolButton(centralwidget);
        absoluteButton->setObjectName("absoluteButton");
        absoluteButton->setGeometry(QRect(120, 170, 75, 75));
        absoluteButton->setFont(font);
        absoluteButton->setStyleSheet(QString::fromUtf8("background-color: rgb(143, 143, 143);\n"
"color: rgb(0, 0, 0);\n"
"border: 0px solid;\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        percentButton = new QToolButton(centralwidget);
        percentButton->setObjectName("percentButton");
        percentButton->setGeometry(QRect(210, 170, 75, 75));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Poppins")});
        font2.setPointSize(25);
        percentButton->setFont(font2);
        percentButton->setStyleSheet(QString::fromUtf8("background-color: rgb(143, 143, 143);\n"
"border: 0px solid;\n"
"color: rgb(0, 0, 0);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        devideButton = new QToolButton(centralwidget);
        devideButton->setObjectName("devideButton");
        devideButton->setGeometry(QRect(300, 170, 75, 75));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Poppins")});
        font3.setPointSize(30);
        devideButton->setFont(font3);
        devideButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        sevenButton = new QToolButton(centralwidget);
        sevenButton->setObjectName("sevenButton");
        sevenButton->setGeometry(QRect(30, 260, 75, 75));
        sevenButton->setFont(font3);
        sevenButton->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        eightButton = new QToolButton(centralwidget);
        eightButton->setObjectName("eightButton");
        eightButton->setGeometry(QRect(120, 260, 75, 75));
        eightButton->setFont(font3);
        eightButton->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        nineButton = new QToolButton(centralwidget);
        nineButton->setObjectName("nineButton");
        nineButton->setGeometry(QRect(210, 260, 75, 75));
        nineButton->setFont(font3);
        nineButton->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        fourButton = new QToolButton(centralwidget);
        fourButton->setObjectName("fourButton");
        fourButton->setGeometry(QRect(30, 350, 75, 75));
        fourButton->setFont(font3);
        fourButton->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        fiveButton = new QToolButton(centralwidget);
        fiveButton->setObjectName("fiveButton");
        fiveButton->setGeometry(QRect(120, 350, 75, 75));
        fiveButton->setFont(font3);
        fiveButton->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        sixButton = new QToolButton(centralwidget);
        sixButton->setObjectName("sixButton");
        sixButton->setGeometry(QRect(210, 350, 75, 75));
        sixButton->setFont(font3);
        sixButton->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        oneButton = new QToolButton(centralwidget);
        oneButton->setObjectName("oneButton");
        oneButton->setGeometry(QRect(30, 440, 75, 75));
        oneButton->setFont(font3);
        oneButton->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        twoButton = new QToolButton(centralwidget);
        twoButton->setObjectName("twoButton");
        twoButton->setGeometry(QRect(120, 440, 75, 75));
        twoButton->setFont(font3);
        twoButton->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        threeButton = new QToolButton(centralwidget);
        threeButton->setObjectName("threeButton");
        threeButton->setGeometry(QRect(210, 440, 75, 75));
        threeButton->setFont(font3);
        threeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        timesButton = new QToolButton(centralwidget);
        timesButton->setObjectName("timesButton");
        timesButton->setGeometry(QRect(300, 260, 75, 75));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Poppins")});
        font4.setPointSize(30);
        font4.setBold(false);
        font4.setItalic(false);
        timesButton->setFont(font4);
        timesButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        minusButton = new QToolButton(centralwidget);
        minusButton->setObjectName("minusButton");
        minusButton->setGeometry(QRect(300, 350, 75, 75));
        minusButton->setFont(font4);
        minusButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        plusButton = new QToolButton(centralwidget);
        plusButton->setObjectName("plusButton");
        plusButton->setGeometry(QRect(300, 440, 75, 75));
        plusButton->setFont(font4);
        plusButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        dotButton = new QToolButton(centralwidget);
        dotButton->setObjectName("dotButton");
        dotButton->setGeometry(QRect(210, 530, 75, 75));
        dotButton->setFont(font3);
        dotButton->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        equalsButton = new QToolButton(centralwidget);
        equalsButton->setObjectName("equalsButton");
        equalsButton->setGeometry(QRect(300, 530, 75, 75));
        equalsButton->setFont(font4);
        equalsButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-width:75px;\n"
"max-height:75px;\n"
"min-width:75px;\n"
"min-height:75px;\n"
""));
        zeroButton = new QToolButton(centralwidget);
        zeroButton->setObjectName("zeroButton");
        zeroButton->setGeometry(QRect(30, 530, 171, 75));
        zeroButton->setFont(font3);
        zeroButton->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border: 0px solid;\n"
"color: rgb(255, 255, 255);\n"
"border-radius:37px;\n"
"max-height:75px;\n"
"min-width:100px;\n"
"min-height:75px;\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 397, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        acButton->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        numberDisplay->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        absoluteButton->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        percentButton->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        devideButton->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        sevenButton->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        eightButton->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        nineButton->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        fourButton->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        fiveButton->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        sixButton->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        oneButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        twoButton->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        threeButton->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        timesButton->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        minusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        plusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        dotButton->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        equalsButton->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        zeroButton->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
