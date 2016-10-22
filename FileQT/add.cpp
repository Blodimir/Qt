#include "add.h"
#include "ui_add.h"
#include <QFile>
#include <QCoreApplication>
#include <QDebug>
#include <QLinkedList>
#include <QList>

Add::Add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);
}
Add::Add(QLinkedList<QString> *hah, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);
    list = hah;
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
}

Add::~Add()
{
    delete ui;
}


NClass Add::getinfo()
{
    return this->obj;
}
void Add::on_pushButton_2_clicked()
{
    QString assa;  QString asssa;
//    этo поиндексно заносит инфу в файл



int t = 0;
      assa="";
//      qDebug() << "Element:" << assa;
list->clear();
//    добавление в линкедлист инфы с 4 полей
*list << ui->lineEdit->text() << ui->lineEdit_2->text() << ui->lineEdit_3->text() << ui->lineEdit_4->text();

      QFile file("D:\\Programms\\QT Creator\\QT_Projects\\FileQT\\getdolla.txt");
      if (file.open(QIODevice::Append)) {
          QTextStream stream(&file);
           QLinkedList<QString>::iterator u = list->begin();
          while (u != list->end()) {//истина где то рядом
            assa = *u;

 t++;
//                   file.write(assa);
//заносит в файл, перед этим делая перенос строки
// if (file.size()==0)
//    {
//     stream << *u;
//    }
//       else
//        {
        stream << *u << "\r\n";
//        }
//                 QString sas = QString::number(t);
//                   qDebug() << "fefa:" << *u;

//                file.close();
//             qDebug() << "Element:" << assa;
             ++u;

        }
//           QString sasa = QString::number(t);
//          qDebug() << "hyto:" << sasa;
        file.close();
//        QLinkedList<QString>::iterator i = list->begin();

//        if (file.open(QIODevice::Append)) {
//        while (i != list->end()) {
//            list->removeFirst();
//            ++i;
//        }
//        }

        }

//    QFile file("D:\\Programms\\QT Creator\\QT_Projects\\FileQT\\holla.txt");
//    if (file.open(QIODevice::Append)) {
//       file.write(assa);
//       QTextStream stream(&file);
//       stream << assa.toUpper();
//    }
//    file.close();
}

void Add::on_pushButton_clicked()
{
    this->close();
}

void Add::on_pushButton_3_clicked()
{
//    тест, нафиг его
//    QString assa;
//        QLinkedList<QString>::iterator i = list->begin();
//        while (i != list->end()) {
//            assa = *i;
//                QFile file("D:\\Programms\\QT Creator\\QT_Projects\\FileQT\\holla.txt");
//                if (file.open(QIODevice::Append)) {
//                   file.write(assa);
//                   QTextStream stream(&file);
//                   stream << assa.toUpper();
//                }
//                file.close();
//             qDebug() << "Element:" << *i << assa;
//             ++i;

//        }
}
