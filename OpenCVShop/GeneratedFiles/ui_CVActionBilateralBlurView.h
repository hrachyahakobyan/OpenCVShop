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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionBilateralBlurView
{
public:
    QPushButton *okButton;
    QPushButton *cancelButton;
    QDoubleSpinBox *sigmaSpaceSpinBox;
    QLabel *label_2;
    QGraphicsView *graphicsView;
    QLabel *label_3;
    QDoubleSpinBox *sigmaColorSpinBox;
    QLabel *label_4;
    QSpinBox *dSpinBox;

    void setupUi(CVActionView *CVActionBilateralBlurView)
    {
        if (CVActionBilateralBlurView->objectName().isEmpty())
            CVActionBilateralBlurView->setObjectName(QStringLiteral("CVActionBilateralBlurView"));
        CVActionBilateralBlurView->resize(622, 534);
        okButton = new QPushButton(CVActionBilateralBlurView);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(525, 499, 71, 23));
        cancelButton = new QPushButton(CVActionBilateralBlurView);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(435, 499, 75, 23));
        sigmaSpaceSpinBox = new QDoubleSpinBox(CVActionBilateralBlurView);
        sigmaSpaceSpinBox->setObjectName(QStringLiteral("sigmaSpaceSpinBox"));
        sigmaSpaceSpinBox->setGeometry(QRect(380, 10, 71, 31));
        label_2 = new QLabel(CVActionBilateralBlurView);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 10, 81, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        graphicsView = new QGraphicsView(CVActionBilateralBlurView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 50, 591, 441));
        label_3 = new QLabel(CVActionBilateralBlurView);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 10, 16, 31));
        label_3->setFont(font);
        sigmaColorSpinBox = new QDoubleSpinBox(CVActionBilateralBlurView);
        sigmaColorSpinBox->setObjectName(QStringLiteral("sigmaColorSpinBox"));
        sigmaColorSpinBox->setGeometry(QRect(210, 10, 71, 31));
        label_4 = new QLabel(CVActionBilateralBlurView);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 10, 71, 31));
        label_4->setFont(font);
        dSpinBox = new QSpinBox(CVActionBilateralBlurView);
        dSpinBox->setObjectName(QStringLiteral("dSpinBox"));
        dSpinBox->setGeometry(QRect(40, 10, 71, 31));

        retranslateUi(CVActionBilateralBlurView);

        QMetaObject::connectSlotsByName(CVActionBilateralBlurView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionBilateralBlurView)
    {
        CVActionBilateralBlurView->setWindowTitle(QApplication::translate("CVActionBilateralBlurView", "CVActionBilateralBlurView", 0));
        okButton->setText(QApplication::translate("CVActionBilateralBlurView", "OK", 0));
        cancelButton->setText(QApplication::translate("CVActionBilateralBlurView", "Cancel", 0));
        label_2->setText(QApplication::translate("CVActionBilateralBlurView", "Sigma space", 0));
        label_3->setText(QApplication::translate("CVActionBilateralBlurView", "d", 0));
        label_4->setText(QApplication::translate("CVActionBilateralBlurView", "Sigma color", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionBilateralBlurView: public Ui_CVActionBilateralBlurView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONBILATERALBLURVIEW_H
