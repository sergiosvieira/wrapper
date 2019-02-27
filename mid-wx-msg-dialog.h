#ifndef __MID_WX_MSG_DIALOG__
#define __MID_WX_MSG_DIALOG__

#include <wx/msgdlg.h>
#include <iostream>
#include "mid-window.h"
#include "mid-wx-window.h"


class MidWxMsgDialog: public wxMessageDialog
{
public:
    MidWxMsgDialog
    (
        Id id = 0,
        const std::string &title = "",
        const std::string &text = "",
        MidObject parent = nullptr
    ):
        wxMessageDialog(static_cast<wxWindow*>(parent.get()), text, title, wxOK | wxICON_INFORMATION)
    {
    }
    void setMidTitle(const char *title)
    {
        this->SetTitle(title);
    }
    void setMidText(const char *text)
    {
        this->SetMessage(text);
    }
    void show()
    {
        this->ShowModal();
    }
};

#endif /* __MID_WX_MSG_DIALOG__ */
