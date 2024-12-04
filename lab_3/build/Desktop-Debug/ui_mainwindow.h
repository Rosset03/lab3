/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSlider *verticalSlider;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(749, 413);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 193, 241);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(150, 100));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;          /* Deixa o bot\303\243o arredondado */\n"
"    background-color: white;    /* Cor de fundo inicial */\n"
"    color: white;                 /* Cor do texto */\n"
"    border: none;                 /* Remove a borda */\n"
"	image: url(:/Imagens/664e2f13ee221f4b6ba3097dc201f7.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2c3e50;    /* Cor de fundo quando o mouse passa sobre o bot\303\243o */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: white;      /* Cor de fundo quando o bot\303\243o \303\251 clicado */\n"
"    color: black;                 /* Cor do texto quando clicado */\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(150, 100));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	image: url(:/Imagens/direita.png);\n"
"    border-radius: 15px;          /* Deixa o bot\303\243o arredondado */\n"
"    background-color: white;    /* Cor de fundo inicial */\n"
"    color: white;                 /* Cor do texto */\n"
"    border: none;                 /* Remove a borda */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2c3e50;    /* Cor de fundo quando o mouse passa sobre o bot\303\243o */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: white;      /* Cor de fundo quando o bot\303\243o \303\251 clicado */\n"
"    color: black;                 /* Cor do texto quando clicado */\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(100, 100));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"    border-radius: 15px;          /* Deixa o bot\303\243o arredondado */\n"
"    background-color: white;    /* Cor de fundo inicial */\n"
"    color: black;                 /* Cor do texto */\n"
"    border: none;                 /* Remove a borda */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2c3e50;    /* Cor de fundo quando o mouse passa sobre o bot\303\243o */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: white;      /* Cor de fundo quando o bot\303\243o \303\251 clicado */\n"
"    color: black;                 /* Cor do texto quando clicado */\n"
"}"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"    border-radius: 15px;          /* Deixa o bot\303\243o arredondado */\n"
"    background-color: white;    /* Cor de fundo inicial */\n"
"    color: black;                 /* Cor do texto */\n"
"    border: none;                 /* Remove a borda */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2c3e50;    /* Cor de fundo quando o mouse passa sobre o bot\303\243o */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: white;      /* Cor de fundo quando o bot\303\243o \303\251 clicado */\n"
"    color: black;                 /* Cor do texto quando clicado */\n"
"}"));

        gridLayout->addWidget(pushButton_4, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName("verticalSlider");
        verticalSlider->setCursor(QCursor(Qt::PointingHandCursor));
        verticalSlider->setMaximum(100);
        verticalSlider->setSingleStep(25);
        verticalSlider->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSlider);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 749, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "CHARGE", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
