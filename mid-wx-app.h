#ifndef __MID_WX_APP__
#define __MID_WX_APP__

#include <wx/chartype.h>
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
   #include "wx/wx.h"
#endif

class MidWxApp
{
    int argc;
    char **argv;
    wxApp* app = nullptr;
public:
    MidWxApp(int argc, char **argv):
        argc(argc), argv(argv)
    {
        this->app = new wxApp();
        wxApp::SetInstance(this->app);
        wxEntryStart(argc, argv);
		
		this->app->OnInit(); //To deal with events
    }
    int execute()
    {
        this->app->Initialize(argc, (wchar_t**)argv);
        return this->app->OnRun();
    }
};


#endif /* __MID_WX_APP_ */
