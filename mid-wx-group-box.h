#ifndef __MID_WX_GROUP_BOX__
#define __MID_WX_GROUP_BOX__

#include <wx/statbox.h>
#include "mid-window.h"
#include "mid-wx-window.h"


class MidWxGroupBox: public wxStaticBox
{
private:
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    MidWxGroupBox(MidWindow<MidWxWindow>* parent = nullptr,
                      long long int midID = 0,
                      const char *title = ""):
        wxStaticBox((parent != nullptr) ? (wxWindow*) parent->get() : nullptr,
            midID,
            title){}
    void setMidLayout(wxSizer* layout)
    {
        this->SetSizer(layout);
    }
};


#endif // __MID_WX_GROUP_BOX__
