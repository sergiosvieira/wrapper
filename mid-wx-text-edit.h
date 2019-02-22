#ifndef __MIDWXTEXTEDIT__
#define __MIDWXTEXTEDIT__

#include <wx/textctrl.h>
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxTextEdit: public wxTextCtrl
{
private:
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    MidWxTextEdit(MidWindow<MidWxWindow>* parent = nullptr,
                 long long int midID = 0,
                 const char *text = ""):
        wxTextCtrl(
            (parent != nullptr) ? (wxWindow*) parent->get() : nullptr,
                midID,
                wxString(text)
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
    void setParent(MidWindow<MidWxWindow>* parent)
    {
        this->parent = parent;
    }
};

#endif // __MIDWXTEXTEDIT__
