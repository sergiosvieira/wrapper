#ifndef __TAB_H__
#define __TAB_H__

#include <iostream>
#include "mid-tab.h"
#include "mid-qt5-tab.h"

#include "window.h"

using std::cout;

class Tab: public MidTab<MidQt5Tab>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    Tab(MidWindow<MidQt5Window>* parent = nullptr,
           long long int midID = 0):
        MidTab<MidQt5Tab>(parent, midID), parent(parent) {}
};

#endif // __TAB_H__
