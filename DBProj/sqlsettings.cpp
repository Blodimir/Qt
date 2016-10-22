#include "sqlsettings.h"
#include "ui_sqlsettings.h"
#include <QMessageBox>
sqlSettings::sqlSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sqlSettings)
{
    ui->setupUi(this);
    setBeginSeting();
   connect( ui->pushButton,SIGNAL(clicked()),this,SLOT(saves()));
}

sqlSettings::~sqlSettings()
{
    delete ui;
}

void sqlSettings::setBeginSeting()
{
    ptr= ptr->Instance();
    ui->lineEdit->setText(ptr->getIp());
    ui->lineEdit_3->setText(QString::number(ptr->getPort()));
    ui->lineEdit_4->setText(ptr->getLogin());
    ui->lineEdit_2->setText(ptr->getPass());
    ui->lineEdit_5->setText(ptr->getDatabase());
}

void sqlSettings::saves()
{
    if(Chek_ip(ui->lineEdit->text()))
    {
    ptr->SetALL(ui->lineEdit->text(),
                ui->lineEdit_3->text().toInt(),
                ui->lineEdit_4->text(),
                ui->lineEdit_2->text(),
                ui->lineEdit_5->text());
    ptr->saveSettings();
    ptr->db.close();
    this->close();
    }
    else
    {
        QMessageBox::warning(0, "Error", "Не валидный Ip",QMessageBox::Ok,0);
        return;
    }
}
bool sqlSettings::Chek_ip(QString ip)
{

    QRegExp re("^(25[0-5]|2[0-4][0-9]|[0-1][0-9]{2}|[0-9]{2}|[0-9])(\.(25[0-5]|2[0-4][0-9]|[0-1][0-9]{2}|[0-9]{2}|[0-9])){3}$");
    if(re.exactMatch(ip))
        return true;
    else
        return false;
}
