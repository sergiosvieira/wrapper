#ifndef __MENUWX__
#define __MENUWX__

#include <iostream>
#include "mid-menu.h"
#include "mid-wx-menu.h"

#include "window.h"

class MenuWx: public MidMenu<MidWxMenu>
{
public:
    MenuWx
    (
        Id midID = 0,
        const char *title = "",
        MidObject parent = nullptr
    ):
        MidMenu<MidWxMenu>(midID, title, parent) {}
};

#endif // __MENU__
