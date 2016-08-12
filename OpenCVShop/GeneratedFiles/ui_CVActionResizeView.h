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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionResizeView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *heightSpinBox;
    QLabel *label;
    QSpinBox *widthSpinBox;
    QComboBox *interFlagComboBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(CVActionView *CVActionResizeView)
    {
        if (CVActionResizeView->objectName().isEmpty())
            CVActionResizeView->setObjectName(QStringLiteral("CVActionResizeView"));
        CVActionResizeView->resize(350, 117);
        verticalLayout = new QVBoxLayout(CVActionResizeView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(CVActionResizeView);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        heightSpinBox = new QSpinBox(widget_2);
        heightSpinBox->setObjectName(QStringLiteral("heightSpinBox"));
        heightSpinBox->setMinimum(1);
        heightSpinBox->setMaximum(3000);

        horizontalLayout_2->addWidget(heightSpinBox);

        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        widthSpinBox = new QSpinBox(widget_2);
        widthSpinBox->setObjectName(QStringLiteral("widthSpinBox"));
        widthSpinBox->setMinimum(1);
        widthSpinBox->setMaximum(3000);

        horizontalLayout_2->addWidget(widthSpinBox);

        interFlagComboBox = new QComboBox(widget_2);
        interFlagComboBox->setObjectName(QStringLiteral("interFlagComboBox"));

        horizontalLayout_2->addWidget(interFlagComboBox);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(CVActionResizeView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(200, 16777215));
        widget->setLayoutDirection(Qt::RightToLeft);
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


        verticalLayout->addWidget(widget);


        retranslateUi(CVActionResizeView);

        QMetaObject::connectSlotsByName(CVActionResizeView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionResizeView)
    {
        CVActionResizeView->setWindowTitle(QApplication::translate("CVActionResizeView", "Resize", 0));
        label_2->setText(QApplication::translate("CVActionResizeView", "Height", 0));
        label->setText(QApplication::translate("CVActionResizeView", "Width", 0));
        interFlagComboBox->clear();
        interFlagComboBox->insertItems(0, QStringList()
         << QApplication::translate("CVActionResizeView", "Nearest", 0)
         << QApplication::translate("CVActionResizeView", "Linear", 0)
         << QApplication::translate("CVActionResizeView", "Cubic", 0)
        );
        okButton->setText(QApplication::translate("CVActionResizeView", "OK", 0));
        cancelButton->setText(QApplication::translate("CVActionResizeView", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionResizeView: public Ui_CVActionResizeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONRESIZEVIEW_H
