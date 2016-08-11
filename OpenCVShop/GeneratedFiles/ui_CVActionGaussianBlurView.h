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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionGaussianBlurView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *topWidget;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *sigmaXSpinBox;
    QLabel *label_2;
    QSlider *kernelSizeSlider;
    QLabel *label;
    QGraphicsView *graphicsView;
    QWidget *bottomWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *updateButton;

    void setupUi(CVActionView *CVActionGaussianBlurView)
    {
        if (CVActionGaussianBlurView->objectName().isEmpty())
            CVActionGaussianBlurView->setObjectName(QStringLiteral("CVActionGaussianBlurView"));
        CVActionGaussianBlurView->resize(812, 735);
        CVActionGaussianBlurView->setLayoutDirection(Qt::RightToLeft);
        verticalLayout = new QVBoxLayout(CVActionGaussianBlurView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        topWidget = new QWidget(CVActionGaussianBlurView);
        topWidget->setObjectName(QStringLiteral("topWidget"));
        horizontalLayout_2 = new QHBoxLayout(topWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sigmaXSpinBox = new QDoubleSpinBox(topWidget);
        sigmaXSpinBox->setObjectName(QStringLiteral("sigmaXSpinBox"));

        horizontalLayout_2->addWidget(sigmaXSpinBox);

        label_2 = new QLabel(topWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        kernelSizeSlider = new QSlider(topWidget);
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

        label = new QLabel(topWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addWidget(topWidget);

        graphicsView = new QGraphicsView(CVActionGaussianBlurView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        bottomWidget = new QWidget(CVActionGaussianBlurView);
        bottomWidget->setObjectName(QStringLiteral("bottomWidget"));
        bottomWidget->setMaximumSize(QSize(300, 16777215));
        horizontalLayout = new QHBoxLayout(bottomWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okButton = new QPushButton(bottomWidget);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(bottomWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        updateButton = new QPushButton(bottomWidget);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(updateButton);


        verticalLayout->addWidget(bottomWidget);


        retranslateUi(CVActionGaussianBlurView);

        QMetaObject::connectSlotsByName(CVActionGaussianBlurView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionGaussianBlurView)
    {
        CVActionGaussianBlurView->setWindowTitle(QApplication::translate("CVActionGaussianBlurView", "Gaussian blur", 0));
        label_2->setText(QApplication::translate("CVActionGaussianBlurView", "Sigma X", 0));
        label->setText(QApplication::translate("CVActionGaussianBlurView", "Kernel size", 0));
        okButton->setText(QApplication::translate("CVActionGaussianBlurView", "OK", 0));
        cancelButton->setText(QApplication::translate("CVActionGaussianBlurView", "Cancel", 0));
        updateButton->setText(QApplication::translate("CVActionGaussianBlurView", "Update", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionGaussianBlurView: public Ui_CVActionGaussianBlurView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONGAUSSIANBLURVIEW_H
