#ifndef __DATE_EDIT_WX__
#define __DATE_EDIT_WX__

#include <iostream>
#include "mid-date-edit.h"
#include "mid-wx-date-edit.h"
#include "mid-wx-date.h"
#include "mid-date-edit.h"
#include "mid-date.h"

class DateEditWx: public MidDateEdit<MidWxDateEdit>
{
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    DateEditWx(MidWindow<MidWxWindow>* parent = nullptr,
             long long int midID = 0,
             MidDate<MidWxDate> date = {}):
        MidDateEdit<MidWxDateEdit>(parent, midID, date),
        parent(parent) {}
};

#endif // __DATE_EDIT_WX__
