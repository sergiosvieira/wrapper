#ifndef __MIDWXTEXTEDIT__
#define __MIDWXTEXTEDIT__

#include <wx/textctrl.h>
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxTextEdit: public wxTextCtrl
{
public:
    MidWxTextEdit
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        wxTextCtrl(
            static_cast<wxWindow*>(parent.get()),
                id,
                wxString(title.c_str())
        )
    {
        //this->SetWindowStyle(wxTE_MULTILINE | wxHSCROLL);
        //this->SetWindowStyle(wxTE_MULTILINE | wxTE_RICH2 | wxTE_NOHIDESEL);
        this->SetWindowStyle(wxTE_MULTILINE);
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

#endif // __MIDWXTEXTEDIT__
