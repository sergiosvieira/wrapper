#ifndef SPINBOX_H
#define SPINBOX_H

#include <iostream>
#include "mid-spin-box.h"
#include "mid-qt5-spin-box.h"

#include "window.h"

using std::cout;

class SpinBox: public MidSpinBox<MidQt5SpinBox>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    SpinBox(MidWindow<MidQt5Window>* parent = nullptr,
           long long int midID = 0,
            int minValue = 0,
             int maxValue = 100):
        MidSpinBox<MidQt5SpinBox>(parent, midID, minValue, maxValue), parent(parent) {}
};

#endif // SPINBOX_H
