#ifndef __TABWX__
#define __TABWX__

#include <iostream>
#include "mid-tab.h"
#include "mid-wx-tab.h"

#include "window.h"

using std::cout;

class TabWx: public MidTab<MidWxTab>
{
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    TabWx(MidWindow<MidWxWindow>* parent = nullptr,
           long long int midID = 0):
        MidTab<MidWxTab>(parent, midID), parent(parent) {}
};

#endif // __TABWX__
