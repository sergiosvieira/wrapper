#ifndef __MID_WX_GROUP_BOX__
#define __MID_WX_GROUP_BOX__

#include <wx/statbox.h>
#include "mid-window.h"
#include "mid-wx-window.h"


class MidWxGroupBox: public wxStaticBox
{
public:
    MidWxGroupBox
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        wxStaticBox(static_cast<wxWindow*>(parent.get()),
            id,
            title){}
    void setMidLayout(MidObject layout)
    {
        this->SetSizer(static_cast<wxSizer*>(layout.get()));
    }
};


#endif // __MID_WX_GROUP_BOX__
