#ifndef __PANELWX__
#define __PANELWX__

#include <iostream>
#include "mid-panel.h"
#include "mid-wx-panel.h"

class PanelWx: public MidPanel<MidWxPanel>
{
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    PanelWx(
        MidWindow<MidWxWindow>* parent = nullptr,
        int width = 600,
        int height = 800
    ):
            MidPanel<MidWxPanel>(parent, width, height),
        parent(parent)
        {}
};

#endif // __PANELWX__
