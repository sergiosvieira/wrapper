#ifndef __TABPAGEWX__
#define __TABPAGEWX__

#include <iostream>
#include "mid-tabpage.h"
#include "mid-wx-tabpage.h"

class TabPageWx: public MidTabPage<MidWxTabPage>
{
    MidTab<MidWxTab>* parent = nullptr;
public:
    TabPageWx(
        MidTab<MidWxTab>* parent = nullptr,
        int width = 600,
        int height = 800
    ):
        MidTabPage<MidWxTabPage>(parent, width, height),
        parent(parent)
        {}
};

#endif // __TABPAGEWX__
