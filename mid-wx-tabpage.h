#ifndef __MIDWXPANEL2__
#define __MIDWXPANEL2__

#include <iostream>
#include <memory>

#include <wx/window.h>
#include <wx/panel.h>

#include "mid-window.h"
#include "mid-wx-window.h"
#include "mid-tab.h"
#include "mid-wx-tab.h"

class MidWxTabPage : public wxPanel
{
public:
    explicit MidWxTabPage(
        Id id = 0,
        int width = 600,
        int height = 800,
        const std::string &title = "",
        MidObject parent = nullptr):
        wxPanel(
            static_cast<wxWindow*>(parent.get()),
            wxID_ANY,
            wxDefaultPosition,
            wxSize(width, height)
        )
    {
    }

    void show() {}
    ~MidWxTabPage() {}

    void setMidLayout(MidObject layout)
    {
        wxSizer* sizer = static_cast<wxSizer*>(layout.get());
        SetSizer(sizer);
    }
};

#endif // __MIDWXPANEL2__
