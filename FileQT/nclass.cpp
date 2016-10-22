#include "nclass.h"
#include "qstring.h"
#include <QFile>
#include <QCoreApplication>
#include <QDebug>
#include <QLinkedList>
#include <QList>

NClass::NClass()
{

}

NClass::NClass(QString age, QString len, QString tr, QString coun )
{
   ncoun = coun;
   ntr = tr;
   nlen = len;
   nage = age;
}


QString NClass::getCountry() const
{
    return ncoun;
}

void NClass::setCountry(QString coun)
{
    ncoun = coun;
}

QString NClass::getTrack() const
{
    return ntr;
}

void NClass::setTrack(QString tr)
{
   ntr = tr;
}

QString NClass::getLength() const
{
    return nlen;
}

void NClass::setLength(QString len)
{
    nlen = len;
}

QString NClass::getAge() const
{
    return nage;
}

void NClass::setAge(QString age)
{
    nage = age;
}
