#ifndef __MID_WX_WINDOW__
#define __MID_WX_WINDOW__

#include <wx/frame.h>

class MidWxWindow: public wxFrame
{
public:
    MidWxWindow(int width,
                int height,
                const char *title,
                wxFrame *parent = nullptr):
        wxFrame(parent, wxID_ANY, title)
    {
        this->SetSize(0, 20, width, height);
        // cout << "MidWxWindow::MidWxWindow()\n";
        // info();
    }
    MidWxWindow(MidWxWindow const& other)
    {
        // other.info();
        // wxSize size = other.GetSize();
        // this->SetSize(0, 20, size.GetWidth(), size.GetHeight());
        // this->SetTitle(other.GetTitle());
        // info();        
    }
    void show()
    {
        this->Show(true);
    }
    void info() const
    {
        wxSize s = GetSize();
        cout << s.GetHeight() << " "
             << s.GetWidth() << " "
             << GetTitle() << " "
             << IsShown() << " "
             << IsEnabled() << " " 
             << "\n";
    }
};

#endif /* __MID_WX_WINDOW_ */
