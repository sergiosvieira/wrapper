#ifndef __TABPAGEWX__
#define __TABPAGEWX__

#include <iostream>
#include "mid-tabpage.h"
#include "mid-wx-tabpage.h"

class TabPageWx: public MidTabPage<MidWxTabPage>
{
public:
    TabPageWx(
        Id id = 0,
        int width = 600,
        int height = 800,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidTabPage<MidWxTabPage>(id, width, height, title, parent)
        {}
};

#endif // __TABPAGEWX__
