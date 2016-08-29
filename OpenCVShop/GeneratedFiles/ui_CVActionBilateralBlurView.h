/********************************************************************************
** Form generated from reading UI file 'CVActionBilateralBlurView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONBILATERALBLURVIEW_H
#define UI_CVACTIONBILATERALBLURVIEW_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionBilateralBlurView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *dSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *sigmaColorSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *sigmaSpaceSpinBox;
    QLabel *label_2;
    QGraphicsView *graphicsView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *updateButton;
    QPushButton *cancelButton;

    void setupUi(CVActionView *CVActionBilateralBlurView)
    {
        if (CVActionBilateralBlurView->objectName().isEmpty())
            CVActionBilateralBlurView->setObjectName(QStringLiteral("CVActionBilateralBlurView"));
        CVActionBilateralBlurView->resize(827, 668);
        CVActionBilateralBlurView->setLayoutDirection(Qt::RightToLeft);
        verticalLayout = new QVBoxLayout(CVActionBilateralBlurView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(CVActionBilateralBlurView);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        dSpinBox = new QSpinBox(widget_2);
        dSpinBox->setObjectName(QStringLiteral("dSpinBox"));

        horizontalLayout_2->addWidget(dSpinBox);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        sigmaColorSpinBox = new QDoubleSpinBox(widget_2);
        sigmaColorSpinBox->setObjectName(QStringLiteral("sigmaColorSpinBox"));

        horizontalLayout_2->addWidget(sigmaColorSpinBox);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);

        sigmaSpaceSpinBox = new QDoubleSpinBox(widget_2);
        sigmaSpaceSpinBox->setObjectName(QStringLiteral("sigmaSpaceSpinBox"));

        horizontalLayout_2->addWidget(sigmaSpaceSpinBox);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addWidget(widget_2);

        graphicsView = new QGraphicsView(CVActionBilateralBlurView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        widget = new QWidget(CVActionBilateralBlurView);
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

        updateButton = new QPushButton(widget);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(updateButton);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addWidget(widget);


        retranslateUi(CVActionBilateralBlurView);

        QMetaObject::connectSlotsByName(CVActionBilateralBlurView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionBilateralBlurView)
    {
        CVActionBilateralBlurView->setWindowTitle(QApplication::translate("CVActionBilateralBlurView", "Bilateral blur", 0));
        label_3->setText(QApplication::translate("CVActionBilateralBlurView", "d", 0));
        label_4->setText(QApplication::translate("CVActionBilateralBlurView", "Sigma color", 0));
        label_2->setText(QApplication::translate("CVActionBilateralBlurView", "Sigma space", 0));
        okButton->setText(QApplication::translate("CVActionBilateralBlurView", "OK", 0));
        updateButton->setText(QApplication::translate("CVActionBilateralBlurView", "Update", 0));
        cancelButton->setText(QApplication::translate("CVActionBilateralBlurView", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionBilateralBlurView: public Ui_CVActionBilateralBlurView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONBILATERALBLURVIEW_H
