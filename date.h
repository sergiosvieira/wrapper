#ifndef DATE_H
#define DATE_H

#include "mid-date.h"
#include "mid-qt5-date.h"

#include "window.h"

class Date: public MidDate<MidQt5Date>
{
public:
    Date(int day = 1,
        int month = 1,
        int year = 1400):
        MidDate<MidQt5Date>(day, month, year){}
};

#endif // DATE_H
