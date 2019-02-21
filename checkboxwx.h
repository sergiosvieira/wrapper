#ifndef __CHECKBOXWX__
#define __CHECKBOXWX__

#include <iostream>
#include "mid-check-box.h"
#include "mid-wx-check-box.h"

#include "window.h"

using std::cout;

class CheckBoxWx: public MidCheckBox<MidWxCheckBox>
{
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    CheckBoxWx(MidWindow<MidWxWindow>* parent = nullptr,
           long long int midID = 0,
              const char *title = ""):
        MidCheckBox<MidWxCheckBox>(parent, midID, title),
        parent(parent) {}
};

#endif // __CHECKBOXWX__
