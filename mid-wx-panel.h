#ifndef __MIDWXPANEL__
#define __MIDWXPANEL__

//#include <QtWidgets>
//#include <QString>
#include <iostream>
#include <memory>
//#include "mainwindow.h"

#include <wx/window.h>

using std::cout;

class MidWxPanel : public wxPanel
{
    MidWindow<MidWxWindow>* parent = nullptr;

    //wxWindow *parentTest = nullptr;
public:
    explicit MidWxPanel(
        MidWindow<MidWxWindow>* parent = nullptr,
        int width = 600,
        int height = 800):
        wxPanel((parent->get()), wxID_ANY, wxDefaultPosition,
            wxSize(width, height)), parent(parent)
    {
    }

    void show() {}
    ~MidWxPanel() {}

    void setMidLayout(wxSizer* layout)
    {
        SetSizer(layout);
    }
};

#endif // __MIDWXPANEL__
