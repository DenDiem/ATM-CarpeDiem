/********************************************************************************
** Form generated from reading UI file 'resultsend.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTSEND_H
#define UI_RESULTSEND_H

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

class Ui_ResultSend
{
public:
    QFormLayout *formLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_13;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *lSender;
    QLabel *lReceiver;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ResultSend)
    {
        if (ResultSend->objectName().isEmpty())
            ResultSend->setObjectName(QStringLiteral("ResultSend"));
        ResultSend->resize(640, 480);
        ResultSend->setStyleSheet(QStringLiteral("background-color: rgb(11, 58, 151);"));
        formLayout_2 = new QFormLayout(ResultSend);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        groupBox = new QGroupBox(ResultSend);
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

        lSender = new QLabel(groupBox);
        lSender->setObjectName(QStringLiteral("lSender"));
        lSender->setFont(font);
        lSender->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lSender);

        lReceiver = new QLabel(groupBox);
        lReceiver->setObjectName(QStringLiteral("lReceiver"));
        lReceiver->setFont(font);
        lReceiver->setStyleSheet(QLatin1String("\n"
"color: rgb(39, 255, 1);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lReceiver);


        formLayout_2->setWidget(0, QFormLayout::LabelRole, groupBox);

        horizontalSpacer = new QSpacerItem(289, 312, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(0, QFormLayout::FieldRole, horizontalSpacer);

        pushButton_2 = new QPushButton(ResultSend);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QFont font1;
        font1.setPointSize(20);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(1, 174, 238);\n"
"color: rgb(246, 255, 255);"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, pushButton_2);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(1, QFormLayout::FieldRole, verticalSpacer);


        retranslateUi(ResultSend);

        QMetaObject::connectSlotsByName(ResultSend);
    } // setupUi

    void retranslateUi(QDialog *ResultSend)
    {
        ResultSend->setWindowTitle(QApplication::translate("ResultSend", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("ResultSend", "Result", nullptr));
        label_13->setText(QApplication::translate("ResultSend", "Successfully", nullptr));
        label_17->setText(QApplication::translate("ResultSend", "Sender", nullptr));
        label_18->setText(QApplication::translate("ResultSend", "receiver", nullptr));
        lSender->setText(QApplication::translate("ResultSend", "0", nullptr));
        lReceiver->setText(QApplication::translate("ResultSend", "0", nullptr));
        pushButton_2->setText(QApplication::translate("ResultSend", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResultSend: public Ui_ResultSend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTSEND_H
