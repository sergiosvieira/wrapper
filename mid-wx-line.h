#ifndef __MID_WX_LINE__
#define __MID_WX_LINE__

#include <wx/statline.h>
#include "definitions.h"
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxLine: public wxStaticLine
{
private:
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    MidWxLine(MidWindow<MidWxWindow>* parent = nullptr,
                 long long int midID = 0,
                 MidLineType type = MidLineType::VERTICAL):
        wxStaticLine(
        (parent != nullptr) ? parent->get() : nullptr,
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

    void setParent(MidWindow<MidWxWindow>* parent)
    {
        this->parent = parent;
    }
};

#endif /* __MID_WX_LINE__ */
