/********************************************************************************
** Form generated from reading UI file 'CVActionMedianBlurView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONMEDIANBLURVIEW_H
#define UI_CVACTIONMEDIANBLURVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionMedianBlurView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *kernelSizeSlider;
    QLabel *label;
    QGraphicsView *graphicsView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QPushButton *okButton;
    QPushButton *updateButton;

    void setupUi(CVActionView *CVActionMedianBlurView)
    {
        if (CVActionMedianBlurView->objectName().isEmpty())
            CVActionMedianBlurView->setObjectName(QStringLiteral("CVActionMedianBlurView"));
        CVActionMedianBlurView->resize(612, 535);
        CVActionMedianBlurView->setLayoutDirection(Qt::RightToLeft);
        verticalLayout = new QVBoxLayout(CVActionMedianBlurView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(CVActionMedianBlurView);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        kernelSizeSlider = new QSlider(widget_2);
        kernelSizeSlider->setObjectName(QStringLiteral("kernelSizeSlider"));
        kernelSizeSlider->setLayoutDirection(Qt::LeftToRight);
        kernelSizeSlider->setMinimum(1);
        kernelSizeSlider->setMaximum(111);
        kernelSizeSlider->setSingleStep(2);
        kernelSizeSlider->setPageStep(10);
        kernelSizeSlider->setValue(1);
        kernelSizeSlider->setSliderPosition(1);
        kernelSizeSlider->setTracking(true);
        kernelSizeSlider->setOrientation(Qt::Horizontal);
        kernelSizeSlider->setTickPosition(QSlider::TicksBelow);
        kernelSizeSlider->setTickInterval(2);

        horizontalLayout_2->addWidget(kernelSizeSlider);

        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addWidget(widget_2);

        graphicsView = new QGraphicsView(CVActionMedianBlurView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        widget = new QWidget(CVActionMedianBlurView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(300, 16777215));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(cancelButton);

        okButton = new QPushButton(widget);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setMinimumSize(QSize(0, 0));
        okButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(okButton);

        updateButton = new QPushButton(widget);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(updateButton);


        verticalLayout->addWidget(widget);


        retranslateUi(CVActionMedianBlurView);

        QMetaObject::connectSlotsByName(CVActionMedianBlurView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionMedianBlurView)
    {
        CVActionMedianBlurView->setWindowTitle(QApplication::translate("CVActionMedianBlurView", "Median blur", 0));
        label->setText(QApplication::translate("CVActionMedianBlurView", "Kernel size", 0));
        cancelButton->setText(QApplication::translate("CVActionMedianBlurView", "Cancel", 0));
        okButton->setText(QApplication::translate("CVActionMedianBlurView", "OK", 0));
        updateButton->setText(QApplication::translate("CVActionMedianBlurView", "Update", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionMedianBlurView: public Ui_CVActionMedianBlurView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONMEDIANBLURVIEW_H
