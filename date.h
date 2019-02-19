#ifndef DATE_H
#define DATE_H

#include "mid-date.h"
#include "mid-qt5-date.h"

#include "window.h"

class Date: public MidDate<MidQt5Date>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    Date(MidWindow<MidQt5Window>* parent = nullptr,
           long long int midID = 0,
             int day = 1,
             int month = 1,
             int year = 1400):
        MidDate<MidQt5Date>(parent, midID, day, month, year),
        parent(parent) {}
};

#endif // DATE_H
