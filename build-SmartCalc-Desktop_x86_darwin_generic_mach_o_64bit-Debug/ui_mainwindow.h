/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_sqrt;
    QCustomPlot *openGLWidget;
    QPushButton *pushButton_sinus;
    QPushButton *pushButton_open_bracket;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_graph;
    QPushButton *pushButton_1;
    QPushButton *pushButton_clean;
    QPushButton *pushButton_close_bracket;
    QPushButton *pushButton_multiple;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_9;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_7;
    QPushButton *pushButton_degree;
    QPushButton *pushButton_4;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_0;
    QPushButton *pushButton_5;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_2;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_log;
    QLineEdit *x_value;
    QPushButton *pushButton_cosinus;
    QPushButton *pushButton_x;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_plus;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1054, 597);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 340, 71, 91));
        QPalette palette;
        QBrush brush(QColor(100, 100, 100, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(64, 65, 66, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton_3->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Silom")});
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        pushButton_3->setFont(font);
        pushButton_3->setAutoFillBackground(true);
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(170, 430, 71, 91));
        QPalette palette1;
        QBrush brush2(QColor(145, 145, 145, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_sqrt->setPalette(palette1);
        pushButton_sqrt->setFont(font);
        pushButton_sqrt->setAutoFillBackground(true);
        openGLWidget = new QCustomPlot(centralwidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(490, 70, 531, 351));
        pushButton_sinus = new QPushButton(centralwidget);
        pushButton_sinus->setObjectName(QString::fromUtf8("pushButton_sinus"));
        pushButton_sinus->setGeometry(QRect(10, 160, 71, 91));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_sinus->setPalette(palette2);
        pushButton_sinus->setFont(font);
        pushButton_sinus->setAutoFillBackground(true);
        pushButton_open_bracket = new QPushButton(centralwidget);
        pushButton_open_bracket->setObjectName(QString::fromUtf8("pushButton_open_bracket"));
        pushButton_open_bracket->setGeometry(QRect(10, 70, 71, 91));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_open_bracket->setPalette(palette3);
        pushButton_open_bracket->setFont(font);
        pushButton_open_bracket->setAutoFillBackground(true);
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(250, 70, 71, 91));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_dot->setPalette(palette4);
        pushButton_dot->setFont(font);
        pushButton_dot->setAutoFillBackground(true);
        pushButton_graph = new QPushButton(centralwidget);
        pushButton_graph->setObjectName(QString::fromUtf8("pushButton_graph"));
        pushButton_graph->setGeometry(QRect(640, 430, 381, 91));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_graph->setPalette(palette5);
        pushButton_graph->setFont(font);
        pushButton_graph->setAutoFillBackground(true);
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(170, 340, 71, 91));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton_1->setPalette(palette6);
        pushButton_1->setFont(font);
        pushButton_1->setAutoFillBackground(true);
        pushButton_clean = new QPushButton(centralwidget);
        pushButton_clean->setObjectName(QString::fromUtf8("pushButton_clean"));
        pushButton_clean->setGeometry(QRect(410, 430, 71, 91));
        QPalette palette7;
        QBrush brush3(QColor(148, 17, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        pushButton_clean->setPalette(palette7);
        pushButton_clean->setFont(font);
        pushButton_clean->setAutoFillBackground(true);
        pushButton_close_bracket = new QPushButton(centralwidget);
        pushButton_close_bracket->setObjectName(QString::fromUtf8("pushButton_close_bracket"));
        pushButton_close_bracket->setGeometry(QRect(90, 70, 71, 91));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_close_bracket->setPalette(palette8);
        pushButton_close_bracket->setFont(font);
        pushButton_close_bracket->setAutoFillBackground(true);
        pushButton_multiple = new QPushButton(centralwidget);
        pushButton_multiple->setObjectName(QString::fromUtf8("pushButton_multiple"));
        pushButton_multiple->setGeometry(QRect(410, 70, 71, 91));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_multiple->setPalette(palette9);
        pushButton_multiple->setFont(font);
        pushButton_multiple->setAutoFillBackground(true);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(330, 250, 71, 91));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Button, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton_6->setPalette(palette10);
        pushButton_6->setFont(font);
        pushButton_6->setAutoFillBackground(true);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(250, 160, 71, 91));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Button, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton_8->setPalette(palette11);
        pushButton_8->setFont(font);
        pushButton_8->setAutoFillBackground(true);
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(90, 340, 71, 91));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_atan->setPalette(palette12);
        pushButton_atan->setFont(font);
        pushButton_atan->setAutoFillBackground(true);
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(90, 250, 71, 91));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_acos->setPalette(palette13);
        pushButton_acos->setFont(font);
        pushButton_acos->setAutoFillBackground(true);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(330, 160, 71, 91));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::Button, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton_9->setPalette(palette14);
        pushButton_9->setFont(font);
        pushButton_9->setAutoFillBackground(true);
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName(QString::fromUtf8("pushButton_divide"));
        pushButton_divide->setGeometry(QRect(410, 160, 71, 91));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_divide->setPalette(palette15);
        pushButton_divide->setFont(font);
        pushButton_divide->setAutoFillBackground(true);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(170, 160, 71, 91));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::Button, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton_7->setPalette(palette16);
        pushButton_7->setFont(font);
        pushButton_7->setAutoFillBackground(true);
        pushButton_degree = new QPushButton(centralwidget);
        pushButton_degree->setObjectName(QString::fromUtf8("pushButton_degree"));
        pushButton_degree->setGeometry(QRect(170, 70, 71, 91));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_degree->setPalette(palette17);
        pushButton_degree->setFont(font);
        pushButton_degree->setAutoFillBackground(true);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(170, 250, 71, 91));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::Button, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton_4->setPalette(palette18);
        pushButton_4->setFont(font);
        pushButton_4->setAutoFillBackground(true);
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(10, 430, 71, 91));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_ln->setPalette(palette19);
        pushButton_ln->setFont(font);
        pushButton_ln->setAutoFillBackground(true);
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(250, 430, 71, 91));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::Button, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton_0->setPalette(palette20);
        pushButton_0->setFont(font);
        pushButton_0->setAutoFillBackground(true);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 250, 71, 91));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::Button, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton_5->setPalette(palette21);
        pushButton_5->setFont(font);
        pushButton_5->setAutoFillBackground(true);
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(10, 340, 71, 91));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_tan->setPalette(palette22);
        pushButton_tan->setFont(font);
        pushButton_tan->setAutoFillBackground(true);
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(90, 160, 71, 91));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_asin->setPalette(palette23);
        pushButton_asin->setFont(font);
        pushButton_asin->setAutoFillBackground(true);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 340, 71, 91));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::Button, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton_2->setPalette(palette24);
        pushButton_2->setFont(font);
        pushButton_2->setAutoFillBackground(true);
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(330, 430, 71, 91));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        pushButton_equal->setPalette(palette25);
        pushButton_equal->setFont(font);
        pushButton_equal->setAutoFillBackground(true);
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(410, 250, 71, 91));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_minus->setPalette(palette26);
        pushButton_minus->setFont(font);
        pushButton_minus->setAutoFillBackground(true);
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(90, 430, 71, 91));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_log->setPalette(palette27);
        pushButton_log->setFont(font);
        pushButton_log->setAutoFillBackground(true);
        x_value = new QLineEdit(centralwidget);
        x_value->setObjectName(QString::fromUtf8("x_value"));
        x_value->setGeometry(QRect(570, 430, 61, 91));
        x_value->setAutoFillBackground(false);
        x_value->setStyleSheet(QString::fromUtf8("border: 1px solid white;\n"
"font: 30pt \"Silom\";\n"
"background color: black;"));
        x_value->setAlignment(Qt::AlignCenter);
        pushButton_cosinus = new QPushButton(centralwidget);
        pushButton_cosinus->setObjectName(QString::fromUtf8("pushButton_cosinus"));
        pushButton_cosinus->setGeometry(QRect(10, 250, 71, 91));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_cosinus->setPalette(palette28);
        pushButton_cosinus->setFont(font);
        pushButton_cosinus->setAutoFillBackground(true);
        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(490, 430, 71, 91));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_x->setPalette(palette29);
        pushButton_x->setFont(font);
        pushButton_x->setAutoFillBackground(true);
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(330, 70, 71, 91));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette30.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette30.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_mod->setPalette(palette30);
        pushButton_mod->setFont(font);
        pushButton_mod->setAutoFillBackground(true);
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(410, 340, 71, 91));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette31.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette31.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton_plus->setPalette(palette31);
        pushButton_plus->setFont(font);
        pushButton_plus->setAutoFillBackground(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(7, 10, 1021, 51));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("border: 1px solid white;\n"
"font: 30pt \"Silom\";\n"
"background color: black;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1054, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_sinus->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_open_bracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_graph->setText(QCoreApplication::translate("MainWindow", "GRAPH", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_clean->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_close_bracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_multiple->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_degree->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_cosinus->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "MOD", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
