#ifndef __MIDWXTAB__
#define __MIDWXTAB__

#include <wx/notebook.h>
#include <wx/panel.h>
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxTab: public wxNotebook
{
public:
    MidWxTab
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        wxNotebook(
            static_cast<wxWindow*>(parent.get()),
            id)
    {
    }

    void addMidTab(MidObject object, const std::string& tabTitle)
    {
        wxPanel* widget = static_cast<wxPanel*>(object.get());
        AddPage(widget, tabTitle.c_str());

        //Não se deve adicionar um componente diretamente no tab
        //Deve configurar um layout no tab (esse layout deve ter o componente)
    }
};

#endif // __MIDWXTAB__
