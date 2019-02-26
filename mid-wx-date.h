#ifndef MIDWXDATE_H
#define MIDWXDATE_H

#include <wx/datetime.h>
#include "mid-wx-window.h"

#include "mid-window.h"
#include <iostream>
#include <vector>

std::vector<wxDateTime::Month> vecIntToMonth =
{
    wxDateTime::Month::Jan,
    wxDateTime::Month::Feb,
    wxDateTime::Month::Mar,
    wxDateTime::Month::Apr,
    wxDateTime::Month::May,
    wxDateTime::Month::Jun,
    wxDateTime::Month::Jul,
    wxDateTime::Month::Aug,
    wxDateTime::Month::Sep,
    wxDateTime::Month::Oct,
    wxDateTime::Month::Nov,
    wxDateTime::Month::Dec
};

class MidWxDate: public wxDateTime
{
public:
    MidWxDate(int day = 1,
               int month = 1,
               int year = 1400):
        wxDateTime(day, vecIntToMonth[month-1], year){}
        //wxDateTime(day, Month::Jan, year) {}
    void setMidDay(int day)
    {
        //setDate(day, month(), year());
        SetDay(day);
    }
    void setMidMonth(int month)
    {
        //setDate(day(), month, year());
        SetMonth(vecIntToMonth[month-1]);
    }
    void setMidYear(int year)
    {
        //setDate(day(), month(), year);
        SetYear(year);
    }
};

#endif // MIDWXDATE_H
