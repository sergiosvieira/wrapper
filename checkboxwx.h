#ifndef __CHECKBOXWX__
#define __CHECKBOXWX__

#include <iostream>
#include "mid-check-box.h"
#include "mid-wx-check-box.h"

#include "window.h"

class CheckBoxWx: public MidCheckBox<MidWxCheckBox>
{
public:
    CheckBoxWx
    (
        Id midID = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidCheckBox<MidWxCheckBox>(midID, title, parent) {}
};

#endif // __CHECKBOXWX__
