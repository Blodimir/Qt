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

void MainWindow::on_pushButton_2_clicked()
{
   QString a1 = ui->lineEdit->text();
   QString a2 = ui->lineEdit_2->text();
}
