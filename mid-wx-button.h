#ifndef __MID_WX_BUTTON__
#define __MID_WX_BUTTON__

#include <wx/button.h>
#include "IDsdefinitions.h"

class MidWxWindow;

class MidWxButton: public wxButton
{
    MidWindow<MidWxWindow> *parent = nullptr;
public:
    MidWxButton(long long int midID, MidWindow<MidWxWindow> *parent = nullptr,
                const char *title = ""):
        wxButton(parent != nullptr? parent->get(): nullptr,
            //BUTTON_Hello,
            //wxID_ANY,
            midID,
            title) {}
    void setText(const char *title)
    {
        this->SetLabelText(title);
    }
    void setParent(MidWindow<MidWxWindow> *parent)
    {
        this->parent = parent;
    }
};

#endif /* __MID_WX_BUTTON__ */ 
