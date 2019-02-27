#ifndef TEXTFIELDWX_H
#define TEXTFIELDWX_H

#include <iostream>
#include "mid-text-field.h"
#include "mid-wx-text-field.h"

#include "window.h"

using std::cout;

class TextFieldWx: public MidTextField<MidWxTextField>
{
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    TextFieldWx(MidWindow<MidWxWindow>* parent = nullptr,
           long long int midID = 0,
              const char *title = ""):
        MidTextField<MidWxTextField>(parent, midID, title),
        parent(parent) {}
};

#endif // TEXTFIELDWX_H
