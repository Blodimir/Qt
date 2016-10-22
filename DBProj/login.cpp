#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    mes1=new QMessageBox();
    settings = new QSettings("Ivan","Erot", this);
    loadsettings();

//    ui->textEdit->setText(settings->value(("Title","MainForm").toString()));
    ui->textEdit->setText("ИВАН-ПК\\SQLEXPRESS\n" "TestDB\n" "Иван-ПК\\Иван");
    ui->textEdit->setReadOnly(true);

}

Login::~Login()
{
savesettings();
    delete ui;
}


void Login::savesettings()
{
   settings->setValue("Title",windowTitle());
   settings->setValue("geom", geometry());
   settings->setValue("label", ui->lineEdit->text());
   settings->setValue("label2", ui->lineEdit_2->text());
   settings->setValue("label3", ui->lineEdit_3->text());
   settings->setValue("label4", ui->lineEdit_4->text());
}

void Login::loadsettings()
{
//    set(settings->value("Title","Main").toString());
setWindowTitle(settings->value("Title","Main").toString());
setGeometry(settings->value("geom",QRect(200,160,470,367)).toRect());
//ui->textEdit_2->settext(settings->value("label","DAD").toString());
//ui->lineEdit_2->settext(settings->value("label2",lineEdit_2->settext("DAD"));
QString label = settings->value("label").toString();
 ui->lineEdit->setText(label);
QString label2 = settings->value("label2").toString();
 ui->lineEdit_2->setText(label2);
QString label3 = settings->value("label3").toString();
 ui->lineEdit_3->setText(label3);
QString label4 = settings->value("label4").toString();
 ui->lineEdit_4->setText(label4);
}
void Login::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC3");
       db.setDatabaseName("Driver={SQL SERVER};Server="+ui->lineEdit->text()+";Database="+ui->lineEdit_2->text()+";Trusted_Connection=yes;");
       db.setUserName(ui->lineEdit_3->text());
       db.setPassword(ui->lineEdit_4->text());
       if(db.open()){
//           mes1->setText("luck");
           qDebug() << "luck";
//           mes1->show();
           dod = new showtata;
           dod->show();
           this->close();
       }
       else { qDebug() << db.lastError().text();}
//           mes1->show();


}

//void Login::closeEvent(QCloseEvent *e)
//{
//savesettings();
//Login::closeEvent(e);
//}

void Login::on_pushButton_2_clicked()
{

    this->close();
}

void Login::on_pushButton_3_clicked()
{
    QString WT = ui->lineEdit_5->text();
        setWindowTitle(WT);
}
