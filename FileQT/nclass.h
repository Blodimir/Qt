#ifndef NCLASS_H
#define NCLASS_H
#include "qstring.h"

class NClass
{
private:
    int nid;
    QString ncoun;
    QString ntr;
    QString nlen;
    QString nage;
public:
    explicit NClass();
    explicit NClass(QString, QString, QString, QString);

        QString getCountry() const;
        void setCountry(QString);

        QString getTrack() const;
        void setTrack(QString);

        QString getLength() const;
        void setLength(QString);

        QString getAge() const;
        void setAge(QString);


};

#endif // NCLASS_H
