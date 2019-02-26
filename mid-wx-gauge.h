#ifndef __MID_WX_GAUGE__
#define __MID_WX_GAUGE__

#include <wx/gauge.h>
#include "IDsdefinitions.h"

#include "mid-window.h"

class MidWxWindow;

class MidWxGauge : public wxGauge
{
    MidWindow<MidWxWindow> *parent = nullptr;
public:
    MidWxGauge(MidWindow<MidWxWindow> *parent = nullptr,
        long long int midID = 0,
        int min = 0,
        int max = 100) :
        wxGauge(
            parent != nullptr ? (wxFrame*)parent->get(): nullptr,
            midID,
            max) {}

    void setMidRange(int minimum, int maximum)
    {
        SetValue(maximum);
    }
    void setMidValue(int value, const char *msg = "")
    {
        SetValue(value);
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
        SetRange(maxValue);
    }
    void setMidMinimum(int maxValue)
    {
        //SetMinimum(maxValue);
    }
    
    void setParent(MidWindow<MidWxWindow>* parent)
    {
        this->parent = parent;
    }

    int getMidMinValue()
    {
        return 0;
    }
    int getMidMaxValue()
    {
        return this->GetRange();
    }

    void closeMidGauge()
    {
        this->setMidValue(this->getMidMaxValue());  //In wx you must be in the max value to close the progress windows
        this->Close();
    }
};

#endif /* __MID_WX_GAUGE__ */ 
