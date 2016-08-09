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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionGaussianBlurView
{
public:
    QPushButton *okButton;
    QPushButton *cancelButton;
    QGraphicsView *graphicsView;
    QSlider *kernelSizeSlider;
    QLabel *label;
    QDoubleSpinBox *sigmaXSpinBox;
    QLabel *label_2;

    void setupUi(CVActionView *CVActionGaussianBlurView)
    {
        if (CVActionGaussianBlurView->objectName().isEmpty())
            CVActionGaussianBlurView->setObjectName(QStringLiteral("CVActionGaussianBlurView"));
        CVActionGaussianBlurView->resize(622, 535);
        okButton = new QPushButton(CVActionGaussianBlurView);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(530, 500, 71, 23));
        cancelButton = new QPushButton(CVActionGaussianBlurView);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(440, 500, 75, 23));
        graphicsView = new QGraphicsView(CVActionGaussianBlurView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(15, 51, 591, 441));
        kernelSizeSlider = new QSlider(CVActionGaussianBlurView);
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
        label = new QLabel(CVActionGaussianBlurView);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 61, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        sigmaXSpinBox = new QDoubleSpinBox(CVActionGaussianBlurView);
        sigmaXSpinBox->setObjectName(QStringLiteral("sigmaXSpinBox"));
        sigmaXSpinBox->setGeometry(QRect(530, 10, 71, 31));
        label_2 = new QLabel(CVActionGaussianBlurView);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(470, 10, 61, 31));
        label_2->setFont(font);

        retranslateUi(CVActionGaussianBlurView);

        QMetaObject::connectSlotsByName(CVActionGaussianBlurView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionGaussianBlurView)
    {
        CVActionGaussianBlurView->setWindowTitle(QApplication::translate("CVActionGaussianBlurView", "CVActionGaussianBlurView", 0));
        okButton->setText(QApplication::translate("CVActionGaussianBlurView", "OK", 0));
        cancelButton->setText(QApplication::translate("CVActionGaussianBlurView", "Cancel", 0));
        label->setText(QApplication::translate("CVActionGaussianBlurView", "Kernel size", 0));
        label_2->setText(QApplication::translate("CVActionGaussianBlurView", "Sigma X", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionGaussianBlurView: public Ui_CVActionGaussianBlurView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONGAUSSIANBLURVIEW_H
