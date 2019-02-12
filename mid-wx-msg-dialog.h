#ifndef __MID_WX_MSG_DIALOG__
#define __MID_WX_MSG_DIALOG__

#include <wx/msgdlg.h>
#include <iostream>
#include "mid-window.h"
#include "mid-wx-window.h"


class MidWxMsgDialog
{
    wxMessageDialog *msg = nullptr;
public:
    MidWxMsgDialog(MidWindow<MidWxWindow> *parent,
                   const char *title,
                   const char *text)
    {
        wxFrame *p = nullptr;
        if (parent != nullptr)
        {
            p = &parent->get();
        }
        this->msg = new wxMessageDialog(p, text, title, wxOK | wxICON_INFORMATION);
    }
    void setTitle(const char *title)
    {
        this->msg->SetTitle(title);
    }
    void setText(const char *text)
    {
        this->msg->SetMessage(text);
    }
    void show()
    {
        this->msg->ShowModal();
    }
};

#endif /* __MID_WX_MSG_DIALOG__ */
