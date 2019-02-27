#ifndef MIDQT5SPINBOX_H
#define MIDQT5SPINBOX_H

#include <wx/spinctrl.h>
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxSpinBox: public wxSpinCtrl
{
private:
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    MidWxSpinBox(MidWindow<MidWxWindow>* parent = nullptr,
                 long long int midID = 0,
                 int minValue = 0,
                  int maxValue = 100):
        wxSpinCtrl((parent != nullptr) ? parent->get() : nullptr)
    {
        SetRange(minValue, maxValue);
    }

    void setParent(MidWindow<MidWxWindow>* parent)
    {
        this->parent = parent;
    }

    int getMidValue()
    {
        return GetValue();
    }
};

#endif // MIDQT5SPINBOX_H
