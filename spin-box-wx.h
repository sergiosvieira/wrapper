#ifndef SPINBOX_H
#define SPINBOX_H

#include <iostream>
#include "mid-spin-box.h"
#include "mid-wx-spin-box.h"

#include "window.h"

class SpinBoxWx: public MidSpinBox<MidWxSpinBox>
{
public:
    SpinBoxWx
    (
        Id id = 0,
        int minValue = 0,
        int maxValue = 100,
        MidObject parent = nullptr
    ):
        MidSpinBox<MidWxSpinBox>(id, minValue, maxValue, parent)
        {}
};

#endif // SPINBOX_H
