#ifndef FILETABLE_H
#define FILETABLE_H

#include <QMainWindow>
#include "add.h"
#include "ui_add.h"
#include"QMessageBox"
#include <qtableview.h>
#include <QLinkedList>
#include <tbm.h>



namespace Ui {
class FileTable;
}

class FileTable : public QMainWindow
{
    Q_OBJECT
//QLinkedList<NClass> link;
public:
    explicit FileTable(QWidget *parent = 0);
    ~FileTable();
   Add* addd;
   QMessageBox *mes;
   QLinkedList<QString> list;
   TBM *tb1;

private slots:
    void on_pushButton_clicked();

    void on_actionAdd_new_file_triggered();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::FileTable *ui;
//     QLinkedList<QString>::iterator i = list.begin();
};

#endif // FILETABLE_H
