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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
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
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionNew;
    QAction *actionSave;
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QLabel *label;
    QPushButton *filterGaussianButton;
    QPushButton *filterMedianButton;
    QPushButton *filterMorphButton;
    QListView *actionListView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuFilters;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OpenCVShopClass)
    {
        if (OpenCVShopClass->objectName().isEmpty())
            OpenCVShopClass->setObjectName(QStringLiteral("OpenCVShopClass"));
        OpenCVShopClass->resize(1159, 612);
        actionGaussian = new QAction(OpenCVShopClass);
        actionGaussian->setObjectName(QStringLiteral("actionGaussian"));
        actionEx_morphology = new QAction(OpenCVShopClass);
        actionEx_morphology->setObjectName(QStringLiteral("actionEx_morphology"));
        actionUndo = new QAction(OpenCVShopClass);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(OpenCVShopClass);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionNew = new QAction(OpenCVShopClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionSave = new QAction(OpenCVShopClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        centralWidget = new QWidget(OpenCVShopClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(60, 30, 831, 531));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 47, 13));
        filterGaussianButton = new QPushButton(centralWidget);
        filterGaussianButton->setObjectName(QStringLiteral("filterGaussianButton"));
        filterGaussianButton->setGeometry(QRect(0, 52, 51, 21));
        filterMedianButton = new QPushButton(centralWidget);
        filterMedianButton->setObjectName(QStringLiteral("filterMedianButton"));
        filterMedianButton->setGeometry(QRect(0, 80, 51, 23));
        filterMorphButton = new QPushButton(centralWidget);
        filterMorphButton->setObjectName(QStringLiteral("filterMorphButton"));
        filterMorphButton->setGeometry(QRect(0, 110, 51, 23));
        actionListView = new QListView(centralWidget);
        actionListView->setObjectName(QStringLiteral("actionListView"));
        actionListView->setGeometry(QRect(900, 30, 256, 531));
        actionListView->setSpacing(5);
        OpenCVShopClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OpenCVShopClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1159, 18));
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
        actionGaussian->setText(QApplication::translate("OpenCVShopClass", "Gaussian", 0));
        actionEx_morphology->setText(QApplication::translate("OpenCVShopClass", "Ex. morphology", 0));
        actionUndo->setText(QApplication::translate("OpenCVShopClass", "Undo", 0));
        actionUndo->setShortcut(QApplication::translate("OpenCVShopClass", "Ctrl+Z", 0));
        actionRedo->setText(QApplication::translate("OpenCVShopClass", "Redo", 0));
        actionRedo->setShortcut(QApplication::translate("OpenCVShopClass", "Ctrl+Shift+Z", 0));
        actionNew->setText(QApplication::translate("OpenCVShopClass", "New", 0));
        actionSave->setText(QApplication::translate("OpenCVShopClass", "Save", 0));
        actionSave->setShortcut(QApplication::translate("OpenCVShopClass", "Ctrl+S", 0));
        label->setText(QApplication::translate("OpenCVShopClass", "Filters", 0));
        filterGaussianButton->setText(QApplication::translate("OpenCVShopClass", "Gaussian", 0));
        filterMedianButton->setText(QApplication::translate("OpenCVShopClass", "Median", 0));
        filterMorphButton->setText(QApplication::translate("OpenCVShopClass", "Morph.", 0));
        menuFile->setTitle(QApplication::translate("OpenCVShopClass", "File", 0));
        menuFilters->setTitle(QApplication::translate("OpenCVShopClass", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenCVShopClass: public Ui_OpenCVShopClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENCVSHOP_H
