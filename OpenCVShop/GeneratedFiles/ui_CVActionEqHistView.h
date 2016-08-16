/********************************************************************************
** Form generated from reading UI file 'CVActionEqHistView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONEQHISTVIEW_H
#define UI_CVACTIONEQHISTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cvactionview.h"

QT_BEGIN_NAMESPACE

class Ui_CVActionEqHistView
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QWidget *bottomWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *updateButton;

    void setupUi(CVActionView *CVActionEqHistView)
    {
        if (CVActionEqHistView->objectName().isEmpty())
            CVActionEqHistView->setObjectName(QStringLiteral("CVActionEqHistView"));
        CVActionEqHistView->resize(769, 526);
        CVActionEqHistView->setLayoutDirection(Qt::RightToLeft);
        verticalLayout = new QVBoxLayout(CVActionEqHistView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(CVActionEqHistView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        bottomWidget = new QWidget(CVActionEqHistView);
        bottomWidget->setObjectName(QStringLiteral("bottomWidget"));
        bottomWidget->setMaximumSize(QSize(300, 16777215));
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


        verticalLayout->addWidget(bottomWidget);


        retranslateUi(CVActionEqHistView);

        QMetaObject::connectSlotsByName(CVActionEqHistView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionEqHistView)
    {
        CVActionEqHistView->setWindowTitle(QApplication::translate("CVActionEqHistView", "CVActionEqHistView", 0));
        okButton->setText(QApplication::translate("CVActionEqHistView", "OK", 0));
        cancelButton->setText(QApplication::translate("CVActionEqHistView", "Cancel", 0));
        updateButton->setText(QApplication::translate("CVActionEqHistView", "Update", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionEqHistView: public Ui_CVActionEqHistView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONEQHISTVIEW_H
