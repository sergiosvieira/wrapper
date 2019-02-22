#ifndef __MIDWXPANEL__
#define __MIDWXPANEL__

//#include <QtWidgets>
//#include <QString>
#include <iostream>
#include <memory>
//#include "mainwindow.h"

#include <wx/window.h>

using std::cout;

class MidWxPanel: public wxWindow
{
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    explicit MidWxPanel(
        MidWindow<MidWxWindow>* parent = nullptr,
        int width = 600,
        int height = 800):
        wxWindow(parent->get(), wxID_ANY, wxDefaultPosition,
            wxSize(width, height))
    {
        //this->SetParent(parent);
        //this->resize(width, height);
    }

    void show() {}
    ~MidWxPanel() {}

    void setMidLayout(wxSizer* layout)
    {
        //setLayout(layout);
        SetSizer(layout);
    }
};

#endif // __MIDWXPANEL__
