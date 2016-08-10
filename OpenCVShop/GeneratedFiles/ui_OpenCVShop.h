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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenCVShopClass
{
public:
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionEx_morphology;
    QAction *actionGaussian;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QListView *actionListView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuFilters;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *OpenCVShopClass)
    {
        if (OpenCVShopClass->objectName().isEmpty())
            OpenCVShopClass->setObjectName(QStringLiteral("OpenCVShopClass"));
        OpenCVShopClass->resize(1024, 578);
        actionUndo = new QAction(OpenCVShopClass);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(OpenCVShopClass);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionNew = new QAction(OpenCVShopClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionSave = new QAction(OpenCVShopClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionEx_morphology = new QAction(OpenCVShopClass);
        actionEx_morphology->setObjectName(QStringLiteral("actionEx_morphology"));
        actionGaussian = new QAction(OpenCVShopClass);
        actionGaussian->setObjectName(QStringLiteral("actionGaussian"));
        centralWidget = new QWidget(OpenCVShopClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setMinimumSize(QSize(800, 0));
        graphicsView->setSizeIncrement(QSize(400, 0));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        actionListView = new QListView(centralWidget);
        actionListView->setObjectName(QStringLiteral("actionListView"));
        actionListView->setMinimumSize(QSize(100, 0));
        actionListView->setMaximumSize(QSize(200, 16777215));
        actionListView->setSpacing(5);

        gridLayout->addWidget(actionListView, 0, 1, 1, 1);

        OpenCVShopClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OpenCVShopClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 18));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFilters = new QMenu(menuBar);
        menuFilters->setObjectName(QStringLiteral("menuFilters"));
        OpenCVShopClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(OpenCVShopClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OpenCVShopClass->setStatusBar(statusBar);
        mainToolBar = new QToolBar(OpenCVShopClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OpenCVShopClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuFilters->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionSave);
        menuFilters->addAction(actionUndo);
        menuFilters->addAction(actionRedo);

        retranslateUi(OpenCVShopClass);

        QMetaObject::connectSlotsByName(OpenCVShopClass);
    } // setupUi

    void retranslateUi(QMainWindow *OpenCVShopClass)
    {
        OpenCVShopClass->setWindowTitle(QApplication::translate("OpenCVShopClass", "OpenCVShop", 0));
        actionUndo->setText(QApplication::translate("OpenCVShopClass", "Undo", 0));
        actionUndo->setShortcut(QApplication::translate("OpenCVShopClass", "Ctrl+Z", 0));
        actionRedo->setText(QApplication::translate("OpenCVShopClass", "Redo", 0));
        actionRedo->setShortcut(QApplication::translate("OpenCVShopClass", "Ctrl+Shift+Z", 0));
        actionNew->setText(QApplication::translate("OpenCVShopClass", "New", 0));
        actionSave->setText(QApplication::translate("OpenCVShopClass", "Save", 0));
        actionSave->setShortcut(QApplication::translate("OpenCVShopClass", "Ctrl+S", 0));
        actionEx_morphology->setText(QApplication::translate("OpenCVShopClass", "Ex. morphology", 0));
        actionGaussian->setText(QApplication::translate("OpenCVShopClass", "Gaussian", 0));
        menuFile->setTitle(QApplication::translate("OpenCVShopClass", "File", 0));
        menuFilters->setTitle(QApplication::translate("OpenCVShopClass", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenCVShopClass: public Ui_OpenCVShopClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENCVSHOP_H
