#ifndef __MENUBAR__
#define __MENUBAR__

#include <iostream>
#include "mid-menu-bar.h"
#include "mid-qt5-menu-bar.h"

#include "window.h"

using std::cout;

class MenuBar: public MidMenuBar<MidQt5MenuBar>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MenuBar(MidWindow<MidQt5Window>* parent = nullptr,
           long long int midID = 0):
        MidMenuBar<MidQt5MenuBar>(parent, midID), parent(parent) {}
};

#endif // __MENUBAR__
