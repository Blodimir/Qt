#include "filetable.h"
#include "ui_filetable.h"
#include <QFile>
#include <QCoreApplication>
#include <QDebug>
#include <QLinkedList>
#include <QList>
#include <qtableview.h>
#include "QStandardItemModel"
#include "QStandardItem"
#include "math.h"


FileTable::FileTable(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FileTable)
{
    ui->setupUi(this);
    //это загрузка таблицы из класса, как у всех нормальных людей. она закомечена.
//tb1 = new TBM();
//ui->tableView->setModel(tb1);

//    if(QFile::exists("D:\\Programms\\QT Creator\\QT_Projects\\FileQT\\holla.txt"))
//    {qDebug() << "Файл существует";}
//    else { qDebug() << "Файл несуществует";}
//    //Считывание из файла
//    QStringList strArray;
//    QFile file("D:\\Programms\\QT Creator\\QT_Projects\\FileQT\\holla.txt");
//    if (!file.open(QIODevice::ReadOnly)) return;
//    QTextStream stream(&file);
//    while(!stream.atEnd())
//    {
//        strArray.append(stream.readLine());
//    }

//    //Вывод
//    foreach(QString str, strArray)
//    {
//        qDebug() << str;
//    }


//list << "10" << "20" << "30";
//QLinkedList<QString>::iterator i = list.begin();

//while (i != list.end()) {
//     qDebug() << "Element:" << *i;
//     ++i;
//}
/*list << "A" << "B" << "C";
// (A, B, C)
list += list;
// (A, B, C, A, B, C)
list.removeFirst();
list.removeLast();
//  (B, C, A, B)
list.prepend("A");
list.append("A");
// (A, B, C, A, B, A)
list.removeAll("B");
// (A, C, A, A)
list.append(list.takeFirst());
// (C, A, A, A)
*/
//typedef T* iterator;
//ui->lineEdit->setText(list);
//for (i = list.begin(); i != list.end(); ++i)
//{
////qDebug() << i;

//}
//    QValueList<int>::iterator it = list.begin(); // создаем итератор и переводим его в начало списка
//    while (it != list.end()) {
//         qDebug() << "Element:" << *it;
//         ++it;
 /*   QLinkedList<int> xs, ys, zs, us;
    // (Работает аналогично для QVector и QLinkedList.)
        xs << 1 << 2 << 3;
    // xs = (1,2,3)
        ys += 1;
      ys += 2;
      ys += 3;
    // ys = (1,2,3)
        zs = xs + ys;
    // zs = (1,2,3,1,2,3)
       us << xs << ys << zs;
    // us = (1,2,3,1,2,3,1,2,3,1,2,3)

qDebug() << us;
*/
}



FileTable::~FileTable()
{
    delete ui;
}

void FileTable::on_pushButton_clicked()
{
    this->close();
}

void FileTable::on_actionAdd_new_file_triggered()
{
//    QFile file("file.txt");

}

void FileTable::on_pushButton_2_clicked()
{

    Add addd(&list,this);
  if(addd.exec() == QDialog::Accepted)
{
  }
 }

void FileTable::on_pushButton_4_clicked()
{
   //UPDATE

//    QLinkedList<QString>::iterator e = list.begin();
//    while (e != list.end()) {

//    list.removeFirst();}
    QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        //Заголовки столбцов
        QStringList horizontalHeader;
        horizontalHeader.append("Country");
        horizontalHeader.append("Name Track");
        horizontalHeader.append("Length");
        horizontalHeader.append("Age");

        //Заголовки строк
//        QStringList verticalHeader;
//        verticalHeader.append("Ряд 1");
//        verticalHeader.append("Ряд 2");

        model->setHorizontalHeaderLabels(horizontalHeader);
//        model->setVerticalHeaderLabels(verticalHeader);

        int k = 0;
        QFile file("D:\\Programms\\QT Creator\\QT_Projects\\FileQT\\getdolla.txt");
            if(file.open(QIODevice::ReadOnly |QIODevice::Text))
            {
                while(!file.atEnd())
                {
                    //читаем строку, k - наши строки, то бишь записи, *4
                  QString ded =  file.readLine();
                          k++;
                          list.prepend(ded);
//                           qDebug() << "zero:" << ded;
                }


                //истинное количество записей
                k=k/4;
//                QString sas = QString::number(k);
//             ui->lineEdit->setText(sas);

         for (int j=0;j<k;j++){ //строки
           for (int i=0;i<4;i++){//столбцы, по дефолту 4
                QLinkedList<QString>::iterator l = list.begin();
               if (l != list.end())
               {
                QString asas = *l;
                item = new QStandardItem(QString(asas));
                model->setItem(j, i, item);//запись в таблевью
                l++;
                list.removeFirst();//удаление записи из листа
//                QString s1 = QString::number(i);QString s2 = QString::number(j);
//                qDebug()<<s1<<s2;//проверочка
               }
            }
       }
          file.close();




    /*    ui->tableView->setModel(model);
//        list << "10" << "20" << "30";
//             list << "1" << "2" << "3";
            QString assa;
                QLinkedList<QString>::iterator i = list.begin();
                while (i != list.end()) {
                    assa = *i;
                     qDebug() << "Element:" << *i;
                     ++i;

                }*/

//        ui->tableView->resizeRowsToContents();
//        ui->tableView->resizeColumnsToContents();
}





//    QTableView  *tableView = new QTableView();
//    QStandardItemModel *model = new QStandardItemModel(3,3, tableView);
//    tableView->setModel(model);

//    for(int row=0; row!=model->rowCount(); ++row){
//        for(int column=0; column!=model->columnCount(); ++column) {
//            QStandardItem *newItem = new QStandardItem(tr("%1").arg((row+1)*(column+1)));
//            model->setItem(row, column, newItem);
//        }
//    }



ui->tableView->setModel(model);
//    list << "10" << "20" << "30";
//     list << "1" << "2" << "3";
//    QString assa;
//        QLinkedList<QString>::iterator i = list.begin();
//        while (i != list.end()) {
//            assa = *i;
//             qDebug() << "Element:" << *i << assa;
//             ++i;

//        }

//    QFile file("D:\\Programms\\QT Creator\\QT_Projects\\FileQT\\holla.txt");
//    if (file.open(QIODevice::Append)) {
////       file.write(assa);
//       QTextStream stream(&file);
//       stream << assa.toUpper();
//    }
//    file.close();

}

void FileTable::on_pushButton_3_clicked()
{
    int r = 0;
    QFile file("D:\\Programms\\QT Creator\\QT_Projects\\FileQT\\getdolla.txt");
        if(file.open(QIODevice::ReadOnly |QIODevice::Text))
        {
            while(!file.atEnd())
            {
                r++;
                //читаем строку, k - наши строки, то бишь записи, *4
              file.readLine();
//

              QString ded =  file.readLine();
//                      k++;
                      list.prepend(ded);
                      if (r == ui->lineEdit->text().toInt())
                      {

                      }
//                             qDebug() << "zero:" << ded;
            }
        }
         file.close();
}

void FileTable::on_pushButton_6_clicked()
{
    //delete file
   QFile file("D:\\Programms\\QT Creator\\QT_Projects\\FileQT\\getdolla.txt");
   file.remove();
}
