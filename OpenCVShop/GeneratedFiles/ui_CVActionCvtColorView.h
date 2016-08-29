/********************************************************************************
** Form generated from reading UI file 'CVActionCvtColorView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONCVTCOLORVIEW_H
#define UI_CVACTIONCVTCOLORVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionCvtColorView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QComboBox *targetComboBox;
    QLineEdit *sourceLineEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *updateButton;

    void setupUi(CVActionView *CVActionCvtColorView)
    {
        if (CVActionCvtColorView->objectName().isEmpty())
            CVActionCvtColorView->setObjectName(QStringLiteral("CVActionCvtColorView"));
        CVActionCvtColorView->resize(333, 122);
        verticalLayout = new QVBoxLayout(CVActionCvtColorView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(CVActionCvtColorView);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        formLayout = new QFormLayout(widget_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_2);

        targetComboBox = new QComboBox(widget_2);
        targetComboBox->setObjectName(QStringLiteral("targetComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, targetComboBox);

        sourceLineEdit = new QLineEdit(widget_2);
        sourceLineEdit->setObjectName(QStringLiteral("sourceLineEdit"));

        formLayout->setWidget(1, QFormLayout::LabelRole, sourceLineEdit);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(CVActionCvtColorView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(300, 16777215));
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

        updateButton = new QPushButton(widget);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(updateButton);


        verticalLayout->addWidget(widget);


        retranslateUi(CVActionCvtColorView);

        QMetaObject::connectSlotsByName(CVActionCvtColorView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionCvtColorView)
    {
        CVActionCvtColorView->setWindowTitle(QApplication::translate("CVActionCvtColorView", "Convert colorspace", 0));
        label->setText(QApplication::translate("CVActionCvtColorView", "Source", 0));
        label_2->setText(QApplication::translate("CVActionCvtColorView", "Target", 0));
        targetComboBox->clear();
        targetComboBox->insertItems(0, QStringList()
         << QApplication::translate("CVActionCvtColorView", "RGB", 0)
         << QApplication::translate("CVActionCvtColorView", "RGBA", 0)
         << QApplication::translate("CVActionCvtColorView", "Gray", 0)
        );
        okButton->setText(QApplication::translate("CVActionCvtColorView", "OK", 0));
        cancelButton->setText(QApplication::translate("CVActionCvtColorView", "Cancel", 0));
        updateButton->setText(QApplication::translate("CVActionCvtColorView", "Convert", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionCvtColorView: public Ui_CVActionCvtColorView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONCVTCOLORVIEW_H
