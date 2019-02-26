#ifndef TEXTFIELD_H
#define TEXTFIELD_H

#include <iostream>
#include "mid-text-field.h"
#include "mid-qt5-text-field.h"

#include "window.h"

using std::cout;

class TextField: public MidTextField<MidQt5TextField>
{
    MidObject parent = nullptr;
public:
    TextField(Id id = 0,
              const std::string &text = "",
              MidObject parent = nullptr):
        MidTextField<MidQt5TextField>(id, text, parent){}
};

#endif // TEXTFIELD_H
