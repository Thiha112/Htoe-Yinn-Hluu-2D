/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *main_result;
    QLabel *label_8;
    QLineEdit *update;
    QLabel *label_2;
    QLineEdit *morning_result;
    QLabel *label_5;
    QLineEdit *evening_result;
    QLabel *label_4;
    QLineEdit *morning_modern;
    QLabel *label_3;
    QLineEdit *morning_internet;
    QLabel *label_6;
    QLineEdit *evening_modern;
    QLabel *label_7;
    QLineEdit *evening_internet;
    QSplitter *splitter;
    QLabel *label854;
    QLineEdit *qset;
    QSplitter *splitter_2;
    QLabel *label_10;
    QLineEdit *qvalue;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *save_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(314, 278);
        Dialog->setMinimumSize(QSize(0, 258));
        Dialog->setMaximumSize(QSize(338, 5424545));
        Dialog->setSizeIncrement(QSize(338, 258));
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        main_result = new QLineEdit(Dialog);
        main_result->setObjectName(QString::fromUtf8("main_result"));

        gridLayout->addWidget(main_result, 0, 1, 1, 2);

        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        update = new QLineEdit(Dialog);
        update->setObjectName(QString::fromUtf8("update"));

        gridLayout->addWidget(update, 1, 1, 1, 2);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        morning_result = new QLineEdit(Dialog);
        morning_result->setObjectName(QString::fromUtf8("morning_result"));

        gridLayout->addWidget(morning_result, 2, 1, 1, 2);

        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        evening_result = new QLineEdit(Dialog);
        evening_result->setObjectName(QString::fromUtf8("evening_result"));

        gridLayout->addWidget(evening_result, 3, 1, 1, 2);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        morning_modern = new QLineEdit(Dialog);
        morning_modern->setObjectName(QString::fromUtf8("morning_modern"));

        gridLayout->addWidget(morning_modern, 4, 1, 1, 2);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        morning_internet = new QLineEdit(Dialog);
        morning_internet->setObjectName(QString::fromUtf8("morning_internet"));

        gridLayout->addWidget(morning_internet, 5, 1, 1, 2);

        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        evening_modern = new QLineEdit(Dialog);
        evening_modern->setObjectName(QString::fromUtf8("evening_modern"));

        gridLayout->addWidget(evening_modern, 6, 1, 1, 2);

        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        evening_internet = new QLineEdit(Dialog);
        evening_internet->setObjectName(QString::fromUtf8("evening_internet"));

        gridLayout->addWidget(evening_internet, 7, 1, 1, 2);

        splitter = new QSplitter(Dialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label854 = new QLabel(splitter);
        label854->setObjectName(QString::fromUtf8("label854"));
        splitter->addWidget(label854);
        qset = new QLineEdit(splitter);
        qset->setObjectName(QString::fromUtf8("qset"));
        splitter->addWidget(qset);

        gridLayout->addWidget(splitter, 8, 0, 1, 2);

        splitter_2 = new QSplitter(Dialog);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label_10 = new QLabel(splitter_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        splitter_2->addWidget(label_10);
        qvalue = new QLineEdit(splitter_2);
        qvalue->setObjectName(QString::fromUtf8("qvalue"));
        splitter_2->addWidget(qvalue);

        gridLayout->addWidget(splitter_2, 8, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget_2 = new QWidget(Dialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        horizontalLayout_2->addWidget(widget_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        save_2 = new QPushButton(Dialog);
        save_2->setObjectName(QString::fromUtf8("save_2"));
        save_2->setCheckable(true);

        horizontalLayout_2->addWidget(save_2, 0, Qt::AlignRight);


        gridLayout->addLayout(horizontalLayout_2, 9, 1, 1, 2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "Main Result", nullptr));
        main_result->setText(QString());
        label_8->setText(QApplication::translate("Dialog", "Date & Time", nullptr));
        update->setText(QString());
        label_2->setText(QApplication::translate("Dialog", "Morning Result", nullptr));
        morning_result->setText(QString());
        label_5->setText(QApplication::translate("Dialog", "Evening Result", nullptr));
        evening_result->setText(QString());
        label_4->setText(QApplication::translate("Dialog", "Morning Modern", nullptr));
        morning_modern->setText(QString());
        label_3->setText(QApplication::translate("Dialog", "Morning Internet", nullptr));
        morning_internet->setText(QString());
        label_6->setText(QApplication::translate("Dialog", "Evening Modern", nullptr));
        evening_modern->setText(QString());
        label_7->setText(QApplication::translate("Dialog", "Evening Internet", nullptr));
        evening_internet->setText(QString());
        label854->setText(QApplication::translate("Dialog", "Set", nullptr));
        label_10->setText(QApplication::translate("Dialog", "Value", nullptr));
        save_2->setText(QApplication::translate("Dialog", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        save_2->setShortcut(QString());
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
