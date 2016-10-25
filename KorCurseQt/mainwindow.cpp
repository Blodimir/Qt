#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    int i,j; ui->lineEdit->setText("");
//    QString all_text = ui->lineEdit->text();
//    QString str = ui->lineEdit->text();
//    qDebug() << str.mid(0, 6) << endl;

    QString str1=ui->textEdit->toPlainText();
    QStringList strList=str1.split('\n'); // разбиваем строку из текстедита на отдельные строки


    int Number_String=strList.size(); //количество строк кода
  if (Number_String > 2)
  {
    QString str_start=strList.at(0);  //Первая строка
    QString str_end=strList.at(Number_String-1);//Последняя строка
    str_end.remove(QChar(' '));
    str_start.remove(QChar(' '));// удаление пробелов

    if (!(str_start=="начало")) {ui->lineEdit->setText("Ошибка, ожидалось 'начало'"); } //проверка на первое слово
    if (!(str_end=="Конец")) {ui->lineEdit->setText("Ошибка, ожидалось 'Конец'");} //проверка на последнее слово


    for (int num=1;num<Number_String-1;num++)
     {
      QString stroka=strList.at(num);//очередная строка программы
      QString perem=""; //обозначение очередной переменной
      QStringList spisok_perem; //храним все переменные
      QString Opisanie=stroka.mid(0,7);
      if (Opisanie=="Массив ")
      {
//          qDebug() <<  "Массив";
          int num=7;
          while (num<=stroka.size()-3)
           if (stroka[num]==' ') {break;}
           else
            {
               int unicode1 = stroka.at(num).unicode();
               int unicode2 = stroka.at(num+1).unicode();
               int unicode3 = stroka.at(num+2).unicode();
               int unicode4 = stroka.at(num+3).unicode();
               if ((unicode1<1104) && (unicode1>1021))
               {
                   num+=1;

                   if ((unicode2<=57) && (unicode2>=48))
                   {
                       perem+=stroka[num-1];
                       perem+=stroka[num];
                       num+=1;
                       if ((unicode3<=57) && (unicode3>=48))
                       {
                           perem+=stroka[num];
                           num+=1;
                           if ((unicode4<=57) && (unicode4>=48))
                           {
                            perem+=stroka[num];
                            num+=1;
                           }
                       }
                   }
                   else ui->lineEdit->setText("Ошибка, ожидалась переменная");

               }
            }

      }
      if (Opisanie=="Строка ")
      {
//          qDebug() <<  "Строка";


      }




//qDebug() <<  Number_String;
     }


  }
  else ui->lineEdit->setText("Ошибка, ожидалось большее количество строк, проверьте полноту и правильность табуляции программы");
}

void MainWindow::on_textEdit_textChanged()
{

}

void MainWindow::on_pushButton_3_clicked()
{
   ui->textEdit->insertPlainText("начало\nМассив б1 р123\nСтрока\nКонец");

}
