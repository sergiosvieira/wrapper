#ifndef __MIDWXTEXTLABEL__
#define __MIDWXTEXTLABEL__

#include <wx/stattext.h>
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxTextLabel: public wxStaticText
{
private:
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    MidWxTextLabel(MidWindow<MidWxWindow>* parent = nullptr,
                 long long int midID = 0,
                 const char *text = ""):
        wxStaticText(
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

#endif // __MIDWXTEXTLABEL__
