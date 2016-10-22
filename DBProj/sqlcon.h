#ifndef SQLCON_H
#define SQLCON_H

#include"QtSql/qsqldatabase.h"
#include <QtSql/qsqldriver.h>
#include"QSettings.h"
#include"QtSql/qsqlquery.h"
#include"QtSql/qsqltablemodel.h"
class SQLCON
{
public:
    static SQLCON * Instance();
    //SQLCON ChekClass();
    void connetct(QObject *parent);
    ~SQLCON();
  QSettings *setingCon;
    void loadSettings();
    void saveSettings();



    int getPort() const;
    void setPort(const int &value);

    QString getPass() const;
    void setPass(const QString &value);

    QString getLogin() const;
    void setLogin(const QString &value);

    QString getIp() const;
    void setIp(const QString &value);


    QString getDatabase() const;
    void setDatabase(const QString &value);
    void SetALL(const QString &ip, const int &port,
                const QString &login, const QString &pass,
                const QString &database);
    QSqlTableModel *model;
    QSqlDatabase db   ;
private:


    SQLCON() ;
    static SQLCON *_instance;
    QString ip;
    QString login;
    QString pass;
    int port;
    QString database;

};

#endif // SQLCON_H
