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

    QString str_start=strList.at(0);
    int Number_String=strList.size();
  if (Number_String > 2)
  {
    QString str_end=strList.at(Number_String-1);
    str_end.remove(QChar(' '));
    str_start.remove(QChar(' '));// удаление пробелов

   //    for (i=0;str_start.size();i++) { if str_start[i]=' ' {
 if (!(str_start=="начало")) {ui->lineEdit->setText("Ошибка, ожидалось 'начало'"); } //проверка на первое слово
 if (!(str_end=="Конец")) {ui->lineEdit->setText("Ошибка, ожидалось 'Конец'");} //проверка на последнее слово

    //   for (i=1;strList.size();i++)
//     {
//      str1=strList.at(i);
//     }

     qDebug() <<  str_end;
  }
  else ui->lineEdit->setText("Ошибка, ожидалось большее количество строк, проверьте полноту и правильность табуляции программы");
}

void MainWindow::on_textEdit_textChanged()
{

}
