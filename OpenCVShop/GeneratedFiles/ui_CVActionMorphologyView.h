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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionMorphologyView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *morphShapeComboBox;
    QComboBox *morphTypeComboBox;
    QSpinBox *kernelSizeSpinBox;
    QLabel *label;
    QGraphicsView *graphicsView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *updateButton;

    void setupUi(CVActionView *CVActionMorphologyView)
    {
        if (CVActionMorphologyView->objectName().isEmpty())
            CVActionMorphologyView->setObjectName(QStringLiteral("CVActionMorphologyView"));
        CVActionMorphologyView->resize(843, 723);
        CVActionMorphologyView->setLayoutDirection(Qt::RightToLeft);
        verticalLayout = new QVBoxLayout(CVActionMorphologyView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(CVActionMorphologyView);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        morphShapeComboBox = new QComboBox(widget_2);
        morphShapeComboBox->setObjectName(QStringLiteral("morphShapeComboBox"));
        morphShapeComboBox->setMinimumSize(QSize(120, 0));
        morphShapeComboBox->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_2->addWidget(morphShapeComboBox);

        morphTypeComboBox = new QComboBox(widget_2);
        morphTypeComboBox->setObjectName(QStringLiteral("morphTypeComboBox"));
        morphTypeComboBox->setMinimumSize(QSize(120, 0));
        morphTypeComboBox->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_2->addWidget(morphTypeComboBox);

        kernelSizeSpinBox = new QSpinBox(widget_2);
        kernelSizeSpinBox->setObjectName(QStringLiteral("kernelSizeSpinBox"));
        kernelSizeSpinBox->setMaximumSize(QSize(100, 16777215));
        kernelSizeSpinBox->setMinimum(1);
        kernelSizeSpinBox->setMaximum(301);
        kernelSizeSpinBox->setSingleStep(2);

        horizontalLayout_2->addWidget(kernelSizeSpinBox);

        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addWidget(widget_2);

        graphicsView = new QGraphicsView(CVActionMorphologyView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        widget = new QWidget(CVActionMorphologyView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(300, 16777215));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okButton = new QPushButton(widget);
        okButton->setObjectName(QStringLiteral("okButton"));
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


        retranslateUi(CVActionMorphologyView);

        morphTypeComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CVActionMorphologyView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionMorphologyView)
    {
        CVActionMorphologyView->setWindowTitle(QApplication::translate("CVActionMorphologyView", "Morphology", 0));
        morphShapeComboBox->clear();
        morphShapeComboBox->insertItems(0, QStringList()
         << QApplication::translate("CVActionMorphologyView", "MORPH_RECT", 0)
         << QApplication::translate("CVActionMorphologyView", "MORPH_CROSS", 0)
         << QApplication::translate("CVActionMorphologyView", "MORPH_ELLIPSE", 0)
        );
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
        label->setText(QApplication::translate("CVActionMorphologyView", "Kernel size", 0));
        okButton->setText(QApplication::translate("CVActionMorphologyView", "OK", 0));
        cancelButton->setText(QApplication::translate("CVActionMorphologyView", "Cancel", 0));
        updateButton->setText(QApplication::translate("CVActionMorphologyView", "Update", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionMorphologyView: public Ui_CVActionMorphologyView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONMORPHOLOGYVIEW_H
