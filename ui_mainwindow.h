/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdmin;
    QWidget *centralwidget;
    QLabel *main_result;
    QLabel *update;
    QWidget *widget;
    QLabel *label;
    QWidget *widget_4;
    QFrame *line_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *morning_modern;
    QLabel *morning_internet;
    QLabel *evening_modern;
    QLabel *evening_internet;
    QWidget *widget_5;
    QFrame *line_4;
    QLabel *label_7;
    QLabel *evening_result;
    QWidget *widget_6;
    QFrame *line_5;
    QLabel *label_5;
    QLabel *morning_result;
    QWidget *widget_7;
    QFrame *line_6;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *set;
    QFrame *line_7;
    QLabel *label_6;
    QLabel *value;
    QLabel *main_result2;
    QMenuBar *menuBar;
    QMenu *menuAbout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(393, 681);
        MainWindow->setMinimumSize(QSize(393, 681));
        MainWindow->setMaximumSize(QSize(393, 681));
        MainWindow->setSizeIncrement(QSize(393, 683));
        actionAdmin = new QAction(MainWindow);
        actionAdmin->setObjectName(QString::fromUtf8("actionAdmin"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/me.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdmin->setIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        main_result = new QLabel(centralwidget);
        main_result->setObjectName(QString::fromUtf8("main_result"));
        main_result->setGeometry(QRect(130, 140, 131, 111));
        main_result->setStyleSheet(QString::fromUtf8("font: 75 80pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 0, 0);"));
        main_result->setAlignment(Qt::AlignCenter);
        update = new QLabel(centralwidget);
        update->setObjectName(QString::fromUtf8("update"));
        update->setGeometry(QRect(80, 240, 251, 31));
        update->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 441, 141));
        widget->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 127);"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 401, 141));
        label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Pyidaungsu\";"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(40, 530, 311, 111));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));
        line_3 = new QFrame(widget_4);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 50, 311, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(widget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 20, 71, 16));
        label_9->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";"));
        label_10 = new QLabel(widget_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 70, 71, 21));
        label_10->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";"));
        label_11 = new QLabel(widget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(160, 10, 47, 13));
        label_12 = new QLabel(widget_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(160, 62, 47, 21));
        label_13 = new QLabel(widget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(240, 10, 47, 13));
        label_14 = new QLabel(widget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(240, 60, 47, 21));
        morning_modern = new QLabel(widget_4);
        morning_modern->setObjectName(QString::fromUtf8("morning_modern"));
        morning_modern->setGeometry(QRect(170, 30, 21, 21));
        morning_modern->setStyleSheet(QString::fromUtf8("font: 72 16pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 0, 127);"));
        morning_internet = new QLabel(widget_4);
        morning_internet->setObjectName(QString::fromUtf8("morning_internet"));
        morning_internet->setGeometry(QRect(250, 30, 21, 21));
        morning_internet->setStyleSheet(QString::fromUtf8("font: 72 16pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 0, 127);"));
        evening_modern = new QLabel(widget_4);
        evening_modern->setObjectName(QString::fromUtf8("evening_modern"));
        evening_modern->setGeometry(QRect(170, 80, 21, 21));
        evening_modern->setStyleSheet(QString::fromUtf8("font: 72 16pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 0, 127);"));
        evening_internet = new QLabel(widget_4);
        evening_internet->setObjectName(QString::fromUtf8("evening_internet"));
        evening_internet->setGeometry(QRect(250, 80, 21, 21));
        evening_internet->setStyleSheet(QString::fromUtf8("font: 72 16pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 0, 127);"));
        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(40, 450, 311, 61));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        line_4 = new QFrame(widget_5);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(200, 0, 20, 61));
        line_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(widget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 20, 111, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";"));
        evening_result = new QLabel(widget_5);
        evening_result->setObjectName(QString::fromUtf8("evening_result"));
        evening_result->setGeometry(QRect(240, 20, 31, 21));
        evening_result->setStyleSheet(QString::fromUtf8("font: 20pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 0, 0);"));
        evening_result->setAlignment(Qt::AlignCenter);
        evening_result->setIndent(0);
        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(40, 380, 311, 61));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        line_5 = new QFrame(widget_6);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(200, 0, 20, 61));
        line_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(widget_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 20, 111, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";"));
        morning_result = new QLabel(widget_6);
        morning_result->setObjectName(QString::fromUtf8("morning_result"));
        morning_result->setGeometry(QRect(240, 20, 31, 21));
        morning_result->setStyleSheet(QString::fromUtf8("font: 20pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 0, 0);"));
        morning_result->setAlignment(Qt::AlignCenter);
        morning_result->setIndent(0);
        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(40, 280, 311, 81));
        widget_7->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(170, 255, 255);"));
        line_6 = new QFrame(widget_7);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(90, 0, 20, 81));
        line_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(widget_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 10, 41, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_4 = new QLabel(widget_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 10, 61, 31));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        set = new QLabel(widget_7);
        set->setObjectName(QString::fromUtf8("set"));
        set->setGeometry(QRect(10, 50, 81, 21));
        set->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        set->setAlignment(Qt::AlignCenter);
        set->setIndent(0);
        line_7 = new QFrame(widget_7);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(200, 0, 20, 81));
        line_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(widget_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(230, 10, 61, 31));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        value = new QLabel(widget_7);
        value->setObjectName(QString::fromUtf8("value"));
        value->setGeometry(QRect(110, 50, 91, 21));
        value->setStyleSheet(QString::fromUtf8("font: 72 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 255);"));
        value->setAlignment(Qt::AlignCenter);
        value->setIndent(0);
        main_result2 = new QLabel(widget_7);
        main_result2->setObjectName(QString::fromUtf8("main_result2"));
        main_result2->setGeometry(QRect(240, 50, 41, 21));
        main_result2->setStyleSheet(QString::fromUtf8("font: 72 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 0, 0);"));
        main_result2->setAlignment(Qt::AlignCenter);
        main_result2->setIndent(0);
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 393, 22));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionAdmin);
        menuAbout->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdmin->setText(QApplication::translate("MainWindow", "Admin", nullptr));
#ifndef QT_NO_SHORTCUT
        actionAdmin->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        main_result->setText(QApplication::translate("MainWindow", "71", nullptr));
        update->setText(QApplication::translate("MainWindow", "\360\237\224\204 Updating : 2021-08-21 8:09 AM", nullptr));
        label->setText(QApplication::translate("MainWindow", "\341\200\221\341\200\255\341\200\257\341\200\270\341\200\233\341\200\204\341\200\272\341\200\270\341\200\234\341\200\276\341\200\260 2D \341\200\226\341\200\274\341\200\204\341\200\267\341\200\272 \341\200\221\341\200\255\341\200\257\341\200\270\341\200\225\341\200\261\341\200\270\341\200\200\341\200\274\341\200\236\341\200\261\341\200\254 \341\200\221\341\200\255\341\200\257\341\200\270\341\200\236\341\200\254\341\200\270\341\200\231\341\200\273\341\200\254\341\200\270\341\200\241\341\200\254\341\200\270\341\200\234\341\200\257\341\200\266\341\200\270\n"
"\341\200\200\341\200\255\341\200\257\341\200\232\341\200\272\341\200\205\341\200\255\341\200\220\341\200\272\341\200\224\341\200\276\341\200\205\341\200\272\341\200\226\341\200\274\341\200\254\341\200\200\341\200\273\341\200\224\341\200\272\341\200\270\341\200\231\341\200\254\341\200\201\341\200\273\341\200\231\341\200\272\341\200\270\341\200\236\341\200\254\341\200\200\341\200\274\341\200\225\341\200\253\341\200\205\341\200\261\341\201\213\n"
"\341\200\241\341"
                        "\200\231\341\200\274\341\200\220\341\200\272\341\200\231\341\200\273\341\200\254\341\200\270\341\200\200\341\200\255\341\200\257\341\200\234\341\200\212\341\200\272\341\200\270\341\200\234\341\200\255\341\200\257\341\200\241\341\200\225\341\200\272\341\200\224\341\200\261\341\200\236\341\200\260\341\200\231\341\200\273\341\200\254\341\200\270\341\200\221\341\200\266\n"
"\341\200\236\341\200\275\341\200\254\341\200\270\341\200\233\341\200\261\341\200\254\341\200\200\341\200\272\341\200\234\341\200\276\341\200\260\341\200\222\341\200\253\341\200\224\341\200\272\341\200\270\341\200\236\341\200\275\341\200\254\341\200\270\341\200\225\341\200\253\341\200\231\341\200\212\341\200\272\341\201\213", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "9:30 AM", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "2:00 PM", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Modern", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Modern", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Internet", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Internet", nullptr));
        morning_modern->setText(QApplication::translate("MainWindow", "53", nullptr));
        morning_internet->setText(QApplication::translate("MainWindow", "65", nullptr));
        evening_modern->setText(QApplication::translate("MainWindow", "72", nullptr));
        evening_internet->setText(QApplication::translate("MainWindow", "71", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "4:30 PM", nullptr));
        evening_result->setText(QApplication::translate("MainWindow", "83", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "12:01 PM", nullptr));
        morning_result->setText(QApplication::translate("MainWindow", "54", nullptr));
        label_2->setText(QApplication::translate("MainWindow", " Set", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Value", nullptr));
        set->setText(QApplication::translate("MainWindow", "2945.51", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Result", nullptr));
        value->setText(QApplication::translate("MainWindow", "137453.15", nullptr));
        main_result2->setText(QApplication::translate("MainWindow", "71", nullptr));
        menuAbout->setTitle(QApplication::translate("MainWindow", "                            \360\237\231\217 Welcome to Htoe Yinn Hluu \360\237\231\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
