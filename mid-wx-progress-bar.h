#ifndef __MID_WX_PROGRESS_BAR__
#define __MID_WX_PROGRESS_BAR__

#include <wx/progdlg.h>
#include "IDsdefinitions.h"

#include "mid-window.h"

class MidWxWindow;

class MidWxProgressbar : public wxProgressDialog
{
public:
    MidWxProgressbar
    (
        Id id = 0,
        int min = 0,
        int max = 100,
        const std::string &title = "",
        const std::string &msg = "",
        MidObject parent = nullptr
    ) :
        wxProgressDialog(wxString(title), wxString(msg), max, static_cast<wxWindow*>(parent.get()), wxPD_APP_MODAL | wxPD_CAN_ABORT) {}

    void setMidRange(int minimum, int maximum)
    {
        SetRange(maximum);
    }
    void setMidValue(int value, const char *msg = "")
    {
        Update(value, wxString(msg));
    }
    void setMidEnable(bool enable)
    {
        Enable(enable);
    }
    void setMidFormat(const wxString &format)
    {
        //setFormat(format);
    }
    void setMidMaximum(int maxValue)
    {
        SetMaximum(maxValue);
    }
    void setMidMinimum(int maxValue)
    {
        //SetMinimum(maxValue);
    }

    int getMidMinValue()
    {
        return 0;
    }
    int getMidMaxValue()
    {
        return this->GetRange();
    }

    void closeMidProgressBar()
    {
        this->setMidValue(this->getMidMaxValue());  //In wx you must be in the max value to close the progress windows
        this->Close();
    }
};

#endif /* __MID_WX_PROGRESS_BAR__ */ 
