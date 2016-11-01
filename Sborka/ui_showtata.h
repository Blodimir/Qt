/********************************************************************************
** Form generated from reading UI file 'showtata.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWTATA_H
#define UI_SHOWTATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showtata
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *showtata)
    {
        if (showtata->objectName().isEmpty())
            showtata->setObjectName(QStringLiteral("showtata"));
        showtata->resize(848, 372);
        gridLayout_3 = new QGridLayout(showtata);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_4 = new QPushButton(showtata);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(showtata);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 0, 1, 1, 1);

        pushButton_6 = new QPushButton(showtata);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_2->addWidget(pushButton_6, 0, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(showtata);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(showtata);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        tableView = new QTableView(showtata);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 3);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 2);

        pushButton_2 = new QPushButton(showtata);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton = new QPushButton(showtata);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_3->addWidget(pushButton, 1, 1, 1, 1);

        pushButton->raise();
        pushButton_2->raise();
        tableView->raise();
        lineEdit->raise();
        pushButton_3->raise();
        tableView->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();

        retranslateUi(showtata);

        QMetaObject::connectSlotsByName(showtata);
    } // setupUi

    void retranslateUi(QWidget *showtata)
    {
        showtata->setWindowTitle(QApplication::translate("showtata", "Form", 0));
        pushButton_4->setText(QApplication::translate("showtata", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", 0));
        pushButton_5->setText(QApplication::translate("showtata", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\320\270\320\270", 0));
        pushButton_6->setText(QApplication::translate("showtata", "\320\236\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        pushButton_3->setText(QApplication::translate("showtata", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", 0));
        pushButton_2->setText(QApplication::translate("showtata", "\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", 0));
        pushButton->setText(QApplication::translate("showtata", "\320\222\321\213\321\205\320\276\320\264", 0));
    } // retranslateUi

};

namespace Ui {
    class showtata: public Ui_showtata {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWTATA_H
