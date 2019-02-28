#ifndef __MIDWXPANEL__
#define __MIDWXPANEL__

#include <iostream>
#include <memory>

#include <wx/window.h>

using std::cout;

class MidWxPanel : public wxPanel
{
public:
    explicit MidWxPanel
    (
        int width = 600,
        int height = 800,
        MidObject parent = nullptr
    ):
        wxPanel(
            static_cast<wxWindow*>(parent.get()),
            wxID_ANY,
            wxDefaultPosition,
            wxSize(width, height))
    {
    }

    void show() {}
    ~MidWxPanel() {}

    void setMidLayout(MidObject layout)
    {
        SetSizer(static_cast<wxSizer*>(layout.get()));
    }
};

#endif // __MIDWXPANEL__
