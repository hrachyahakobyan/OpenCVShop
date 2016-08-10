/********************************************************************************
** Form generated from reading UI file 'CVActionMorphologyView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONMORPHOLOGYVIEW_H
#define UI_CVACTIONMORPHOLOGYVIEW_H

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

class Ui_CVActionMorphologyView
{
public:
    QGridLayout *gridLayout;
    QPushButton *okButton;
    QLabel *label;
    QSlider *kernelSizeSlider;
    QComboBox *morphShapeComboBox;
    QGraphicsView *graphicsView;
    QPushButton *cancelButton;
    QComboBox *morphTypeComboBox;

    void setupUi(CVActionView *CVActionMorphologyView)
    {
        if (CVActionMorphologyView->objectName().isEmpty())
            CVActionMorphologyView->setObjectName(QStringLiteral("CVActionMorphologyView"));
        CVActionMorphologyView->resize(843, 652);
        gridLayout = new QGridLayout(CVActionMorphologyView);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        okButton = new QPushButton(CVActionMorphologyView);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 3, 3, 1, 1);

        label = new QLabel(CVActionMorphologyView);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        kernelSizeSlider = new QSlider(CVActionMorphologyView);
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

        gridLayout->addWidget(kernelSizeSlider, 1, 1, 1, 1);

        morphShapeComboBox = new QComboBox(CVActionMorphologyView);
        morphShapeComboBox->setObjectName(QStringLiteral("morphShapeComboBox"));
        morphShapeComboBox->setMinimumSize(QSize(120, 0));
        morphShapeComboBox->setMaximumSize(QSize(150, 16777215));

        gridLayout->addWidget(morphShapeComboBox, 1, 3, 1, 1);

        graphicsView = new QGraphicsView(CVActionMorphologyView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout->addWidget(graphicsView, 2, 0, 1, 4);

        cancelButton = new QPushButton(CVActionMorphologyView);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout->addWidget(cancelButton, 3, 2, 1, 1);

        morphTypeComboBox = new QComboBox(CVActionMorphologyView);
        morphTypeComboBox->setObjectName(QStringLiteral("morphTypeComboBox"));
        morphTypeComboBox->setMinimumSize(QSize(120, 0));
        morphTypeComboBox->setMaximumSize(QSize(150, 16777215));

        gridLayout->addWidget(morphTypeComboBox, 1, 2, 1, 1);


        retranslateUi(CVActionMorphologyView);

        morphTypeComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CVActionMorphologyView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionMorphologyView)
    {
        CVActionMorphologyView->setWindowTitle(QApplication::translate("CVActionMorphologyView", "CVActionMorphologyView", 0));
        okButton->setText(QApplication::translate("CVActionMorphologyView", "OK", 0));
        label->setText(QApplication::translate("CVActionMorphologyView", "Kernel size", 0));
        morphShapeComboBox->clear();
        morphShapeComboBox->insertItems(0, QStringList()
         << QApplication::translate("CVActionMorphologyView", "MORPH_RECT", 0)
         << QApplication::translate("CVActionMorphologyView", "MORPH_CROSS", 0)
         << QApplication::translate("CVActionMorphologyView", "MORPH_ELLIPSE", 0)
        );
        cancelButton->setText(QApplication::translate("CVActionMorphologyView", "Cancel", 0));
        morphTypeComboBox->clear();
        morphTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("CVActionMorphologyView", "MORPH_ERODE", 0)
         << QApplication::translate("CVActionMorphologyView", "MORPH_DILATE", 0)
         << QApplication::translate("CVActionMorphologyView", "MORPH_OPEN", 0)
         << QApplication::translate("CVActionMorphologyView", "MORPH_CLOSE", 0)
         << QApplication::translate("CVActionMorphologyView", "MORPH_GRADIENT", 0)
         << QApplication::translate("CVActionMorphologyView", "MORPH_TOPHAT", 0)
         << QApplication::translate("CVActionMorphologyView", "MORHP_BLACKHAT", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class CVActionMorphologyView: public Ui_CVActionMorphologyView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONMORPHOLOGYVIEW_H
