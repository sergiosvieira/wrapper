#ifndef __MID_WX_BUTTON__
#define __MID_WX_BUTTON__

#include <wx/button.h>
#include "IDsdefinitions.h"

class MidWxWindow;

class MidWxButton: public wxButton
{
public:
    MidWxButton(Id id = 0,
                const std::string &title = "",
                MidObject parent = nullptr):
        wxButton(static_cast<wxWindow*>(parent.get()),
            id,
            title.c_str()) {}

    void setText(const char *title)
    {
        this->SetLabelText(title);
    }
};

#endif /* __MID_WX_BUTTON__ */ 
