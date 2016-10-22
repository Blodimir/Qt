#include "showtata.h"
#include "ui_showtata.h"

showtata::showtata(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::showtata)
{
    ui->setupUi(this);
    model1 = new QSqlQueryModel();
//    model->setTable("Table_1");
//    model->select();
     model1->setQuery("SELECT * FROM Table_1");
    ui->tableView->setModel(model1);
//    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();
}

showtata::~showtata()
{
    delete ui;
}

void showtata::on_pushButton_clicked()
{
    this->close();
}

void showtata::on_pushButton_2_clicked()
{
//    ShowMain = new Login;
//    ShowMain->show();
//    this->close();
}
