#ifndef __MID_WX_RADIO_BUTTON__
#define __MID_WX_RADIO_BUTTON__

#include <wx/radiobut.h>
#include "mid-window.h"
#include "mid-wx-window.h"

class MidWxRadioButton: public wxRadioButton
{
public:
    MidWxRadioButton
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        wxRadioButton(
            static_cast<wxWindow*>(parent.get()),
            id,
            title.c_str()
        ){}
};


#endif // __MID_WX_RADIO_BUTTON__
