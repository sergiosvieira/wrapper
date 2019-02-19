#ifndef __DATE_EDIT__
#define __DATE_EDIT__

#include <iostream>
#include "mid-date-edit.h"
#include "mid-qt5-date-edit.h"
#include "mid-qt5-date.h"
#include "mid-date-edit.h"
#include "mid-date.h"

class DateEdit: public MidDateEdit<MidQt5DateEdit>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    DateEdit(MidWindow<MidQt5Window>* parent = nullptr,
             long long int midID = 0,
             MidDate<MidQt5Date> date = {}):
        MidDateEdit<MidQt5DateEdit>(parent, midID, date),
        parent(parent) {}
};

#endif // __DATE_EDIT__
