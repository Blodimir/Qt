/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1102, 647);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(550, 10, 501, 411));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 520, 151, 51));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(944, 532, 101, 51));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 430, 1041, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(true);
        lineEdit->setFont(font1);
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(420, 500, 341, 81));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(40, 30, 481, 371));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 470, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1102, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "\320\257\320\267\321\213\320\272 = \"\320\275\320\260\321\207\320\260\320\273\320\276\" \320\276\320\277\320\270\321\201...\320\276\320\277\320\270\321\201 \320\276\320\277\320\265\321\200...\320\276\320\277\320\265\321\200 \"\320\236\320\272\320\276\320\275\321\207\320\260\320\275\320\270\320\265\"\n"
"\320\236\320\277\320\270\321\201 = \"\320\234\320\260\321\201\321\201\320\270\320\262\" \320\277\320\265\321\200\320\265\320\274...\320\277\320\265\321\200\320\265\320\274 ! \"\320\241\321\202\321\200\320\276\320\272\320\260\" \320\237\320\265\321\200\320\265\320\274\n"
"\320\236\320\277\320\265\321\200 = \321\206\320\265\320\273\":\"\320\237\320\265\321\200\320\265\320\274 \"=\" \320\237\320\247\n"
"\320\237\320\247 = \321\207\320\260\321\201\321\202\321\2141 \320\267\320\2751...\321\207\320\260\321\201\321\202\321\2141\n"
"\320\227\320\2751 = \"+\" ! \"-\"\n"
"\321\207\320\260\321\201\321\202\321\2141 = \321\207\320\260\321\201\321\202\321\2142 \320\267\320\2752...\321\207\320\260\321\201\321\202\321\2142\n"
""
                        "\320\227\320\2752 = \"*\" ! \"/\"\n"
"\321\207\320\260\321\201\321\202\321\2142 = \321\207\320\260\321\201\321\202\321\2143 \320\267\320\2753...\321\207\320\260\321\201\321\202\321\2143\n"
"\320\227\320\2753 = \"OR\" ! \"AND\"\n"
"\320\247\320\260\321\201\321\202\321\2143 = </\"NOT\"/>\321\207\320\260\321\201\321\202\321\2144\n"
"\320\247\320\260\321\201\321\202\321\2144 = \320\277\320\265\321\200\320\265\320\274 ! \320\262\320\265\321\211 ! \320\237\320\247  (n-\320\273\321\216\320\261\320\276\320\265)\n"
"\320\237\320\265\321\200\320\265\320\274 = \320\261\321\206\321\204</\"\321\206\321\204\"/></\"\321\206\321\204\"/>\n"
"\320\262\320\265\321\211 = \321\206\320\265\320\273\".\"\321\206\320\265\320\273\n"
"\321\206\320\265\320\273 = \321\206\321\204...\321\206\321\204\n"
"\321\206\321\204 = \"0\"!\"1\"!...!\"F\"\n"
"\320\261 = \"\320\260\"!\"\320\261\"!...!\"\321\217\"", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "DO", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Exit", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Test Text 1", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
