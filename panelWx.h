#ifndef __PANELWX__
#define __PANELWX__

#include <iostream>
#include "mid-panel.h"
#include "mid-wx-panel.h"

class PanelWx: public MidPanel<MidWxPanel>
{
public:
    PanelWx(
        int width = 600,
        int height = 800,
        MidObject parent = nullptr
    ):
            MidPanel<MidWxPanel>(width, height, parent)
        {}
};

#endif // __PANELWX__
