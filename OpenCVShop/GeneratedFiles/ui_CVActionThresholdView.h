/********************************************************************************
** Form generated from reading UI file 'CVActionThresholdView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONTHRESHOLDVIEW_H
#define UI_CVACTIONTHRESHOLDVIEW_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionThresholdView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *thresholdTypeComboBox;
    QDoubleSpinBox *threshSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *maxValueSpinBox;
    QLabel *label;
    QGraphicsView *graphicsView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *updateButton;

    void setupUi(CVActionView *CVActionThresholdView)
    {
        if (CVActionThresholdView->objectName().isEmpty())
            CVActionThresholdView->setObjectName(QStringLiteral("CVActionThresholdView"));
        CVActionThresholdView->resize(676, 416);
        CVActionThresholdView->setLayoutDirection(Qt::RightToLeft);
        verticalLayout = new QVBoxLayout(CVActionThresholdView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(CVActionThresholdView);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        thresholdTypeComboBox = new QComboBox(widget_2);
        thresholdTypeComboBox->setObjectName(QStringLiteral("thresholdTypeComboBox"));
        thresholdTypeComboBox->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(thresholdTypeComboBox);

        threshSpinBox = new QDoubleSpinBox(widget_2);
        threshSpinBox->setObjectName(QStringLiteral("threshSpinBox"));
        threshSpinBox->setMaximumSize(QSize(100, 16777215));
        threshSpinBox->setMaximum(255);

        horizontalLayout_2->addWidget(threshSpinBox);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(100, 16777215));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        maxValueSpinBox = new QDoubleSpinBox(widget_2);
        maxValueSpinBox->setObjectName(QStringLiteral("maxValueSpinBox"));
        maxValueSpinBox->setMaximumSize(QSize(100, 16777215));
        maxValueSpinBox->setMaximum(255);

        horizontalLayout_2->addWidget(maxValueSpinBox);

        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(100, 16777215));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addWidget(widget_2);

        graphicsView = new QGraphicsView(CVActionThresholdView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        widget = new QWidget(CVActionThresholdView);
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


        retranslateUi(CVActionThresholdView);

        QMetaObject::connectSlotsByName(CVActionThresholdView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionThresholdView)
    {
        CVActionThresholdView->setWindowTitle(QApplication::translate("CVActionThresholdView", "Threshold", 0));
        thresholdTypeComboBox->clear();
        thresholdTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("CVActionThresholdView", "Thresh binary", 0)
         << QApplication::translate("CVActionThresholdView", "Thresh  inverse binary", 0)
         << QApplication::translate("CVActionThresholdView", "Thresh trunc", 0)
         << QApplication::translate("CVActionThresholdView", "Thresh to zero", 0)
         << QApplication::translate("CVActionThresholdView", "Thresh inverse to zero", 0)
         << QApplication::translate("CVActionThresholdView", "Thresh mask", 0)
         << QApplication::translate("CVActionThresholdView", "Thresh Otsu", 0)
         << QApplication::translate("CVActionThresholdView", "Thresh triangle", 0)
        );
        label_2->setText(QApplication::translate("CVActionThresholdView", "Threshold", 0));
        label->setText(QApplication::translate("CVActionThresholdView", "Max value", 0));
        okButton->setText(QApplication::translate("CVActionThresholdView", "OK", 0));
        cancelButton->setText(QApplication::translate("CVActionThresholdView", "Cancel", 0));
        updateButton->setText(QApplication::translate("CVActionThresholdView", "Update", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionThresholdView: public Ui_CVActionThresholdView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONTHRESHOLDVIEW_H
