#ifndef __MIDWXACTION__
#define __MIDWXACTION__

#include <wx/menuitem.h>
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxAction: public wxMenuItem
{
public:
    MidWxAction
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        wxMenuItem (
            static_cast<wxMenu*>(parent.get()),
            id,
            title.c_str())
    {
    }

    void setActionText(const std::string& caption)
    {
        this->SetItemLabel(caption);
    }
};

#endif // __MIDWXACTION__
