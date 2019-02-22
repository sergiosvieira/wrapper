#ifndef __MIDWXPANEL2__
#define __MIDWXPANEL2__

//#include <QtWidgets>
//#include <QString>
#include <iostream>
#include <memory>
//#include "mainwindow.h"

#include <wx/window.h>
#include <wx/panel.h>

#include "mid-window.h"
#include "mid-wx-window.h"
#include "mid-tab.h"
#include "mid-wx-tab.h"

using std::cout;

class MidWxTabPage : public wxPanel
{
    MidTab<MidWxTab>* parent = nullptr;

public:
    explicit MidWxTabPage(
        MidTab<MidWxTab>* parent = nullptr,
        int width = 600,
        int height = 800):
        wxPanel(
            parent->get(),
            wxID_ANY,
            wxDefaultPosition,
            wxSize(width, height)
        ),
        parent(parent)
    {
    }

    void show() {}
    ~MidWxTabPage() {}

    void setMidLayout(wxSizer* layout)
    {
        SetSizer(layout);
    }
};

#endif // __MIDWXPANEL2__
