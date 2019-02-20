#ifndef MIDQT5DATE_H
#define MIDQT5DATE_H

#include <QDate>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5Date: public QDate
{
public:
    MidQt5Date(int day = 1,
               int month = 1,
               int year = 1400):
        QDate (year, month, day){}
    void setDay(int day)
    {
        setDate(day, month(), year());
    }
    void setMonth(int month)
    {
        setDate(day(), month, year());
    }
    void setYear(int year)
    {
        setDate(day(), month(), year);
    }
};

#endif // MIDQT5DATE_H
