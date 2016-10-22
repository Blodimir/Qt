#ifndef TBM_H
#define TBM_H

#include <QAbstractTableModel>
#include <qvariant.h>
#include <QLinkedList>
class TBM : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit TBM(QObject *parent = 0);
    QLinkedList<QString> list;
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    // Header:
//    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
//    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
//    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

//    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:

};

#endif // TBM_H
