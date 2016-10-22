#ifndef SHOWTATA_H
#define SHOWTATA_H

#include <QWidget>
//#include<login.h>
//#include<ui_login.h>
#include <QSqlTableModel>
#include <QSqlQueryModel>
namespace Ui {
class showtata;
}

class showtata : public QWidget
{
    Q_OBJECT

public:
    explicit showtata(QWidget *parent = 0);
    ~showtata();
// Login* ShowMain;


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::showtata *ui;
//    QSqlTableModel* model;
    QSqlQueryModel* model1;
};

#endif // SHOWTATA_H
