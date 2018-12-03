/********************************************************************************
** Form generated from reading UI file 'sendcash.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCASH_H
#define UI_SENDCASH_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_sendCash
{
public:
    QGridLayout *gridLayout_3;
    QLabel *lName;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QPushButton *btn_9;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_7;
    QPushButton *btn_0;
    QPushButton *btn_del;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_8;
    QPushButton *btn_6;
    QPushButton *btn_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_28;
    QPushButton *pushButton_16;
    QLabel *lError;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLineEdit *ePass;
    QLabel *label;

    void setupUi(QDialog *sendCash)
    {
        if (sendCash->objectName().isEmpty())
            sendCash->setObjectName(QStringLiteral("sendCash"));
        sendCash->resize(860, 589);
        sendCash->setStyleSheet(QStringLiteral("background-color: rgb(11, 58, 151);"));
        gridLayout_3 = new QGridLayout(sendCash);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lName = new QLabel(sendCash);
        lName->setObjectName(QStringLiteral("lName"));
        lName->setStyleSheet(QLatin1String("\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(lName, 0, 2, 1, 4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 2, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 3, 0, 1, 1);

        groupBox_3 = new QGroupBox(sendCash);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        btn_9 = new QPushButton(groupBox_3);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        btn_9->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout_2->addWidget(btn_9, 3, 2, 1, 1);

        btn_1 = new QPushButton(groupBox_3);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        btn_1->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(btn_1, 1, 0, 1, 1);

        btn_2 = new QPushButton(groupBox_3);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        btn_2->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(btn_2, 1, 1, 1, 1);

        btn_7 = new QPushButton(groupBox_3);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        btn_7->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout_2->addWidget(btn_7, 3, 0, 1, 1);

        btn_0 = new QPushButton(groupBox_3);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        btn_0->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout_2->addWidget(btn_0, 4, 1, 1, 1);

        btn_del = new QPushButton(groupBox_3);
        btn_del->setObjectName(QStringLiteral("btn_del"));
        btn_del->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout_2->addWidget(btn_del, 4, 2, 1, 1);

        btn_4 = new QPushButton(groupBox_3);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        btn_4->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout_2->addWidget(btn_4, 2, 0, 1, 1);

        btn_5 = new QPushButton(groupBox_3);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        btn_5->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout_2->addWidget(btn_5, 2, 1, 1, 1);

        btn_8 = new QPushButton(groupBox_3);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        btn_8->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout_2->addWidget(btn_8, 3, 1, 1, 1);

        btn_6 = new QPushButton(groupBox_3);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        btn_6->setStyleSheet(QLatin1String("font: 75 18pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout_2->addWidget(btn_6, 2, 2, 1, 1);

        btn_3 = new QPushButton(groupBox_3);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        btn_3->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);\n"
"font: 75 18pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(btn_3, 1, 2, 1, 1);


        gridLayout_3->addWidget(groupBox_3, 3, 1, 2, 3);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 4, 4, 1, 1);

        pushButton_28 = new QPushButton(sendCash);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        pushButton_28->setStyleSheet(QLatin1String("font: 75 14pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout_3->addWidget(pushButton_28, 5, 5, 1, 1);

        pushButton_16 = new QPushButton(sendCash);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setStyleSheet(QLatin1String("font: 75 14pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout_3->addWidget(pushButton_16, 6, 5, 1, 1);

        lError = new QLabel(sendCash);
        lError->setObjectName(QStringLiteral("lError"));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        lError->setFont(font);
        lError->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 255, 0);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(lError, 7, 0, 1, 6);

        groupBox = new QGroupBox(sendCash);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        ePass = new QLineEdit(groupBox);
        ePass->setObjectName(QStringLiteral("ePass"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(75);
        sizePolicy1.setHeightForWidth(ePass->sizePolicy().hasHeightForWidth());
        ePass->setSizePolicy(sizePolicy1);
        ePass->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 255, 0);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        ePass->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, ePass);


        gridLayout_3->addWidget(groupBox, 1, 1, 2, 3);

        label = new QLabel(sendCash);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(label, 0, 0, 1, 2);


        retranslateUi(sendCash);

        QMetaObject::connectSlotsByName(sendCash);
    } // setupUi

    void retranslateUi(QDialog *sendCash)
    {
        sendCash->setWindowTitle(QApplication::translate("sendCash", "Dialog", nullptr));
        lName->setText(QApplication::translate("sendCash", " [name]", nullptr));
        groupBox_3->setTitle(QApplication::translate("sendCash", "NumPad", nullptr));
        btn_9->setText(QApplication::translate("sendCash", "9", nullptr));
        btn_1->setText(QApplication::translate("sendCash", "1", nullptr));
        btn_2->setText(QApplication::translate("sendCash", "2", nullptr));
        btn_7->setText(QApplication::translate("sendCash", "7", nullptr));
        btn_0->setText(QApplication::translate("sendCash", "0", nullptr));
        btn_del->setText(QApplication::translate("sendCash", "<--", nullptr));
        btn_4->setText(QApplication::translate("sendCash", "4", nullptr));
        btn_5->setText(QApplication::translate("sendCash", "5", nullptr));
        btn_8->setText(QApplication::translate("sendCash", "8", nullptr));
        btn_6->setText(QApplication::translate("sendCash", "6", nullptr));
        btn_3->setText(QApplication::translate("sendCash", "3", nullptr));
        pushButton_28->setText(QApplication::translate("sendCash", "Return", nullptr));
        pushButton_16->setText(QApplication::translate("sendCash", "Send", nullptr));
        lError->setText(QString());
        groupBox->setTitle(QApplication::translate("sendCash", "Value", nullptr));
        label->setText(QApplication::translate("sendCash", "Target:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sendCash: public Ui_sendCash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCASH_H
