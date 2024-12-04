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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHelp;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *leftpushButton_2;
    QPushButton *rightpushButton;
    QPushButton *shootpushButton;
    QSlider *powerverticalSlider;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(567, 258);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 33, 125);"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName("actionHelp");
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("dialog-information");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionHelp->setIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        leftpushButton_2 = new QPushButton(centralwidget);
        leftpushButton_2->setObjectName("leftpushButton_2");
        leftpushButton_2->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(true);
        leftpushButton_2->setFont(font);
        leftpushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        leftpushButton_2->setLayoutDirection(Qt::LeftToRight);
        leftpushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(246, 245, 244);\n"
"image: url(:/Downloads/left.png);\n"
"color: black;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: black;\n"
"}"));

        horizontalLayout_2->addWidget(leftpushButton_2);

        rightpushButton = new QPushButton(centralwidget);
        rightpushButton->setObjectName("rightpushButton");
        rightpushButton->setMinimumSize(QSize(0, 50));
        rightpushButton->setFont(font);
        rightpushButton->setCursor(QCursor(Qt::PointingHandCursor));
        rightpushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(246, 245, 244);\n"
"image: url(:/Downloads/button-2925822_1280.png);\n"
"color: black;\n"
"border-radius:15px\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:black;\n"
"}"));

        horizontalLayout_2->addWidget(rightpushButton);


        gridLayout_3->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        shootpushButton = new QPushButton(centralwidget);
        shootpushButton->setObjectName("shootpushButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(shootpushButton->sizePolicy().hasHeightForWidth());
        shootpushButton->setSizePolicy(sizePolicy);
        shootpushButton->setMinimumSize(QSize(0, 100));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0.524, 0, 0.512979, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(54, 175, 195, 255));
        gradient.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0.524, 0, 0.512979, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(54, 175, 195, 255));
        gradient1.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush2(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QLinearGradient gradient2(0.524, 0, 0.512979, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(54, 175, 195, 255));
        gradient2.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush3(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0.524, 0, 0.512979, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(54, 175, 195, 255));
        gradient3.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush5(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0.524, 0, 0.512979, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(54, 175, 195, 255));
        gradient4.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush6(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        QLinearGradient gradient5(0.524, 0, 0.512979, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(54, 175, 195, 255));
        gradient5.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush7(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        QLinearGradient gradient6(0.524, 0, 0.512979, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(54, 175, 195, 255));
        gradient6.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush8(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QLinearGradient gradient7(0.524, 0, 0.512979, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(54, 175, 195, 255));
        gradient7.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush9(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        QLinearGradient gradient8(0.524, 0, 0.512979, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(54, 175, 195, 255));
        gradient8.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush10(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        shootpushButton->setPalette(palette);
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(true);
        shootpushButton->setFont(font1);
        shootpushButton->setCursor(QCursor(Qt::PointingHandCursor));
        shootpushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(54, 175, 195);\n"
"color: black;\n"
"border-radius:15px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.524, y1:0, x2:0.512979, y2:1, stop:0 rgba(54, 175, 195, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: white;\n"
"}\n"
""));

        gridLayout_3->addWidget(shootpushButton, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 0, 0, 1, 1);

        powerverticalSlider = new QSlider(centralwidget);
        powerverticalSlider->setObjectName("powerverticalSlider");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(powerverticalSlider->sizePolicy().hasHeightForWidth());
        powerverticalSlider->setSizePolicy(sizePolicy1);
        powerverticalSlider->setMinimumSize(QSize(50, 0));
        powerverticalSlider->setCursor(QCursor(Qt::PointingHandCursor));
        powerverticalSlider->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        powerverticalSlider->setMaximum(100);
        powerverticalSlider->setSingleStep(25);
        powerverticalSlider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(powerverticalSlider, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionHelp->setText(QCoreApplication::translate("MainWindow", "Help...", nullptr));
#if QT_CONFIG(tooltip)
        actionHelp->setToolTip(QCoreApplication::translate("MainWindow", "About", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionHelp->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        leftpushButton_2->setText(QString());
        rightpushButton->setText(QString());
        shootpushButton->setText(QCoreApplication::translate("MainWindow", "CHARGE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
