/********************************************************************************
** Form generated from reading UI file 'CVActionToolButton.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONTOOLBUTTON_H
#define UI_CVACTIONTOOLBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_CVActionToolButton
{
public:

    void setupUi(QToolButton *CVActionToolButton)
    {
        if (CVActionToolButton->objectName().isEmpty())
            CVActionToolButton->setObjectName(QStringLiteral("CVActionToolButton"));
        CVActionToolButton->resize(400, 300);

        retranslateUi(CVActionToolButton);

        QMetaObject::connectSlotsByName(CVActionToolButton);
    } // setupUi

    void retranslateUi(QToolButton *CVActionToolButton)
    {
        CVActionToolButton->setWindowTitle(QApplication::translate("CVActionToolButton", "CVActionToolButton", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionToolButton: public Ui_CVActionToolButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONTOOLBUTTON_H
