/********************************************************************************
** Form generated from reading UI file 'CVActionResizeView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONRESIZEVIEW_H
#define UI_CVACTIONRESIZEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionResizeView
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QComboBox *interFlagComboBox;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpinBox *widthSpinBox;
    QSpinBox *heightSpinBox;

    void setupUi(CVActionView *CVActionResizeView)
    {
        if (CVActionResizeView->objectName().isEmpty())
            CVActionResizeView->setObjectName(QStringLiteral("CVActionResizeView"));
        CVActionResizeView->resize(196, 129);
        gridLayout = new QGridLayout(CVActionResizeView);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(CVActionResizeView);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(CVActionResizeView);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        interFlagComboBox = new QComboBox(CVActionResizeView);
        interFlagComboBox->setObjectName(QStringLiteral("interFlagComboBox"));

        gridLayout->addWidget(interFlagComboBox, 0, 1, 1, 1);

        okButton = new QPushButton(CVActionResizeView);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 2, 1, 1, 1);

        cancelButton = new QPushButton(CVActionResizeView);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout->addWidget(cancelButton, 3, 1, 1, 1);

        widthSpinBox = new QSpinBox(CVActionResizeView);
        widthSpinBox->setObjectName(QStringLiteral("widthSpinBox"));
        widthSpinBox->setMinimum(1);
        widthSpinBox->setMaximum(3000);

        gridLayout->addWidget(widthSpinBox, 1, 0, 1, 1);

        heightSpinBox = new QSpinBox(CVActionResizeView);
        heightSpinBox->setObjectName(QStringLiteral("heightSpinBox"));
        heightSpinBox->setMinimum(1);
        heightSpinBox->setMaximum(3000);

        gridLayout->addWidget(heightSpinBox, 3, 0, 1, 1);


        retranslateUi(CVActionResizeView);

        QMetaObject::connectSlotsByName(CVActionResizeView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionResizeView)
    {
        CVActionResizeView->setWindowTitle(QApplication::translate("CVActionResizeView", "Resize", 0));
        label->setText(QApplication::translate("CVActionResizeView", "Width", 0));
        label_2->setText(QApplication::translate("CVActionResizeView", "Height", 0));
        interFlagComboBox->clear();
        interFlagComboBox->insertItems(0, QStringList()
         << QApplication::translate("CVActionResizeView", "Nearest", 0)
         << QApplication::translate("CVActionResizeView", "Linear", 0)
         << QApplication::translate("CVActionResizeView", "Cubic", 0)
        );
        okButton->setText(QApplication::translate("CVActionResizeView", "Resize", 0));
        cancelButton->setText(QApplication::translate("CVActionResizeView", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionResizeView: public Ui_CVActionResizeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONRESIZEVIEW_H
