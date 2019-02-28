#ifndef __MIDWXMENUBAR__
#define __MIDWXMENUBAR__

#include <wx/menu.h>
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxMenuBar: public wxMenuBar
{
private:
public:
    MidWxMenuBar
    (
        Id midID = 0,
        MidObject parent = nullptr
    ):
        //wxMenuBar (static_cast<wxWindow*>(parent.get()))
        wxMenuBar()
    {
    }

    void addMidMenu(MidObject object)
    {
        wxMenu *menu = static_cast<wxMenu*>(object.get());
        this->Append(menu, "test");
    }
};

#endif // __MIDWXMENUBAR__
