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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionBilateralBlurView
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpinBox *dSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *sigmaColorSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *sigmaSpaceSpinBox;
    QGraphicsView *graphicsView;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(CVActionView *CVActionBilateralBlurView)
    {
        if (CVActionBilateralBlurView->objectName().isEmpty())
            CVActionBilateralBlurView->setObjectName(QStringLiteral("CVActionBilateralBlurView"));
        CVActionBilateralBlurView->resize(783, 607);
        gridLayout = new QGridLayout(CVActionBilateralBlurView);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(CVActionBilateralBlurView);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        dSpinBox = new QSpinBox(CVActionBilateralBlurView);
        dSpinBox->setObjectName(QStringLiteral("dSpinBox"));

        gridLayout->addWidget(dSpinBox, 0, 1, 1, 1);

        label_4 = new QLabel(CVActionBilateralBlurView);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        sigmaColorSpinBox = new QDoubleSpinBox(CVActionBilateralBlurView);
        sigmaColorSpinBox->setObjectName(QStringLiteral("sigmaColorSpinBox"));

        gridLayout->addWidget(sigmaColorSpinBox, 0, 3, 1, 1);

        label_2 = new QLabel(CVActionBilateralBlurView);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 4, 1, 1);

        sigmaSpaceSpinBox = new QDoubleSpinBox(CVActionBilateralBlurView);
        sigmaSpaceSpinBox->setObjectName(QStringLiteral("sigmaSpaceSpinBox"));

        gridLayout->addWidget(sigmaSpaceSpinBox, 0, 5, 1, 1);

        graphicsView = new QGraphicsView(CVActionBilateralBlurView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout->addWidget(graphicsView, 1, 0, 1, 7);

        cancelButton = new QPushButton(CVActionBilateralBlurView);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout->addWidget(cancelButton, 2, 5, 1, 1);

        okButton = new QPushButton(CVActionBilateralBlurView);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 2, 6, 1, 1);


        retranslateUi(CVActionBilateralBlurView);

        QMetaObject::connectSlotsByName(CVActionBilateralBlurView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionBilateralBlurView)
    {
        CVActionBilateralBlurView->setWindowTitle(QApplication::translate("CVActionBilateralBlurView", "CVActionBilateralBlurView", 0));
        label_3->setText(QApplication::translate("CVActionBilateralBlurView", "d", 0));
        label_4->setText(QApplication::translate("CVActionBilateralBlurView", "Sigma color", 0));
        label_2->setText(QApplication::translate("CVActionBilateralBlurView", "Sigma space", 0));
        cancelButton->setText(QApplication::translate("CVActionBilateralBlurView", "Cancel", 0));
        okButton->setText(QApplication::translate("CVActionBilateralBlurView", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionBilateralBlurView: public Ui_CVActionBilateralBlurView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONBILATERALBLURVIEW_H
