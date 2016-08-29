/********************************************************************************
** Form generated from reading UI file 'CVActionShapesView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVACTIONSHAPESVIEW_H
#define UI_CVACTIONSHAPESVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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

class Ui_CVActionShapesView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *procComboBox;
    QComboBox *shapeComboBox;
    QCheckBox *convexCheckBox;
    QPushButton *resetButton;
    QLabel *label_4;
    QSpinBox *widthSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *maxCosineSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *minAreaSpinBox;
    QGraphicsView *graphicsView;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *okButton;
    QPushButton *updateButton;
    QPushButton *cancelButton;

    void setupUi(CVActionView *CVActionShapesView)
    {
        if (CVActionShapesView->objectName().isEmpty())
            CVActionShapesView->setObjectName(QStringLiteral("CVActionShapesView"));
        CVActionShapesView->resize(705, 661);
        verticalLayout = new QVBoxLayout(CVActionShapesView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(CVActionShapesView);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        procComboBox = new QComboBox(widget);
        procComboBox->setObjectName(QStringLiteral("procComboBox"));

        horizontalLayout_4->addWidget(procComboBox);

        shapeComboBox = new QComboBox(widget);
        shapeComboBox->setObjectName(QStringLiteral("shapeComboBox"));

        horizontalLayout_4->addWidget(shapeComboBox);

        convexCheckBox = new QCheckBox(widget);
        convexCheckBox->setObjectName(QStringLiteral("convexCheckBox"));

        horizontalLayout_4->addWidget(convexCheckBox);

        resetButton = new QPushButton(widget);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        horizontalLayout_4->addWidget(resetButton);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);

        widthSpinBox = new QSpinBox(widget);
        widthSpinBox->setObjectName(QStringLiteral("widthSpinBox"));

        horizontalLayout_4->addWidget(widthSpinBox);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_3);

        maxCosineSpinBox = new QDoubleSpinBox(widget);
        maxCosineSpinBox->setObjectName(QStringLiteral("maxCosineSpinBox"));
        maxCosineSpinBox->setMaximum(1);

        horizontalLayout_4->addWidget(maxCosineSpinBox);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_2);

        minAreaSpinBox = new QDoubleSpinBox(widget);
        minAreaSpinBox->setObjectName(QStringLiteral("minAreaSpinBox"));
        minAreaSpinBox->setMaximum(100000);
        minAreaSpinBox->setSingleStep(10);

        horizontalLayout_4->addWidget(minAreaSpinBox);


        verticalLayout->addWidget(widget);

        graphicsView = new QGraphicsView(CVActionShapesView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        widget_2 = new QWidget(CVActionShapesView);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMaximumSize(QSize(320, 16777215));
        widget_2->setLayoutDirection(Qt::RightToLeft);
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        okButton = new QPushButton(widget_2);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(okButton);

        updateButton = new QPushButton(widget_2);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(updateButton);

        cancelButton = new QPushButton(widget_2);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(cancelButton);


        verticalLayout->addWidget(widget_2);


        retranslateUi(CVActionShapesView);

        QMetaObject::connectSlotsByName(CVActionShapesView);
    } // setupUi

    void retranslateUi(CVActionView *CVActionShapesView)
    {
        CVActionShapesView->setWindowTitle(QApplication::translate("CVActionShapesView", "Shapes", 0));
        procComboBox->clear();
        procComboBox->insertItems(0, QStringList()
         << QApplication::translate("CVActionShapesView", "None", 0)
         << QApplication::translate("CVActionShapesView", "Canny", 0)
         << QApplication::translate("CVActionShapesView", "Bin. Thresh", 0)
        );
        shapeComboBox->clear();
        shapeComboBox->insertItems(0, QStringList()
         << QApplication::translate("CVActionShapesView", "Triangle", 0)
         << QApplication::translate("CVActionShapesView", "Quadrilateral", 0)
         << QApplication::translate("CVActionShapesView", "Square", 0)
         << QApplication::translate("CVActionShapesView", "Rectangle", 0)
         << QApplication::translate("CVActionShapesView", "Pentagon", 0)
         << QApplication::translate("CVActionShapesView", "All", 0)
        );
        convexCheckBox->setText(QApplication::translate("CVActionShapesView", "Convex", 0));
        resetButton->setText(QApplication::translate("CVActionShapesView", "Reset", 0));
        label_4->setText(QApplication::translate("CVActionShapesView", "Width", 0));
        label_3->setText(QApplication::translate("CVActionShapesView", "Max Cosine", 0));
        label_2->setText(QApplication::translate("CVActionShapesView", "MinArea", 0));
        okButton->setText(QApplication::translate("CVActionShapesView", "OK", 0));
        updateButton->setText(QApplication::translate("CVActionShapesView", "Update", 0));
        cancelButton->setText(QApplication::translate("CVActionShapesView", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class CVActionShapesView: public Ui_CVActionShapesView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVACTIONSHAPESVIEW_H
