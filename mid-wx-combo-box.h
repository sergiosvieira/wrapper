#ifndef __MID_WX_COMBO_BOX__
#define __MID_WX_COMBO_BOX__

#include <wx/combobox.h>
#include "mid-window.h"
#include "mid-wx-window.h"


class MidWxComboBox: public wxComboBox
{
private:
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    MidWxComboBox(MidWindow<MidWxWindow>* parent = nullptr,
                   long long int midID = 0):
        wxComboBox(
        (parent != nullptr) ? (wxWindow*) parent->get() : nullptr,
            midID){}
    void addMidItem(const char* item)
    {
        this->Append(wxString(item));
        this->SetSelection(0);
    }
};


#endif // __MID_WX_COMBO_BOX__
