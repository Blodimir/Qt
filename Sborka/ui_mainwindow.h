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
    QPushButton *pushButton;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1161, 637);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(980, 510, 131, 51));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(550, 50, 501, 411));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(50, 50, 471, 411));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 520, 151, 51));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 480, 851, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1161, 21));
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
        pushButton->setText(QApplication::translate("MainWindow", "Exit", 0));
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
"\321\206\321\204 = \"0\"!\"1\"...\"F\"\n"
"\320\261 = \"\320\260\"!\"\320\261\"...\"\321\217\"", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "DO", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
