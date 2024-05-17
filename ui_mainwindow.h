/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *convertbot;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *resetbot;
    QSpacerItem *horizontalSpacer;
    QPushButton *changebot;
    QSpacerItem *horizontalSpacer_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lableShow;
    QSpacerItem *verticalSpacer;
    QLineEdit *input_textC;
    QSpacerItem *verticalSpacer_2;
    QLabel *lableresult;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 445);
        MainWindow->setMaximumSize(QSize(900, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/temperature-control.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 270, 601, 101));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        convertbot = new QPushButton(horizontalLayoutWidget);
        convertbot->setObjectName(QString::fromUtf8("convertbot"));
        convertbot->setMinimumSize(QSize(128, 50));
        convertbot->setSizeIncrement(QSize(9, 47));
        QFont font;
        font.setPointSize(11);
        convertbot->setFont(font);
        convertbot->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"color: rgb(0, 0, 127);\n"
"\n"
"border-color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(convertbot);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        resetbot = new QPushButton(horizontalLayoutWidget);
        resetbot->setObjectName(QString::fromUtf8("resetbot"));
        resetbot->setMinimumSize(QSize(128, 50));
        resetbot->setSizeIncrement(QSize(9, 47));
        resetbot->setFont(font);
        resetbot->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(resetbot);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        changebot = new QPushButton(horizontalLayoutWidget);
        changebot->setObjectName(QString::fromUtf8("changebot"));
        changebot->setMinimumSize(QSize(128, 50));
        changebot->setSizeIncrement(QSize(9, 47));
        changebot->setFont(font);
        changebot->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(changebot);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(110, 60, 391, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lableShow = new QLabel(verticalLayoutWidget);
        lableShow->setObjectName(QString::fromUtf8("lableShow"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Tahoma"));
        font1.setPointSize(19);
        font1.setBold(true);
        font1.setWeight(75);
        lableShow->setFont(font1);
        lableShow->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: rgb(255, 255, 255);\n"
"font-size:x-large;"));
        lableShow->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lableShow);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        input_textC = new QLineEdit(verticalLayoutWidget);
        input_textC->setObjectName(QString::fromUtf8("input_textC"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Tahoma"));
        font2.setPointSize(15);
        input_textC->setFont(font2);
        input_textC->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        input_textC->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(input_textC);

        verticalSpacer_2 = new QSpacerItem(20, 73, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        lableresult = new QLabel(verticalLayoutWidget);
        lableresult->setObjectName(QString::fromUtf8("lableresult"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Tahoma"));
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        lableresult->setFont(font3);
        lableresult->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: rgb(255, 255, 255);\n"
"font-size:x-large;"));
        lableresult->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lableresult);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Converter", nullptr));
        convertbot->setText(QApplication::translate("MainWindow", "CONVERT", nullptr));
        resetbot->setText(QApplication::translate("MainWindow", "RESET", nullptr));
        changebot->setText(QApplication::translate("MainWindow", "CHANGE", nullptr));
        lableShow->setText(QApplication::translate("MainWindow", "Convert C to F", nullptr));
        input_textC->setPlaceholderText(QApplication::translate("MainWindow", "C", nullptr));
        lableresult->setText(QApplication::translate("MainWindow", "ressult: 0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
