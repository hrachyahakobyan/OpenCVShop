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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionMedianBlurView
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *kernelSizeSlider;
    QGraphicsView *graphicsView;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(CVActionView *CVActionMedianBlurView)
    {
        if (CVActionMedianBlurView->objectName().isEmpty())
            CVActionMedianBlurView->setObjectName(QStringLiteral("CVActionMedianBlurView"));
        CVActionMedianBlurView->resize(612, 535);
        gridLayout = new QGridLayout(CVActionMedianBlurView);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(CVActionMedianBlurView);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        kernelSizeSlider = new QSlider(CVActionMedianBlurView);
        kernelSizeSlider->setObjectName(QStringLiteral("kernelSizeSlider"));
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

        gridLayout->addWidget(kernelSizeSlider, 0, 1, 1, 1);

        graphicsView = new QGraphicsView(CVActionMedianBlurView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout->addWidget(graphicsView, 1, 0, 1, 4);

        cancelButton = new QPushButton(CVActionMedianBlurView);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout->addWidget(cancelButton, 2, 2, 1, 1);

        okButton = new QPushButton(CVActionMedianBlurView);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 2, 3, 1, 1);


        retranslateUi(CVActionMedianBlurView);

        QMetaObject::connectSlotsByName(CVActionMedianBlurView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionMedianBlurView)
    {
        CVActionMedianBlurView->setWindowTitle(QApplication::translate("CVActionMedianBlurView", "CVActionMedianBlurView", 0));
        label->setText(QApplication::translate("CVActionMedianBlurView", "Kernel size", 0));
        cancelButton->setText(QApplication::translate("CVActionMedianBlurView", "Cancel", 0));
        okButton->setText(QApplication::translate("CVActionMedianBlurView", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionMedianBlurView: public Ui_CVActionMedianBlurView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONMEDIANBLURVIEW_H
