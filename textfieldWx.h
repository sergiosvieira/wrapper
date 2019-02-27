#ifndef TEXTFIELDWX_H
#define TEXTFIELDWX_H

#include <iostream>
#include "mid-text-field.h"
#include "mid-wx-text-field.h"

#include "window.h"

using std::cout;

class TextFieldWx: public MidTextField<MidWxTextField>
{
public:
    TextFieldWx(Id id = 0,
        const std::string &text = "",
        MidObject parent = nullptr):
        MidTextField<MidWxTextField>(id, text, parent)
        {}
};

#endif // TEXTFIELDWX_H
