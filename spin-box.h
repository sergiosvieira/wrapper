#ifndef SPINBOX_H
#define SPINBOX_H

#include <iostream>
#include "mid-spin-box.h"
#include "mid-qt5-spin-box.h"

#include "window.h"

class SpinBox: public MidSpinBox<MidQt5SpinBox>
{
public:
    SpinBox(Id id = 0,
            int minValue = 0,
            int maxValue = 100,
            MidObject parent = nullptr):
        MidSpinBox<MidQt5SpinBox>(id, minValue, maxValue, parent){}
};

#endif // SPINBOX_H
