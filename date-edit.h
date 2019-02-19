#ifndef DATEEDIT_H
#define DATEEDIT_H

#include <iostream>
#include "mid-date-edit.h"
#include "mid-qt5-date-edit.h"
#include "mid-qt5-date.h"
#include "mid-date-edit.h"
#include "mid-date.h"

#include "window.h"

using std::cout;

class DateEdit: public MidDateEdit<MidQt5DateEdit>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    DateEdit(MidWindow<MidQt5Window>* parent = nullptr,
           long long int midID = 0,
            MidDate<MidQt5Date> date = MidDate<MidQt5Date>()):
        MidDateEdit<MidQt5DateEdit>(parent, midID, date), parent(parent) {}
};

#endif // DATEEDIT_H
