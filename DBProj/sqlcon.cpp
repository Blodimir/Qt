#include "sqlcon.h"
#include "QRegExp"
#include <QMessageBox>
#include"QtSql/qsqlerror.h"
#include"QDebug"
#include "QApplication"

SQLCON::SQLCON()
{
setingCon= new QSettings(SCRDIR"/settings/settingsConnection.ini",QSettings::IniFormat);
db=QSqlDatabase::addDatabase("QODBC");
}

void SQLCON::SetALL(const QString &ip, const int &port,
                    const QString &login, const QString &pass,
                    const QString &database)
{

   _instance->ip=ip;_instance->login=login;
   _instance->pass=pass;_instance->port=port;
   _instance->database=database;

}
SQLCON* SQLCON::_instance = 0;
SQLCON* SQLCON::Instance()
{
    static QMutex mutex;
    if (!_instance){
        mutex.lock();
        if (_instance == 0)
            _instance = new SQLCON;
        mutex.unlock();
    }
    return _instance;
}

void SQLCON::connetct(QObject *parent)
{


    QString templateString = QString("Driver={SQL Server Native Client 11.0};Server=%1;Port=%2;Database=%3;Uid=%4;Pwd=%5;");
    QString connectionString = QString(templateString).arg(_instance->ip).arg(_instance->port).arg(_instance->database).arg(_instance->login).arg(_instance->pass);
    db.setConnectOptions();
    db.setDatabaseName(connectionString);
      if(!db.open())
        {
            QMessageBox::warning(0, "Error", db.lastError().text(),
                0,
                1);
            return;
        }
      else
          qDebug()<<"Success";
    model=new QSqlTableModel(parent,db);

}

SQLCON::~SQLCON()
{
   saveSettings();
   if(model)
   delete model;

}

void SQLCON::loadSettings()
{

    SetALL(setingCon->value("Ip"," ").toString(),
    setingCon->value("Port",1433).toInt(),
    setingCon->value("Login"," ").toString(),
    setingCon->value("Pass"," ").toString(),
    setingCon->value("Database"," ").toString());
    qDebug()<<_instance<<ip<<" "<<login;

}

void SQLCON::saveSettings()
{

   setingCon->setValue("Ip",_instance->ip);
    setingCon->setValue("Port",_instance->port);
    setingCon->setValue("Login",_instance->login);
    setingCon->setValue("Pass",_instance->pass);
    setingCon->setValue("Database",_instance->database);
}



int SQLCON::getPort() const
{

    return _instance->port;
}

void SQLCON::setPort(const int &value)
{

  _instance->port = value;
}

QString SQLCON::getPass() const
{

    return _instance->pass;
}

void SQLCON::setPass(const QString &value)
{

    _instance->pass = value;
}

QString SQLCON::getLogin() const
{

    return _instance->login;
}

void SQLCON::setLogin(const QString &value)
{

    _instance->login = value;
}

QString SQLCON::getIp() const
{

    return _instance->ip;
}

void SQLCON::setIp(const QString &value)
{

    _instance->ip = value;
}

QString SQLCON::getDatabase() const
{

    return _instance->database;
}

void SQLCON::setDatabase(const QString &value)
{

   _instance->database = value;
}
