#ifndef __MIDWXTEXTFIELD__
#define __MIDWXTEXTFIELD__

#include <wx/textctrl.h>
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxTextField: public wxTextCtrl
{
private:
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    MidWxTextField(MidWindow<MidWxWindow>* parent = nullptr,
                 long long int midID = 0,
                 const char *text = ""):
        wxTextCtrl(
            (parent != nullptr) ? (wxWindow*) parent->get() : nullptr,
                midID,
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
    void setParent(MidWindow<MidWxWindow>* parent)
    {
        this->parent = parent;
    }
};

#endif // __MIDWXTEXTFIELD__
