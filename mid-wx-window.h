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
    MidWxWindow(MidWxWindow const& other): wxFrame(nullptr, wxID_ANY, "", other.GetPosition(), other.GetSize())
    {
        //this->CreateFrame(other.GetTitle(), other.GetPosition(), other.GetSize());
        //this->SetParent(other.GetParent());
        //this->SetHWND(other.GetHandle());

        

        //Create(other.GetParent(), wxID_ANY, "", other.GetPosition(), other.GetSize());
        //WXHWND a = this->m_hWnd;
        //this->DeletePendingEvents();
        //this->SetHWND(other.GetHandle());
        //wxFrame((wxFrame)other);
        //Init();
        //Create(nullptr, wxID_ANY, "", other.GetPosition(), other.GetSize());
        //WXHWND b = this->m_hWnd;
            //other.GetSty, name);

        /*wxSize size = other.GetSize();
        //this->handle
        this->SetHWND(other.GetHandle());
        //this->HandleInitDialog(other.GetHandle());
        this->SetParent(other.GetParent());
        this->SetSize(0, 20, size.GetWidth(), size.GetHeight());
        this->SetTitle(other.GetTitle());        */
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
