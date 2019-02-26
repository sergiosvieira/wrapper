#ifndef __RADIO_BUTTON_WX__
#define __RADIO_BUTTON_WX__

#include "mid-radio-button.h"
#include "mid-wx-radio-button.h"

class RadioButtonWx: public MidRadioButton<MidWxRadioButton>
{
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    RadioButtonWx(MidWindow<MidWxWindow>* parent = nullptr,
           long long int midID = 0,
              const char *title = ""):
        MidRadioButton<MidWxRadioButton>(parent, midID, title), parent(parent) {}

};

#endif // __RADIO_BUTTON_WX__
