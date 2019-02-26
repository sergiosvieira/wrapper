#ifndef MIDDATEEDIT_H
#define MIDDATEEDIT_H

#include "mid-object.h"
#include "mid-window.h"

#include "mid-date.h"

template <class T>
class MidDateEdit : public MidObject
{
public:
    MidDateEdit(Id id = 0,
                MidObject date = nullptr,
                MidObject parent = nullptr):
        MidObject(new T{id, date, parent}){}
};

#endif // MIDDATEEDIT_H
