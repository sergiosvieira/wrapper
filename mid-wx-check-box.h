#ifndef __MID_WX_CHECK_BOX__
#define __MID_WX_CHECK_BOX__

#include <wx/checkbox.h>
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxCheckBox: public wxCheckBox
{
private:
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    MidWxCheckBox(MidWindow<MidWxWindow>* parent = nullptr,
                 long long int midID = 0,
                 const char *title = ""):
        wxCheckBox(
        (parent != nullptr) ? (wxWindow*) parent->get() : nullptr,
            midID,
            wxString(title))
    {
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

#endif /* __MID_WX_CHECK_BOX__ */
