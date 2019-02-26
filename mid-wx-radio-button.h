#ifndef __MID_WX_RADIO_BUTTON__
#define __MID_WX_RADIO_BUTTON__

#include <wx/radiobut.h>
#include "mid-window.h"
#include "mid-wx-window.h"

class MidWxRadioButton: public wxRadioButton
{
private:
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    MidWxRadioButton(MidWindow<MidWxWindow>* parent = nullptr,
                      long long int midID = 0,
                      const char *title = ""):
        wxRadioButton(
        (parent != nullptr) ? (wxWindow*) parent->get() : nullptr,
            midID,
            title
        ){}
};


#endif // __MID_WX_RADIO_BUTTON__
