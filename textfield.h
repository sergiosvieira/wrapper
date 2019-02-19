#ifndef TEXTFIELD_H
#define TEXTFIELD_H

#include <iostream>
#include "mid-text-field.h"
#include "mid-qt5-text-field.h"

#include "window.h"

using std::cout;

class TextField: public MidTextField<MidQt5TextField>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    TextField(MidWindow<MidQt5Window>* parent = nullptr,
           long long int midID = 0,
              const char *title = ""):
        MidTextField<MidQt5TextField>(parent, midID, title),
        parent(parent) {}
};

#endif // TEXTFIELD_H
