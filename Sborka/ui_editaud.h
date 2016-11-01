/********************************************************************************
** Form generated from reading UI file 'editaud.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITAUD_H
#define UI_EDITAUD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_EditAud
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_5;
    QComboBox *comboBox;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *EditAud)
    {
        if (EditAud->objectName().isEmpty())
            EditAud->setObjectName(QStringLiteral("EditAud"));
        EditAud->resize(735, 524);
        gridLayout = new QGridLayout(EditAud);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(EditAud);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 3);

        pushButton_4 = new QPushButton(EditAud);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 0, 3, 1, 1);

        label = new QLabel(EditAud);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(EditAud);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label_3 = new QLabel(EditAud);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(EditAud);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 1, 3, 1, 1);

        comboBox = new QComboBox(EditAud);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(EditAud);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        lineEdit_2 = new QLineEdit(EditAud);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 2, 2, 1, 1);

        pushButton_3 = new QPushButton(EditAud);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 3, 1, 1);

        pushButton = new QPushButton(EditAud);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(EditAud);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);


        retranslateUi(EditAud);

        QMetaObject::connectSlotsByName(EditAud);
    } // setupUi

    void retranslateUi(QDialog *EditAud)
    {
        EditAud->setWindowTitle(QApplication::translate("EditAud", "Dialog", 0));
        pushButton_4->setText(QApplication::translate("EditAud", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        label->setText(QApplication::translate("EditAud", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272", 0));
        label_2->setText(QApplication::translate("EditAud", "\320\235\320\276\320\274\320\265\321\200", 0));
        label_3->setText(QApplication::translate("EditAud", "\320\232\320\260\320\274\320\277\321\203\321\201", 0));
        pushButton_5->setText(QApplication::translate("EditAud", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        pushButton_3->setText(QApplication::translate("EditAud", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", 0));
        pushButton->setText(QApplication::translate("EditAud", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        pushButton_2->setText(QApplication::translate("EditAud", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class EditAud: public Ui_EditAud {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITAUD_H
