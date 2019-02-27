#ifndef __MID_WX_LINE__
#define __MID_WX_LINE__

#include <wx/statline.h>
#include "definitions.h"
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxLine: public wxStaticLine
{
public:
    MidWxLine
    (
        Id midID = 0,
        MidLineType type = MidLineType::VERTICAL,
        MidObject parent = nullptr
    ):
        wxStaticLine
        (
            static_cast<wxWindow*>(parent.get()),
            midID
        )
    {
        if (type == MidLineType::VERTICAL)
        {
            this->SetWindowStyle(wxLI_VERTICAL);
        }
        else if (type == MidLineType::HORIZONAL)
        {
            this->SetWindowStyle(wxLI_HORIZONTAL);
        }
    }
};

#endif /* __MID_WX_LINE__ */
