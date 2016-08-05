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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenCVShopClass
{
public:
    QAction *actionGaussian;
    QAction *actionEx_morphology;
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QPushButton *undoButton;
    QPushButton *redoButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuFilters;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OpenCVShopClass)
    {
        if (OpenCVShopClass->objectName().isEmpty())
            OpenCVShopClass->setObjectName(QStringLiteral("OpenCVShopClass"));
        OpenCVShopClass->resize(511, 400);
        actionGaussian = new QAction(OpenCVShopClass);
        actionGaussian->setObjectName(QStringLiteral("actionGaussian"));
        actionEx_morphology = new QAction(OpenCVShopClass);
        actionEx_morphology->setObjectName(QStringLiteral("actionEx_morphology"));
        centralWidget = new QWidget(OpenCVShopClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 40, 491, 321));
        undoButton = new QPushButton(centralWidget);
        undoButton->setObjectName(QStringLiteral("undoButton"));
        undoButton->setGeometry(QRect(10, 10, 75, 23));
        redoButton = new QPushButton(centralWidget);
        redoButton->setObjectName(QStringLiteral("redoButton"));
        redoButton->setGeometry(QRect(430, 10, 75, 23));
        OpenCVShopClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OpenCVShopClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 511, 18));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFilters = new QMenu(menuBar);
        menuFilters->setObjectName(QStringLiteral("menuFilters"));
        OpenCVShopClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OpenCVShopClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OpenCVShopClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OpenCVShopClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OpenCVShopClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuFilters->menuAction());
        menuFilters->addAction(actionGaussian);
        menuFilters->addAction(actionEx_morphology);

        retranslateUi(OpenCVShopClass);

        QMetaObject::connectSlotsByName(OpenCVShopClass);
    } // setupUi

    void retranslateUi(QMainWindow *OpenCVShopClass)
    {
        OpenCVShopClass->setWindowTitle(QApplication::translate("OpenCVShopClass", "OpenCVShop", 0));
        actionGaussian->setText(QApplication::translate("OpenCVShopClass", "Gaussian", 0));
        actionEx_morphology->setText(QApplication::translate("OpenCVShopClass", "Ex. morphology", 0));
        undoButton->setText(QApplication::translate("OpenCVShopClass", "Undo", 0));
        redoButton->setText(QApplication::translate("OpenCVShopClass", "Redo", 0));
        menuFile->setTitle(QApplication::translate("OpenCVShopClass", "File", 0));
        menuFilters->setTitle(QApplication::translate("OpenCVShopClass", "Filters", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenCVShopClass: public Ui_OpenCVShopClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENCVSHOP_H
