#ifndef ADD_H
#define ADD_H

#include <QWidget>
#include <QDialog>
#include <nclass.h>
#include <QLinkedList>
namespace Ui {
class Add;
}

class Add : public QDialog
{
    Q_OBJECT
   NClass obj;
public:
    explicit Add(QWidget *parent = 0);
    explicit Add(QLinkedList<QString> *hah,QWidget *parent = 0);
    ~Add();
   NClass getinfo();

private slots:
   void on_pushButton_2_clicked();

   void on_pushButton_clicked();

   void on_pushButton_3_clicked();

private:
    Ui::Add *ui;
    QLinkedList<QString> *list;
//    QLinkedList<QString> *list1;

};

#endif // ADD_H
