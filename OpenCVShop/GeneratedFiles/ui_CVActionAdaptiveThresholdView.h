/********************************************************************************
** Form generated from reading UI file 'CVActionAdaptiveThresholdView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONADAPTIVETHRESHOLDVIEW_H
#define UI_CVACTIONADAPTIVETHRESHOLDVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
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

class Ui_CVActionAdaptiveThresholdView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *topwidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *maxValueSpinBox;
    QLabel *label_2;
    QSpinBox *blockSizeSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *cSpinBox;
    QComboBox *adaptiveThresholdTypeComboBox;
    QComboBox *thresholdTypeComboBox;
    QGraphicsView *graphicsView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QPushButton *okButton;
    QPushButton *updateButton;

    void setupUi(CVActionView *CVActionAdaptiveThresholdView)
    {
        if (CVActionAdaptiveThresholdView->objectName().isEmpty())
            CVActionAdaptiveThresholdView->setObjectName(QStringLiteral("CVActionAdaptiveThresholdView"));
        CVActionAdaptiveThresholdView->resize(753, 556);
        CVActionAdaptiveThresholdView->setLayoutDirection(Qt::LeftToRight);
        verticalLayout = new QVBoxLayout(CVActionAdaptiveThresholdView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        topwidget = new QWidget(CVActionAdaptiveThresholdView);
        topwidget->setObjectName(QStringLiteral("topwidget"));
        horizontalLayout_2 = new QHBoxLayout(topwidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(topwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(50, 16777215));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        maxValueSpinBox = new QDoubleSpinBox(topwidget);
        maxValueSpinBox->setObjectName(QStringLiteral("maxValueSpinBox"));
        maxValueSpinBox->setMaximum(255);

        horizontalLayout_2->addWidget(maxValueSpinBox);

        label_2 = new QLabel(topwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        blockSizeSpinBox = new QSpinBox(topwidget);
        blockSizeSpinBox->setObjectName(QStringLiteral("blockSizeSpinBox"));
        blockSizeSpinBox->setMinimum(1);
        blockSizeSpinBox->setMaximum(301);
        blockSizeSpinBox->setSingleStep(2);

        horizontalLayout_2->addWidget(blockSizeSpinBox);

        label_3 = new QLabel(topwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        cSpinBox = new QDoubleSpinBox(topwidget);
        cSpinBox->setObjectName(QStringLiteral("cSpinBox"));

        horizontalLayout_2->addWidget(cSpinBox);

        adaptiveThresholdTypeComboBox = new QComboBox(topwidget);
        adaptiveThresholdTypeComboBox->setObjectName(QStringLiteral("adaptiveThresholdTypeComboBox"));

        horizontalLayout_2->addWidget(adaptiveThresholdTypeComboBox);

        thresholdTypeComboBox = new QComboBox(topwidget);
        thresholdTypeComboBox->setObjectName(QStringLiteral("thresholdTypeComboBox"));

        horizontalLayout_2->addWidget(thresholdTypeComboBox);


        verticalLayout->addWidget(topwidget);

        graphicsView = new QGraphicsView(CVActionAdaptiveThresholdView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        widget = new QWidget(CVActionAdaptiveThresholdView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(300, 16777215));
        widget->setLayoutDirection(Qt::RightToLeft);
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
        okButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(okButton);

        updateButton = new QPushButton(widget);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(updateButton);


        verticalLayout->addWidget(widget);


        retranslateUi(CVActionAdaptiveThresholdView);

        QMetaObject::connectSlotsByName(CVActionAdaptiveThresholdView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionAdaptiveThresholdView)
    {
        CVActionAdaptiveThresholdView->setWindowTitle(QApplication::translate("CVActionAdaptiveThresholdView", "Adaptive Threshold", 0));
        label->setText(QApplication::translate("CVActionAdaptiveThresholdView", "Max value", 0));
        label_2->setText(QApplication::translate("CVActionAdaptiveThresholdView", "Block size", 0));
        label_3->setText(QApplication::translate("CVActionAdaptiveThresholdView", "C", 0));
        adaptiveThresholdTypeComboBox->clear();
        adaptiveThresholdTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("CVActionAdaptiveThresholdView", "Adaptive method gaussian", 0)
         << QApplication::translate("CVActionAdaptiveThresholdView", "Adaptive method mean", 0)
        );
        thresholdTypeComboBox->clear();
        thresholdTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("CVActionAdaptiveThresholdView", "Threshold type binary", 0)
         << QApplication::translate("CVActionAdaptiveThresholdView", "Threshold type inverse binary", 0)
        );
        cancelButton->setText(QApplication::translate("CVActionAdaptiveThresholdView", "Cancel", 0));
        okButton->setText(QApplication::translate("CVActionAdaptiveThresholdView", "OK", 0));
        updateButton->setText(QApplication::translate("CVActionAdaptiveThresholdView", "Update", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionAdaptiveThresholdView: public Ui_CVActionAdaptiveThresholdView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONADAPTIVETHRESHOLDVIEW_H
