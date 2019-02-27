#ifndef MIDQT5SPINBOX_H
#define MIDQT5SPINBOX_H

#include <wx/spinctrl.h>
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxSpinBox: public wxSpinCtrl
{
public:
    MidWxSpinBox
    (
        Id id = 0,
        int minValue = 0,
        int maxValue = 100,
        MidObject parent = nullptr
    ):
        wxSpinCtrl(static_cast<wxWindow*>(parent.get()))
    {
        SetRange(minValue, maxValue);
    }

    int getMidValue()
    {
        return GetValue();
    }
};

#endif // MIDQT5SPINBOX_H
