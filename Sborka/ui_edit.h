/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_edit
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *edit)
    {
        if (edit->objectName().isEmpty())
            edit->setObjectName(QStringLiteral("edit"));
        edit->resize(460, 363);
        tableView = new QTableView(edit);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 421, 192));
        tableView->setAutoScrollMargin(10);
        tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        pushButton = new QPushButton(edit);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 210, 171, 23));
        pushButton_2 = new QPushButton(edit);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 270, 75, 23));
        lineEdit = new QLineEdit(edit);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 270, 91, 20));
        label = new QLabel(edit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 240, 31, 20));
        pushButton_3 = new QPushButton(edit);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 320, 75, 23));
        pushButton_4 = new QPushButton(edit);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(280, 320, 75, 23));
        label_2 = new QLabel(edit);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 240, 51, 20));
        label_3 = new QLabel(edit);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 240, 61, 20));
        lineEdit_2 = new QLineEdit(edit);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(250, 270, 91, 20));
        lineEdit_3 = new QLineEdit(edit);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(140, 270, 91, 20));

        retranslateUi(edit);

        QMetaObject::connectSlotsByName(edit);
    } // setupUi

    void retranslateUi(QDialog *edit)
    {
        edit->setWindowTitle(QApplication::translate("edit", "Dialog", 0));
        pushButton->setText(QApplication::translate("edit", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\265", 0));
        pushButton_2->setText(QApplication::translate("edit", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        label->setText(QApplication::translate("edit", "\320\244\320\230\320\236", 0));
        pushButton_3->setText(QApplication::translate("edit", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        pushButton_4->setText(QApplication::translate("edit", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
        label_2->setText(QApplication::translate("edit", "\320\232\320\260\321\204\320\265\320\264\321\200\320\260", 0));
        label_3->setText(QApplication::translate("edit", "\320\227\320\260\320\275\321\217\321\202\320\276\321\201\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class edit: public Ui_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
