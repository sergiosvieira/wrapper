#ifndef __MID_WX_CHECK_BOX__
#define __MID_WX_CHECK_BOX__

#include <wx/checkbox.h>
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxCheckBox: public wxCheckBox
{
public:
    MidWxCheckBox
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        wxCheckBox(
            static_cast<wxWindow*>(parent.get()),
            id,
            wxString(title.c_str()))
    {
    }

    void setMidText(const char *caption)
    {
        SetLabel(wxString(caption));
    }
};

#endif /* __MID_WX_CHECK_BOX__ */
