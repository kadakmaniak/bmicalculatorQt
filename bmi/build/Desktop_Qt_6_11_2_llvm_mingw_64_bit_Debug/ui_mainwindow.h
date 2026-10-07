/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *labelHeight;
    QLineEdit *lineEditBMI;
    QDoubleSpinBox *doubleSpinBoxHeight;
    QDoubleSpinBox *doubleSpinBoxWeight;
    QLabel *labelBMI;
    QLabel *labelWeight;
    QPushButton *pushButtonBMI;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(332, 277);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        labelHeight = new QLabel(centralwidget);
        labelHeight->setObjectName("labelHeight");

        gridLayout->addWidget(labelHeight, 3, 0, 1, 1);

        lineEditBMI = new QLineEdit(centralwidget);
        lineEditBMI->setObjectName("lineEditBMI");
        lineEditBMI->setAutoFillBackground(false);

        gridLayout->addWidget(lineEditBMI, 1, 0, 1, 1);

        doubleSpinBoxHeight = new QDoubleSpinBox(centralwidget);
        doubleSpinBoxHeight->setObjectName("doubleSpinBoxHeight");
        doubleSpinBoxHeight->setDecimals(0);
        doubleSpinBoxHeight->setMaximum(250.000000000000000);

        gridLayout->addWidget(doubleSpinBoxHeight, 4, 0, 1, 1);

        doubleSpinBoxWeight = new QDoubleSpinBox(centralwidget);
        doubleSpinBoxWeight->setObjectName("doubleSpinBoxWeight");
        doubleSpinBoxWeight->setDecimals(0);
        doubleSpinBoxWeight->setMaximum(250.000000000000000);

        gridLayout->addWidget(doubleSpinBoxWeight, 6, 0, 1, 1);

        labelBMI = new QLabel(centralwidget);
        labelBMI->setObjectName("labelBMI");

        gridLayout->addWidget(labelBMI, 0, 0, 1, 1);

        labelWeight = new QLabel(centralwidget);
        labelWeight->setObjectName("labelWeight");

        gridLayout->addWidget(labelWeight, 5, 0, 1, 1);

        pushButtonBMI = new QPushButton(centralwidget);
        pushButtonBMI->setObjectName("pushButtonBMI");

        gridLayout->addWidget(pushButtonBMI, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 332, 21));
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
        labelHeight->setText(QCoreApplication::translate("MainWindow", "V\303\275\305\241ka", nullptr));
        labelBMI->setText(QCoreApplication::translate("MainWindow", "BMI", nullptr));
        labelWeight->setText(QCoreApplication::translate("MainWindow", "V\303\241ha", nullptr));
        pushButtonBMI->setText(QCoreApplication::translate("MainWindow", "vypocitat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
