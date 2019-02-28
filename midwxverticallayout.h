#ifndef MIDWXVERTICALLAYOUT_H
#define MIDWXVERTICALLAYOUT_H

#include "mid-object.h"
#include <wx/sizer.h>

class MidWxVerticalLayout : public wxBoxSizer
{
public:
    MidWxVerticalLayout() :
        wxBoxSizer(wxVERTICAL) {}
    void add(MidObject object)
    {
        wxWindow* widget = static_cast<wxWindow*>(object.get());
        if (widget != nullptr)
            Add(widget, 1, wxEXPAND | wxALL, 5);  //wxEXPAND | wxexpand);
            //Add(widget);
    }
    void addMidLayout(MidObject object)
    {
        wxSizer* sizer = static_cast<wxSizer*>(object.get());
        if (sizer != nullptr)
            //Add(sizer);
            Add(sizer, 1, wxEXPAND | wxALL, 5);
    }
    ~MidWxVerticalLayout() {}
};

#endif // MIDWXVERTICALLAYOUT_H
