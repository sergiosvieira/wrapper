#ifndef CHECKBOX_H
#define CHECKBOX_H

#include <iostream>
#include "mid-check-box.h"
#include "mid-qt5-check-box.h"

#include "window.h"

using std::cout;

class Checkbox: public MidCheckBox<MidQt5CheckBox>
{
    MidObject* parent = nullptr;
public:
//    Checkbox(MidObject* parent = nullptr,
//           long long int midID = 0,
//              const char *title = ""):
//        MidCheckBox<MidQt5CheckBox>(parent, midID, title),
//        parent(parent) {}
};

#endif // CHECKBOX_H
