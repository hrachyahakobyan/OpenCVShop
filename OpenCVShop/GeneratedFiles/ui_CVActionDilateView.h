/********************************************************************************
** Form generated from reading UI file 'CVActionDilateView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONDILATEVIEW_H
#define UI_CVACTIONDILATEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionDilateView
{
public:
    QGridLayout *gridLayout;
    QPushButton *okButton;
    QGraphicsView *graphicsView;
    QLabel *label;
    QSlider *kernelSizeSlider;
    QPushButton *cancelButton;
    QComboBox *morphShapeComboBox;

    void setupUi(CVActionView *CVActionDilateView)
    {
        if (CVActionDilateView->objectName().isEmpty())
            CVActionDilateView->setObjectName(QStringLiteral("CVActionDilateView"));
        CVActionDilateView->resize(784, 529);
        gridLayout = new QGridLayout(CVActionDilateView);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        okButton = new QPushButton(CVActionDilateView);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 3, 3, 1, 1);

        graphicsView = new QGraphicsView(CVActionDilateView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout->addWidget(graphicsView, 2, 0, 1, 4);

        label = new QLabel(CVActionDilateView);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        kernelSizeSlider = new QSlider(CVActionDilateView);
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

        cancelButton = new QPushButton(CVActionDilateView);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout->addWidget(cancelButton, 3, 2, 1, 1);

        morphShapeComboBox = new QComboBox(CVActionDilateView);
        morphShapeComboBox->setObjectName(QStringLiteral("morphShapeComboBox"));

        gridLayout->addWidget(morphShapeComboBox, 0, 2, 1, 2);


        retranslateUi(CVActionDilateView);

        QMetaObject::connectSlotsByName(CVActionDilateView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionDilateView)
    {
        CVActionDilateView->setWindowTitle(QApplication::translate("CVActionDilateView", "CVActionDilateView", 0));
        okButton->setText(QApplication::translate("CVActionDilateView", "OK", 0));
        label->setText(QApplication::translate("CVActionDilateView", "Kernel size", 0));
        cancelButton->setText(QApplication::translate("CVActionDilateView", "Cancel", 0));
        morphShapeComboBox->clear();
        morphShapeComboBox->insertItems(0, QStringList()
         << QApplication::translate("CVActionDilateView", "MORPH_RECT", 0)
         << QApplication::translate("CVActionDilateView", "MORPH_CROSS", 0)
         << QApplication::translate("CVActionDilateView", "MORPH_ELLIPSE", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class CVActionDilateView: public Ui_CVActionDilateView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONDILATEVIEW_H
