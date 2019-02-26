#ifndef __MENU__
#define __MENU__

#include <iostream>
#include "mid-menu.h"
#include "mid-qt5-menu.h"

#include "window.h"

using std::cout;

class Menu: public MidMenu<MidQt5Menu>
{
public:
    Menu
    (

        long long int midID = 0,
        const char *title = "",
        MidObject parent = nullptr
    ):
        MidMenu<MidQt5Menu>(midID, title, parent) {}
};

#endif // __MENU__
