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
    wxApp *app = nullptr;
public:
    MidWxApp(int argc, char **argv):
        argc(argc), argv(argv)
    {
        this->app = new wxApp();
    }
    int execute()
    {
        return static_cast<int>(this->app->Initialize(this->argc, (wchar_t **)this->argv));
    }
};

#endif /* __MID_WX_APP_ */
