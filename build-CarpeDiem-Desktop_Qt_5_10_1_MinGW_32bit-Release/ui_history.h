/********************************************************************************
** Form generated from reading UI file 'history.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_H
#define UI_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_History
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableHistory;
    QPushButton *pushButton_27;

    void setupUi(QDialog *History)
    {
        if (History->objectName().isEmpty())
            History->setObjectName(QStringLiteral("History"));
        History->resize(775, 480);
        History->setStyleSheet(QStringLiteral("background-color: rgb(11, 58, 151);"));
        verticalLayout = new QVBoxLayout(History);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableHistory = new QTableView(History);
        tableHistory->setObjectName(QStringLiteral("tableHistory"));
        tableHistory->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 255, 0);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(tableHistory);

        pushButton_27 = new QPushButton(History);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        pushButton_27->setStyleSheet(QLatin1String("background-color: rgb(238, 0, 104);\n"
"color: rgb(247, 222, 246);font: 75 14pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(pushButton_27);


        retranslateUi(History);

        QMetaObject::connectSlotsByName(History);
    } // setupUi

    void retranslateUi(QDialog *History)
    {
        History->setWindowTitle(QApplication::translate("History", "Dialog", nullptr));
        pushButton_27->setText(QApplication::translate("History", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class History: public Ui_History {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H
