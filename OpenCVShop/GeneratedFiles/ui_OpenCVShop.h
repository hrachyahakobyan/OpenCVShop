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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QAction *actionExit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QListView *actionListView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *widthLabel;
    QLabel *label_4;
    QLabel *heightLabel;
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
        actionExit = new QAction(OpenCVShopClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
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

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 25));
        widget->setMaximumSize(QSize(300, 16777215));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label_3);

        widthLabel = new QLabel(widget);
        widthLabel->setObjectName(QStringLiteral("widthLabel"));
        widthLabel->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(widthLabel);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(40, 0));
        label_4->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label_4);

        heightLabel = new QLabel(widget);
        heightLabel->setObjectName(QStringLiteral("heightLabel"));
        heightLabel->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(heightLabel);


        gridLayout->addWidget(widget, 1, 0, 1, 2);

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
        menuFile->addAction(actionExit);
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
        actionExit->setText(QApplication::translate("OpenCVShopClass", "Exit", 0));
        label_3->setText(QApplication::translate("OpenCVShopClass", "Width:", 0));
        widthLabel->setText(QString());
        label_4->setText(QApplication::translate("OpenCVShopClass", "Height:", 0));
        heightLabel->setText(QString());
        menuFile->setTitle(QApplication::translate("OpenCVShopClass", "File", 0));
        menuFilters->setTitle(QApplication::translate("OpenCVShopClass", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenCVShopClass: public Ui_OpenCVShopClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENCVSHOP_H
