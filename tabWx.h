#ifndef __TABWX__
#define __TABWX__

#include <iostream>
#include "mid-tab.h"
#include "mid-wx-tab.h"

#include "window.h"

class TabWx: public MidTab<MidWxTab>
{
public:
    TabWx
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidTab<MidWxTab>(id, title, parent) {}
};

#endif // __TABWX__
