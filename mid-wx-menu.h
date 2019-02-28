#ifndef __MIDWXMENU__
#define __MIDWXMENU__

#include <wx/menu.h>
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxMenu: public wxMenu
{
public:
    MidWxMenu
    (
        Id midID = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        //QMenu (title.c_str(), static_cast<QWidget*>(parent.get()))
		wxMenu(title.c_str())
    {
    }

    void setMidText(const char *caption)
    {
        //setTitle(QString(caption));
    }

    void addMidAction(MidObject object)
    {
        wxMenuItem* action = static_cast<wxMenuItem*>(object.get());
        this->Append(action);
    }
};

#endif // __MIDWXMENU__
