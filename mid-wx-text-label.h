#ifndef __MIDWXTEXTLABEL__
#define __MIDWXTEXTLABEL__

#include <wx/stattext.h>
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxTextLabel: public wxStaticText
{
public:
    MidWxTextLabel
    (
        Id id = 0,
        const std::string &text = "",
        MidObject parent = nullptr
    ):
        wxStaticText(
            static_cast<wxWindow*>(parent.get()),
                id,
                wxString(text)
        )
    {
    }

    const char * getText()
    {
        return GetLabelText().ToStdString().c_str();
    }

    void setMidText(const char *caption)
    {
        SetLabel(wxString(caption));
    }
};

#endif // __MIDWXTEXTLABEL__
