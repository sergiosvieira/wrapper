#ifndef __TEXTLABELWX__
#define __TEXTLABELWX__

#include <iostream>
#include "mid-text-label.h"
#include "mid-wx-text-label.h"

#include "window.h"

using std::cout;

class TextLabelWx: public MidTextLabel<MidWxTextLabel>
{
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    TextLabelWx(MidWindow<MidWxWindow>* parent = nullptr,
           long long int midID = 0,
              const char *title = ""):
        MidTextLabel<MidWxTextLabel>(parent, midID, title),
        parent(parent) {}
};

#endif // __TEXTLABELWX__
