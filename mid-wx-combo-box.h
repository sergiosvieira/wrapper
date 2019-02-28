#ifndef __MID_WX_COMBO_BOX__
#define __MID_WX_COMBO_BOX__

#include <wx/combobox.h>
#include "mid-window.h"
#include "mid-wx-window.h"


class MidWxComboBox: public wxComboBox
{
public:
    MidWxComboBox
    (
        Id id = 0,
        MidObject parent = nullptr
    ):
        wxComboBox(
            static_cast<wxWindow*>(parent.get()),
            id){}
    void addMidItem(const std::string &item)
    {
        this->Append(wxString(item.c_str()));
        this->SetSelection(0);
    }
};


#endif // __MID_WX_COMBO_BOX__
