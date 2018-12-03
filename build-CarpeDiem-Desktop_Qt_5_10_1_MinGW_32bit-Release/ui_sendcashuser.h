/********************************************************************************
** Form generated from reading UI file 'sendcashuser.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCASHUSER_H
#define UI_SENDCASHUSER_H

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

class Ui_SendCashUser
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
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
    QLineEdit *eCard;

    void setupUi(QDialog *SendCashUser)
    {
        if (SendCashUser->objectName().isEmpty())
            SendCashUser->setObjectName(QStringLiteral("SendCashUser"));
        SendCashUser->resize(640, 480);
        SendCashUser->setStyleSheet(QStringLiteral("background-color: rgb(11, 58, 151);"));
        gridLayout = new QGridLayout(SendCashUser);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        groupBox_3 = new QGroupBox(SendCashUser);
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


        gridLayout->addWidget(groupBox_3, 3, 1, 2, 1);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 2, 1, 1);

        pushButton_28 = new QPushButton(SendCashUser);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        pushButton_28->setStyleSheet(QLatin1String("font: 75 14pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(pushButton_28, 5, 3, 1, 1);

        pushButton_16 = new QPushButton(SendCashUser);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setStyleSheet(QLatin1String("font: 75 14pt \"MS Shell Dlg 2\";background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);"));

        gridLayout->addWidget(pushButton_16, 6, 3, 1, 1);

        lError = new QLabel(SendCashUser);
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

        gridLayout->addWidget(lError, 7, 0, 1, 4);

        groupBox = new QGroupBox(SendCashUser);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QStringLiteral("color: rgb(246, 255, 255);"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        eCard = new QLineEdit(groupBox);
        eCard->setObjectName(QStringLiteral("eCard"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(75);
        sizePolicy1.setHeightForWidth(eCard->sizePolicy().hasHeightForWidth());
        eCard->setSizePolicy(sizePolicy1);
        eCard->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 255, 0);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        eCard->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, eCard);


        gridLayout->addWidget(groupBox, 1, 1, 1, 2);


        retranslateUi(SendCashUser);

        QMetaObject::connectSlotsByName(SendCashUser);
    } // setupUi

    void retranslateUi(QDialog *SendCashUser)
    {
        SendCashUser->setWindowTitle(QApplication::translate("SendCashUser", "Dialog", nullptr));
        groupBox_3->setTitle(QApplication::translate("SendCashUser", "NumPad", nullptr));
        btn_9->setText(QApplication::translate("SendCashUser", "9", nullptr));
        btn_1->setText(QApplication::translate("SendCashUser", "1", nullptr));
        btn_2->setText(QApplication::translate("SendCashUser", "2", nullptr));
        btn_7->setText(QApplication::translate("SendCashUser", "7", nullptr));
        btn_0->setText(QApplication::translate("SendCashUser", "0", nullptr));
        btn_del->setText(QApplication::translate("SendCashUser", "<--", nullptr));
        btn_4->setText(QApplication::translate("SendCashUser", "4", nullptr));
        btn_5->setText(QApplication::translate("SendCashUser", "5", nullptr));
        btn_8->setText(QApplication::translate("SendCashUser", "8", nullptr));
        btn_6->setText(QApplication::translate("SendCashUser", "6", nullptr));
        btn_3->setText(QApplication::translate("SendCashUser", "3", nullptr));
        pushButton_28->setText(QApplication::translate("SendCashUser", "Return", nullptr));
        pushButton_16->setText(QApplication::translate("SendCashUser", "Next", nullptr));
        lError->setText(QString());
        groupBox->setTitle(QApplication::translate("SendCashUser", "Card number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendCashUser: public Ui_SendCashUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCASHUSER_H
