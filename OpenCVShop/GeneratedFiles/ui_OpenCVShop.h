/********************************************************************************
** Form generated from reading UI file 'OpenCVShop.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENCVSHOP_H
#define UI_OPENCVSHOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenCVShopClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OpenCVShopClass)
    {
        if (OpenCVShopClass->objectName().isEmpty())
            OpenCVShopClass->setObjectName(QStringLiteral("OpenCVShopClass"));
        OpenCVShopClass->resize(600, 400);
        menuBar = new QMenuBar(OpenCVShopClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        OpenCVShopClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OpenCVShopClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OpenCVShopClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(OpenCVShopClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        OpenCVShopClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(OpenCVShopClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OpenCVShopClass->setStatusBar(statusBar);

        retranslateUi(OpenCVShopClass);

        QMetaObject::connectSlotsByName(OpenCVShopClass);
    } // setupUi

    void retranslateUi(QMainWindow *OpenCVShopClass)
    {
        OpenCVShopClass->setWindowTitle(QApplication::translate("OpenCVShopClass", "OpenCVShop", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenCVShopClass: public Ui_OpenCVShopClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENCVSHOP_H
