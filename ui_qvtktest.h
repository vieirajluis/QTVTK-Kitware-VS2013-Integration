/********************************************************************************
** Form generated from reading UI file 'qvtktest.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QVTKTEST_H
#define UI_QVTKTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_QVtkTestClass
{
public:
    QWidget *centralWidget;
    QVTKWidget *qvtkWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QVtkTestClass)
    {
        if (QVtkTestClass->objectName().isEmpty())
            QVtkTestClass->setObjectName(QStringLiteral("QVtkTestClass"));
        QVtkTestClass->resize(600, 400);
        centralWidget = new QWidget(QVtkTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        qvtkWidget = new QVTKWidget(centralWidget);
        qvtkWidget->setObjectName(QStringLiteral("qvtkWidget"));
        qvtkWidget->setGeometry(QRect(20, 30, 471, 241));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 280, 112, 34));
        QVtkTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QVtkTestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 31));
        QVtkTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QVtkTestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QVtkTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QVtkTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QVtkTestClass->setStatusBar(statusBar);

        retranslateUi(QVtkTestClass);

        QMetaObject::connectSlotsByName(QVtkTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QVtkTestClass)
    {
        QVtkTestClass->setWindowTitle(QApplication::translate("QVtkTestClass", "QVtkTest", 0));
        pushButton->setText(QApplication::translate("QVtkTestClass", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class QVtkTestClass: public Ui_QVtkTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QVTKTEST_H
