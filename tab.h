#ifndef __TAB_H__
#define __TAB_H__

#include <iostream>
#include "mid-tab.h"
#include "mid-qt5-tab.h"

#include "window.h"

using std::cout;

class Tab: public MidTab<MidQt5Tab>
{
public:
    Tab(Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr):
        MidTab<MidQt5Tab>(id, title, parent){}
};

#endif // __TAB_H__
