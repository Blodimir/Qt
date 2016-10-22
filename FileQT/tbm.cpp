#include "tbm.h"
#include <QLinkedList>
#include <qfile.h>
#include <qdebug.h>


TBM::TBM(QObject *parent)
    : QAbstractTableModel(parent)
{
}

//QVariant TBM::headerData(int section, Qt::Orientation orientation, int role) const
//{
//    // FIXME: Implement me!
//}

int TBM::rowCount(const QModelIndex &parent) const
{int i = 0;

   QFile file("D:\\Programms\\QT Creator\\QT_Projects\\FileQT\\holla.txt");
       if(file.open(QIODevice::ReadOnly |QIODevice::Text))
       {
           while(!file.atEnd())
           {
               //читаем строку
//               QString str =
               file.readLine();
               //Делим строку на слова разделенные пробелом
//               QStringList lst = str.split(" ");
                 // выводим первых три слова
//               qDebug() << str;
                     i++;

           }
return i;
       }
    // FIXME: Implement me!
}

int TBM::columnCount(const QModelIndex &parent) const
{
    return 4;
    // FIXME: Implement me!
}

QVariant TBM::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole) {
//            QString unswer = QString("row = ") + QString::number(index.row()) + "  col = " + QString::number(index.column());
//            // строкой выше мы формируем ответ. QString::number преобразует число в текст
//            return QVariant(unswer);
        QFile file("D:\\Programms\\QT Creator\\QT_Projects\\FileQT\\holla.txt");
            if(file.open(QIODevice::ReadOnly |QIODevice::Text))
            {
//                while(!file.atEnd())
//                {
//                    //читаем строку
                   QString str = file.readLine();
                    //Делим строку на слова разделенные пробелом
     //               QStringList lst = str.split(" ");
                      // выводим первых три слова
     //               qDebug() << str;
//                          i++;
     return str;
//                }

            }


        }
        return QVariant();
}


