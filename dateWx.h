#ifndef __DATEWX__
#define __DATEWX__

#include "mid-date.h"
#include "mid-wx-date.h"

#include "window.h"

class DateWx: public MidDate<MidWxDate>
{
public:
    DateWx(int day = 1,
        int month = 1,
        int year = 1400):
        MidDate<MidWxDate>(day, month, year)
    {}
};

#endif // __DATEWX__
