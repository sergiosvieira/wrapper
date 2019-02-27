#ifndef __MID_QT5_HORIZONTALLAYOUT__
#define __MID_QT5_HORIZONTALLAYOUT__

#include "mid-object.h"
#include <wx/sizer.h>

class MidWxHorizontalLayout: public wxBoxSizer
{
public:
    MidWxHorizontalLayout():
        wxBoxSizer(wxHORIZONTAL) {}
    void add(MidObject *object)
    {
        wxWindow* widget = static_cast<wxWindow*>(object->get());
        if (widget != nullptr)
            Add(widget, 1, wxEXPAND | wxALL, 5);
            //Add(widget);
    }
    void addMidLayout(MidObject *object)
    {
        wxSizer* sizer = static_cast<wxSizer*>(object->get());
        if (sizer != nullptr)
            //Add(sizer);
            Add(sizer, 1, wxEXPAND | wxALL, 5);
    }
    ~MidWxHorizontalLayout() {}
};


#endif // __MID_QT5_HORIZONTALLAYOUT__
