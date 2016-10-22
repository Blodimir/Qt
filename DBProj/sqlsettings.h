#ifndef SQLSETTINGS_H
#define SQLSETTINGS_H

#include <QDialog>
#include "sqlcon.h"
namespace Ui {
class sqlSettings;
}

class sqlSettings : public QDialog
{
    Q_OBJECT

public:
    explicit sqlSettings(QWidget *parent = 0);
    ~sqlSettings();
    bool Chek_ip(QString ip);
    SQLCON *ptr;
    void setBeginSeting();
private slots:
 void saves();
private:
    Ui::sqlSettings *ui;
};

#endif // SQLSETTINGS_H
