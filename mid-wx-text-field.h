#ifndef __MIDWXTEXTFIELD__
#define __MIDWXTEXTFIELD__

#include <wx/textctrl.h>
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxTextField: public wxTextCtrl
{
public:
    MidWxTextField
    (
        Id id = 0,
        const std::string &text = "",
        MidObject parent = nullptr
    ):
        wxTextCtrl(
            static_cast<wxWindow*>(parent.get()),
                id,
                wxString(text)
        )
    {
    }

    std::string getText()
    {
        return GetLabelText().ToStdString();
    }

    void setMidText(const std::string& text)
    {
        SetLabel(text.c_str());
    }
};

#endif // __MIDWXTEXTFIELD__
