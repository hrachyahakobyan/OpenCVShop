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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionMedianBlurView
{
public:
    QGraphicsView *graphicsView;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *label;
    QSlider *kernelSizeSlider;

    void setupUi(CVActionView *CVActionMedianBlurView)
    {
        if (CVActionMedianBlurView->objectName().isEmpty())
            CVActionMedianBlurView->setObjectName(QStringLiteral("CVActionMedianBlurView"));
        CVActionMedianBlurView->resize(612, 535);
        graphicsView = new QGraphicsView(CVActionMedianBlurView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(15, 51, 591, 441));
        okButton = new QPushButton(CVActionMedianBlurView);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(530, 500, 71, 23));
        cancelButton = new QPushButton(CVActionMedianBlurView);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(440, 500, 75, 23));
        label = new QLabel(CVActionMedianBlurView);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 61, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        kernelSizeSlider = new QSlider(CVActionMedianBlurView);
        kernelSizeSlider->setObjectName(QStringLiteral("kernelSizeSlider"));
        kernelSizeSlider->setGeometry(QRect(100, 20, 321, 21));
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

        retranslateUi(CVActionMedianBlurView);

        QMetaObject::connectSlotsByName(CVActionMedianBlurView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionMedianBlurView)
    {
        CVActionMedianBlurView->setWindowTitle(QApplication::translate("CVActionMedianBlurView", "CVActionMedianBlurView", 0));
        okButton->setText(QApplication::translate("CVActionMedianBlurView", "OK", 0));
        cancelButton->setText(QApplication::translate("CVActionMedianBlurView", "Cancel", 0));
        label->setText(QApplication::translate("CVActionMedianBlurView", "Kernel size", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionMedianBlurView: public Ui_CVActionMedianBlurView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONMEDIANBLURVIEW_H
