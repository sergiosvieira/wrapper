#ifndef SPINBOX_H
#define SPINBOX_H

#include <iostream>
#include "mid-spin-box.h"
#include "mid-wx-spin-box.h"

#include "window.h"

using std::cout;

class SpinBoxWx: public MidSpinBox<MidWxSpinBox>
{
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    SpinBoxWx(MidWindow<MidWxWindow>* parent = nullptr,
           long long int midID = 0,
            int minValue = 0,
             int maxValue = 100):
        MidSpinBox<MidWxSpinBox>(parent, midID, minValue, maxValue),
        parent(parent) {}
};

#endif // SPINBOX_H
