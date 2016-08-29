/********************************************************************************
** Form generated from reading UI file 'CVActionRotateView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONROTATEVIEW_H
#define UI_CVACTIONROTATEVIEW_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionRotateView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *rotCCLButton;
    QPushButton *rotCLButton;
    QPushButton *rot180Button;
    QPushButton *resetButton;
    QLabel *label;
    QDoubleSpinBox *angleSpinBox;
    QGraphicsView *graphicsView;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(CVActionView *CVActionRotateView)
    {
        if (CVActionRotateView->objectName().isEmpty())
            CVActionRotateView->setObjectName(QStringLiteral("CVActionRotateView"));
        CVActionRotateView->resize(708, 585);
        verticalLayout = new QVBoxLayout(CVActionRotateView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(CVActionRotateView);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rotCCLButton = new QPushButton(widget);
        rotCCLButton->setObjectName(QStringLiteral("rotCCLButton"));

        horizontalLayout->addWidget(rotCCLButton);

        rotCLButton = new QPushButton(widget);
        rotCLButton->setObjectName(QStringLiteral("rotCLButton"));

        horizontalLayout->addWidget(rotCLButton);

        rot180Button = new QPushButton(widget);
        rot180Button->setObjectName(QStringLiteral("rot180Button"));

        horizontalLayout->addWidget(rot180Button);

        resetButton = new QPushButton(widget);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        horizontalLayout->addWidget(resetButton);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        angleSpinBox = new QDoubleSpinBox(widget);
        angleSpinBox->setObjectName(QStringLiteral("angleSpinBox"));
        angleSpinBox->setMaximum(360);
        angleSpinBox->setSingleStep(0.5);

        horizontalLayout->addWidget(angleSpinBox);


        verticalLayout->addWidget(widget);

        graphicsView = new QGraphicsView(CVActionRotateView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        widget_2 = new QWidget(CVActionRotateView);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMaximumSize(QSize(220, 16777215));
        widget_2->setLayoutDirection(Qt::RightToLeft);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        okButton = new QPushButton(widget_2);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(widget_2);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout->addWidget(widget_2);


        retranslateUi(CVActionRotateView);

        QMetaObject::connectSlotsByName(CVActionRotateView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionRotateView)
    {
        CVActionRotateView->setWindowTitle(QApplication::translate("CVActionRotateView", "Rotate", 0));
        rotCCLButton->setText(QApplication::translate("CVActionRotateView", "<-90", 0));
        rotCLButton->setText(QApplication::translate("CVActionRotateView", "90->", 0));
        rot180Button->setText(QApplication::translate("CVActionRotateView", "<-180->", 0));
        resetButton->setText(QApplication::translate("CVActionRotateView", "Reset", 0));
        label->setText(QApplication::translate("CVActionRotateView", "Angle", 0));
        okButton->setText(QApplication::translate("CVActionRotateView", "OK", 0));
        cancelButton->setText(QApplication::translate("CVActionRotateView", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionRotateView: public Ui_CVActionRotateView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONROTATEVIEW_H
