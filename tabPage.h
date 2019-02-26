//MidWindow<MidQt5Window> *base1 = new MidWindow<MidQt5Window>(0,0,"h1");

#ifndef __TABPAGE__
#define __TABPAGE__

#include <iostream>
#include "mid-window.h"
#include "mid-button.h"
#include "mid-qt5-button.h"

#include "window.h"

using std::cout;

class TabPage: public MidWindow<MidQt5Window>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    TabPage(MidWindow<MidQt5Window>* parent = nullptr,
           long long int midID = 0,
              const char *title = ""):
        MidWindow<MidQt5Window>(0,0, title), parent(parent) {}
};

#endif // __TABPAGE__
