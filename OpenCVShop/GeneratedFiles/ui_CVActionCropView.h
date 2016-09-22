/********************************************************************************
** Form generated from reading UI file 'CVActionCropView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONCROPVIEW_H
#define UI_CVACTIONCROPVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionCropView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *graphicsWidget;
    QHBoxLayout *horizontalLayout_2;
    QGraphicsView *graphicsView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *updateButton;

    void setupUi(CVActionView *CVActionCropView)
    {
        if (CVActionCropView->objectName().isEmpty())
            CVActionCropView->setObjectName(QStringLiteral("CVActionCropView"));
        CVActionCropView->resize(1012, 748);
        verticalLayout = new QVBoxLayout(CVActionCropView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsWidget = new QWidget(CVActionCropView);
        graphicsWidget->setObjectName(QStringLiteral("graphicsWidget"));
        horizontalLayout_2 = new QHBoxLayout(graphicsWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        graphicsView = new QGraphicsView(graphicsWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setMinimumSize(QSize(500, 0));

        horizontalLayout_2->addWidget(graphicsView);


        verticalLayout->addWidget(graphicsWidget);

        widget = new QWidget(CVActionCropView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(300, 16777215));
        widget->setLayoutDirection(Qt::RightToLeft);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okButton = new QPushButton(widget);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setMinimumSize(QSize(0, 0));
        okButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(cancelButton);

        updateButton = new QPushButton(widget);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(updateButton);


        verticalLayout->addWidget(widget);


        retranslateUi(CVActionCropView);

        QMetaObject::connectSlotsByName(CVActionCropView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionCropView)
    {
        CVActionCropView->setWindowTitle(QApplication::translate("CVActionCropView", "CVActionCropView", 0));
        okButton->setText(QApplication::translate("CVActionCropView", "OK", 0));
        cancelButton->setText(QApplication::translate("CVActionCropView", "Cancel", 0));
        updateButton->setText(QApplication::translate("CVActionCropView", "Update", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionCropView: public Ui_CVActionCropView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONCROPVIEW_H
