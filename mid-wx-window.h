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
        this->SetSize(0, 0, width, height);
    }
    void show()
    {
        this->Show(true);
    }
};

#endif /* __MID_WX_WINDOW_ */
