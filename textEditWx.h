#ifndef __TEXTEDITWX__
#define __TEXTEDITWX__

#include <iostream>
#include "mid-text-edit.h"
#include "mid-wx-text-edit.h"

#include "window.h"

using std::cout;

class TextEditWx: public MidTextEdit<MidWxTextEdit>
{
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    TextEditWx(MidWindow<MidWxWindow>* parent = nullptr,
           long long int midID = 0,
              const char *title = ""):
        MidTextEdit<MidWxTextEdit>(parent, midID, title),
        parent(parent) {}
};

#endif // __TEXTEDITWX__
