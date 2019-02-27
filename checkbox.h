#ifndef CHECKBOX_H
#define CHECKBOX_H

#include <iostream>
#include "mid-check-box.h"
#include "mid-qt5-check-box.h"

#include "window.h"

using std::cout;

class CheckBox: public MidCheckBox<MidQt5CheckBox>
{
public:
    CheckBox
    (
        long long int midID = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidCheckBox<MidQt5CheckBox>(midID, title, parent){}
};

#endif // CHECKBOX_H
