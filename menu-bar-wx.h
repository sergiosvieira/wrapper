#ifndef __MENUBAR__
#define __MENUBAR__

#include <iostream>
#include "mid-menu-bar.h"
#include "mid-wx-menu-bar.h"

#include "window.h"

using std::cout;

class MenuBarWx: public MidMenuBar<MidWxMenuBar>
{
public:
    MenuBarWx
    (
            Id id = 0,
            MidObject parent = nullptr
    ):
        MidMenuBar<MidWxMenuBar>(id, parent) {}
};

#endif // __MENUBAR__
