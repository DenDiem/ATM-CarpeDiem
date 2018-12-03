/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_result
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
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

    void setupUi(QDialog *result)
    {
        if (result->objectName().isEmpty())
            result->setObjectName(QStringLiteral("result"));
        result->resize(640, 480);
        result->setStyleSheet(QStringLiteral("background-color: rgb(11, 58, 151);"));
        gridLayout = new QGridLayout(result);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_3 = new QPushButton(result);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QFont font;
        font.setPointSize(20);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("background-color: rgb(1, 174, 238);\n"
"color: rgb(246, 255, 255);"));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton_2 = new QPushButton(result);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(1, 174, 238);\n"
"color: rgb(246, 255, 255);"));

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        groupBox = new QGroupBox(result);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        label_13->setFont(font1);
        label_13->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_13);

        lCash = new QLabel(groupBox);
        lCash->setObjectName(QStringLiteral("lCash"));
        lCash->setFont(font1);
        lCash->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lCash);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font1);
        label_15->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_15);

        lM500 = new QLabel(groupBox);
        lM500->setObjectName(QStringLiteral("lM500"));
        lM500->setFont(font1);
        lM500->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lM500);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font1);
        label_17->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_17);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font1);
        label_18->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_18);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font1);
        label_19->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_19);

        lM200 = new QLabel(groupBox);
        lM200->setObjectName(QStringLiteral("lM200"));
        lM200->setFont(font1);
        lM200->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lM200);

        lM100 = new QLabel(groupBox);
        lM100->setObjectName(QStringLiteral("lM100"));
        lM100->setFont(font1);
        lM100->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lM100);

        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font1);
        label_22->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_22);

        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font1);
        label_23->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_23);

        lM50 = new QLabel(groupBox);
        lM50->setObjectName(QStringLiteral("lM50"));
        lM50->setFont(font1);
        lM50->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lM50);


        gridLayout->addWidget(groupBox, 0, 0, 2, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        retranslateUi(result);

        QMetaObject::connectSlotsByName(result);
    } // setupUi

    void retranslateUi(QDialog *result)
    {
        result->setWindowTitle(QApplication::translate("result", "Dialog", nullptr));
        pushButton_3->setText(QApplication::translate("result", "Exit", nullptr));
        pushButton_2->setText(QApplication::translate("result", "Return", nullptr));
        groupBox->setTitle(QApplication::translate("result", "Result", nullptr));
        label_13->setText(QApplication::translate("result", "You take:", nullptr));
        lCash->setText(QApplication::translate("result", "0", nullptr));
        label_15->setText(QApplication::translate("result", "500", nullptr));
        lM500->setText(QApplication::translate("result", "0", nullptr));
        label_17->setText(QApplication::translate("result", "value", nullptr));
        label_18->setText(QApplication::translate("result", "caunt", nullptr));
        label_19->setText(QApplication::translate("result", "200", nullptr));
        lM200->setText(QApplication::translate("result", "0", nullptr));
        lM100->setText(QApplication::translate("result", "0", nullptr));
        label_22->setText(QApplication::translate("result", "100", nullptr));
        label_23->setText(QApplication::translate("result", "50", nullptr));
        lM50->setText(QApplication::translate("result", "0", nullptr));
    } // retranslateUi

};

namespResultGet {
    class result: public Ui_result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
