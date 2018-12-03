/********************************************************************************
** Form generated from reading UI file 'getresult.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETRESULT_H
#define UI_GETRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_GetResult
{
public:
    QFormLayout *formLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_13;
    QLabel *lCash;
    QLabel *label_15;
    QLabel *lM500;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *lM200;
    QLabel *lM100;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *lM50;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *GetResult)
    {
        if (GetResult->objectName().isEmpty())
            GetResult->setObjectName(QStringLiteral("GetResult"));
        GetResult->resize(640, 480);
        GetResult->setStyleSheet(QStringLiteral("background-color: rgb(11, 58, 151);"));
        formLayout_2 = new QFormLayout(GetResult);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        groupBox = new QGroupBox(GetResult);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label_13->setFont(font);
        label_13->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_13);

        lCash = new QLabel(groupBox);
        lCash->setObjectName(QStringLiteral("lCash"));
        lCash->setFont(font);
        lCash->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lCash);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font);
        label_15->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_15);

        lM500 = new QLabel(groupBox);
        lM500->setObjectName(QStringLiteral("lM500"));
        lM500->setFont(font);
        lM500->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lM500);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font);
        label_17->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_17);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font);
        label_18->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_18);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font);
        label_19->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_19);

        lM200 = new QLabel(groupBox);
        lM200->setObjectName(QStringLiteral("lM200"));
        lM200->setFont(font);
        lM200->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lM200);

        lM100 = new QLabel(groupBox);
        lM100->setObjectName(QStringLiteral("lM100"));
        lM100->setFont(font);
        lM100->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lM100);

        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font);
        label_22->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_22);

        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font);
        label_23->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_23);

        lM50 = new QLabel(groupBox);
        lM50->setObjectName(QStringLiteral("lM50"));
        lM50->setFont(font);
        lM50->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lM50);


        formLayout_2->setWidget(0, QFormLayout::LabelRole, groupBox);

        horizontalSpacer = new QSpacerItem(360, 312, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(0, QFormLayout::FieldRole, horizontalSpacer);

        pushButton_2 = new QPushButton(GetResult);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QFont font1;
        font1.setPointSize(20);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(1, 174, 238);\n"
"color: rgb(246, 255, 255);"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, pushButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(1, QFormLayout::FieldRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(2, QFormLayout::FieldRole, verticalSpacer_2);


        retranslateUi(GetResult);

        QMetaObject::connectSlotsByName(GetResult);
    } // setupUi

    void retranslateUi(QDialog *GetResult)
    {
        GetResult->setWindowTitle(QApplication::translate("GetResult", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("GetResult", "Result", nullptr));
        label_13->setText(QApplication::translate("GetResult", "You take:", nullptr));
        lCash->setText(QApplication::translate("GetResult", "0", nullptr));
        label_15->setText(QApplication::translate("GetResult", "500", nullptr));
        lM500->setText(QApplication::translate("GetResult", "0", nullptr));
        label_17->setText(QApplication::translate("GetResult", "value", nullptr));
        label_18->setText(QApplication::translate("GetResult", "caunt", nullptr));
        label_19->setText(QApplication::translate("GetResult", "200", nullptr));
        lM200->setText(QApplication::translate("GetResult", "0", nullptr));
        lM100->setText(QApplication::translate("GetResult", "0", nullptr));
        label_22->setText(QApplication::translate("GetResult", "100", nullptr));
        label_23->setText(QApplication::translate("GetResult", "50", nullptr));
        lM50->setText(QApplication::translate("GetResult", "0", nullptr));
        pushButton_2->setText(QApplication::translate("GetResult", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetResult: public Ui_GetResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETRESULT_H
