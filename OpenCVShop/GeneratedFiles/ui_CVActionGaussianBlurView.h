/********************************************************************************
** Form generated from reading UI file 'CVActionGaussianBlurView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONGAUSSIANBLURVIEW_H
#define UI_CVACTIONGAUSSIANBLURVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionGaussianBlurView
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *kernelSizeSlider;
    QLabel *label_2;
    QDoubleSpinBox *sigmaXSpinBox;
    QGraphicsView *graphicsView;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(CVActionView *CVActionGaussianBlurView)
    {
        if (CVActionGaussianBlurView->objectName().isEmpty())
            CVActionGaussianBlurView->setObjectName(QStringLiteral("CVActionGaussianBlurView"));
        CVActionGaussianBlurView->resize(677, 540);
        gridLayout = new QGridLayout(CVActionGaussianBlurView);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(CVActionGaussianBlurView);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        kernelSizeSlider = new QSlider(CVActionGaussianBlurView);
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

        label_2 = new QLabel(CVActionGaussianBlurView);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        sigmaXSpinBox = new QDoubleSpinBox(CVActionGaussianBlurView);
        sigmaXSpinBox->setObjectName(QStringLiteral("sigmaXSpinBox"));

        gridLayout->addWidget(sigmaXSpinBox, 0, 3, 1, 1);

        graphicsView = new QGraphicsView(CVActionGaussianBlurView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout->addWidget(graphicsView, 1, 0, 1, 4);

        cancelButton = new QPushButton(CVActionGaussianBlurView);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout->addWidget(cancelButton, 2, 2, 1, 1);

        okButton = new QPushButton(CVActionGaussianBlurView);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 2, 3, 1, 1);


        retranslateUi(CVActionGaussianBlurView);

        QMetaObject::connectSlotsByName(CVActionGaussianBlurView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionGaussianBlurView)
    {
        CVActionGaussianBlurView->setWindowTitle(QApplication::translate("CVActionGaussianBlurView", "CVActionGaussianBlurView", 0));
        label->setText(QApplication::translate("CVActionGaussianBlurView", "Kernel size", 0));
        label_2->setText(QApplication::translate("CVActionGaussianBlurView", "Sigma X", 0));
        cancelButton->setText(QApplication::translate("CVActionGaussianBlurView", "Cancel", 0));
        okButton->setText(QApplication::translate("CVActionGaussianBlurView", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionGaussianBlurView: public Ui_CVActionGaussianBlurView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONGAUSSIANBLURVIEW_H
