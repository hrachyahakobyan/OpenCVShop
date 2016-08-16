/********************************************************************************
** Form generated from reading UI file 'CVActionHoughCirclesView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONHOUGHCIRCLESVIEW_H
#define UI_CVACTIONHOUGHCIRCLESVIEW_H

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

class Ui_CVActionHoughCirclesView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *maxRadSpinBox;
    QLabel *label_5;
    QDoubleSpinBox *minRadSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *param2SpinBox;
    QLabel *label_3;
    QDoubleSpinBox *param1SpinBox;
    QLabel *label_2;
    QDoubleSpinBox *minDistSpinBox;
    QLabel *label;
    QComboBox *dpComboBox;
    QGraphicsView *graphicsView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *updateButton;

    void setupUi(CVActionView *CVActionHoughCirclesView)
    {
        if (CVActionHoughCirclesView->objectName().isEmpty())
            CVActionHoughCirclesView->setObjectName(QStringLiteral("CVActionHoughCirclesView"));
        CVActionHoughCirclesView->resize(863, 634);
        CVActionHoughCirclesView->setLayoutDirection(Qt::RightToLeft);
        verticalLayout = new QVBoxLayout(CVActionHoughCirclesView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(CVActionHoughCirclesView);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        maxRadSpinBox = new QDoubleSpinBox(widget_2);
        maxRadSpinBox->setObjectName(QStringLiteral("maxRadSpinBox"));
        maxRadSpinBox->setMaximum(1000);

        horizontalLayout_2->addWidget(maxRadSpinBox);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_5);

        minRadSpinBox = new QDoubleSpinBox(widget_2);
        minRadSpinBox->setObjectName(QStringLiteral("minRadSpinBox"));
        minRadSpinBox->setMaximum(1000);

        horizontalLayout_2->addWidget(minRadSpinBox);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);

        param2SpinBox = new QDoubleSpinBox(widget_2);
        param2SpinBox->setObjectName(QStringLiteral("param2SpinBox"));
        param2SpinBox->setMaximum(1000);

        horizontalLayout_2->addWidget(param2SpinBox);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        param1SpinBox = new QDoubleSpinBox(widget_2);
        param1SpinBox->setObjectName(QStringLiteral("param1SpinBox"));
        param1SpinBox->setMaximum(1000);

        horizontalLayout_2->addWidget(param1SpinBox);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        minDistSpinBox = new QDoubleSpinBox(widget_2);
        minDistSpinBox->setObjectName(QStringLiteral("minDistSpinBox"));
        minDistSpinBox->setMinimum(1);
        minDistSpinBox->setMaximum(1000);

        horizontalLayout_2->addWidget(minDistSpinBox);

        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        dpComboBox = new QComboBox(widget_2);
        dpComboBox->setObjectName(QStringLiteral("dpComboBox"));

        horizontalLayout_2->addWidget(dpComboBox);


        verticalLayout->addWidget(widget_2);

        graphicsView = new QGraphicsView(CVActionHoughCirclesView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        widget = new QWidget(CVActionHoughCirclesView);
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


        retranslateUi(CVActionHoughCirclesView);

        QMetaObject::connectSlotsByName(CVActionHoughCirclesView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionHoughCirclesView)
    {
        CVActionHoughCirclesView->setWindowTitle(QApplication::translate("CVActionHoughCirclesView", "Hough circles", 0));
        label_5->setText(QApplication::translate("CVActionHoughCirclesView", "Max rad", 0));
        label_4->setText(QApplication::translate("CVActionHoughCirclesView", "Min rad", 0));
        label_3->setText(QApplication::translate("CVActionHoughCirclesView", "Param2", 0));
        label_2->setText(QApplication::translate("CVActionHoughCirclesView", "Param1", 0));
        label->setText(QApplication::translate("CVActionHoughCirclesView", "Min dist", 0));
        dpComboBox->clear();
        dpComboBox->insertItems(0, QStringList()
         << QApplication::translate("CVActionHoughCirclesView", "DP = 1", 0)
         << QApplication::translate("CVActionHoughCirclesView", "DP = 2", 0)
        );
        okButton->setText(QApplication::translate("CVActionHoughCirclesView", "OK", 0));
        cancelButton->setText(QApplication::translate("CVActionHoughCirclesView", "Cancel", 0));
        updateButton->setText(QApplication::translate("CVActionHoughCirclesView", "Update", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionHoughCirclesView: public Ui_CVActionHoughCirclesView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONHOUGHCIRCLESVIEW_H
