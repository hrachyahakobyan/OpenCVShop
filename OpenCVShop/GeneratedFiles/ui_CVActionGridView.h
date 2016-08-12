/********************************************************************************
** Form generated from reading UI file 'CVActionGridView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONGRIDVIEW_H
#define UI_CVACTIONGRIDVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionGridView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *widthSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *distanceSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *angleSpinBox;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QSlider *offsetXSlider;
    QSlider *offsetYSlider;
    QWidget *bottomWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *updateButton;
    QCheckBox *automaticUpdateCheckBox;

    void setupUi(CVActionView *CVActionGridView)
    {
        if (CVActionGridView->objectName().isEmpty())
            CVActionGridView->setObjectName(QStringLiteral("CVActionGridView"));
        CVActionGridView->resize(976, 771);
        CVActionGridView->setLayoutDirection(Qt::RightToLeft);
        verticalLayout = new QVBoxLayout(CVActionGridView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(CVActionGridView);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widthSpinBox = new QSpinBox(widget);
        widthSpinBox->setObjectName(QStringLiteral("widthSpinBox"));
        widthSpinBox->setMaximumSize(QSize(100, 16777215));
        widthSpinBox->setMinimum(1);

        horizontalLayout_2->addWidget(widthSpinBox);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        distanceSpinBox = new QDoubleSpinBox(widget);
        distanceSpinBox->setObjectName(QStringLiteral("distanceSpinBox"));
        distanceSpinBox->setMaximumSize(QSize(100, 16777215));
        distanceSpinBox->setMinimum(1);
        distanceSpinBox->setMaximum(100);

        horizontalLayout_2->addWidget(distanceSpinBox);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        angleSpinBox = new QDoubleSpinBox(widget);
        angleSpinBox->setObjectName(QStringLiteral("angleSpinBox"));
        angleSpinBox->setMaximumSize(QSize(100, 16777215));
        angleSpinBox->setMinimum(0.1);
        angleSpinBox->setMaximum(89.9);

        horizontalLayout_2->addWidget(angleSpinBox);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(CVActionGridView);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        graphicsView = new QGraphicsView(widget_2);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout->addWidget(graphicsView, 1, 1, 1, 1);

        offsetXSlider = new QSlider(widget_2);
        offsetXSlider->setObjectName(QStringLiteral("offsetXSlider"));
        offsetXSlider->setLayoutDirection(Qt::RightToLeft);
        offsetXSlider->setMaximum(1000);
        offsetXSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(offsetXSlider, 0, 1, 1, 1);

        offsetYSlider = new QSlider(widget_2);
        offsetYSlider->setObjectName(QStringLiteral("offsetYSlider"));
        offsetYSlider->setLayoutDirection(Qt::RightToLeft);
        offsetYSlider->setMaximum(1000);
        offsetYSlider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(offsetYSlider, 1, 2, 1, 1);


        verticalLayout->addWidget(widget_2);

        bottomWidget = new QWidget(CVActionGridView);
        bottomWidget->setObjectName(QStringLiteral("bottomWidget"));
        bottomWidget->setMaximumSize(QSize(400, 16777215));
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

        automaticUpdateCheckBox = new QCheckBox(bottomWidget);
        automaticUpdateCheckBox->setObjectName(QStringLiteral("automaticUpdateCheckBox"));

        horizontalLayout->addWidget(automaticUpdateCheckBox);


        verticalLayout->addWidget(bottomWidget);


        retranslateUi(CVActionGridView);

        QMetaObject::connectSlotsByName(CVActionGridView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionGridView)
    {
        CVActionGridView->setWindowTitle(QApplication::translate("CVActionGridView", "Grid", 0));
        label_3->setText(QApplication::translate("CVActionGridView", "Width", 0));
        label_2->setText(QApplication::translate("CVActionGridView", "Distance", 0));
        label->setText(QApplication::translate("CVActionGridView", "Angle", 0));
        okButton->setText(QApplication::translate("CVActionGridView", "OK", 0));
        cancelButton->setText(QApplication::translate("CVActionGridView", "Cancel", 0));
        updateButton->setText(QApplication::translate("CVActionGridView", "Update", 0));
        automaticUpdateCheckBox->setText(QApplication::translate("CVActionGridView", "Automatic update", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionGridView: public Ui_CVActionGridView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONGRIDVIEW_H
