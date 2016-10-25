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
         spisok_perem=stroka.split(' ');//разделяем переменные
         int kolvo_perem=spisok_perem.size();
          qDebug() << kolvo_perem;
        if (kolvo_perem>1)
         {qDebug() << kolvo_perem;
             for(i=1;i<kolvo_perem;i++)
             {
                 perem=spisok_perem.at(i); //конкретная переменная из списка, далее обрабатываем ее
//                 qDebug() << perem;
                 int perem_size=perem.size();
                 if ((perem_size<2)||(perem_size>4))
                 {
                     ui->lineEdit->setText("Ошибка, ожидалась переменная");
                 }
                 else
                 {
                   int unicode1 = perem.at(0).unicode();
                     if ((unicode1>1103) || (unicode1<1022))//проверка на первую обязательную букву
                     {
                         ui->lineEdit->setText("Ошибка, ожидалась переменная, первая буква");
                     }
                     unicode1 = perem.at(1).unicode();
                     if ((unicode1>57) || (unicode1<48))//проверка на вторую обязательную цифру
                     {
                         ui->lineEdit->setText("Ошибка, ожидалась переменная, вторая цифра");
                     }
                    if (perem_size==3)
                    {
                        unicode1 = perem.at(2).unicode();
                        if ((unicode1>57) || (unicode1<48))//проверка на вторую обязательную цифру
                        {
                            ui->lineEdit->setText("Ошибка, ожидалась переменная, третья цифра");
                        }
                    }
                   if (perem_size==4)
                    {
                        unicode1 = perem.at(2).unicode();
                        if ((unicode1>57) || (unicode1<48))//проверка на вторую обязательную цифру
                        {
                            ui->lineEdit->setText("Ошибка, ожидалась переменная, третья цифра");
                        }
                        unicode1 = perem.at(3).unicode();
                        if ((unicode1>57) || (unicode1<48))//проверка на вторую обязательную цифру
                        {
                            ui->lineEdit->setText("Ошибка, ожидалась переменная, четвертая цифра");
                        }
                    }
                 }
             }
         }
         else ui->lineEdit->setText("Ошибка, ожидалась переменная");

//         qDebug() << spisok_perem;
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
