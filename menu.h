#ifndef __MENU__
#define __MENU__

#include <iostream>
#include "mid-menu.h"
#include "mid-qt5-menu.h"

#include "window.h"

using std::cout;

class Menu: public MidMenu<MidQt5Menu>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    Menu(MidWindow<MidQt5Window>* parent = nullptr,
           long long int midID = 0,
              const char *title = ""):
        MidMenu<MidQt5Menu>(parent, midID, title), parent(parent) {}
};

#endif // __MENU__
