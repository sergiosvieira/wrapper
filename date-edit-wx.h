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
public:
    DateEditWx
    (
        Id id = 0,
        MidDate<MidWxDate> date = {},
        MidObject parent = nullptr
    ):
        MidDateEdit<MidWxDateEdit>(id, date, parent) {}
};

#endif // __DATE_EDIT_WX__
