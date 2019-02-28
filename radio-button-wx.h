#ifndef __RADIO_BUTTON_WX__
#define __RADIO_BUTTON_WX__

#include "mid-radio-button.h"
#include "mid-wx-radio-button.h"

class RadioButtonWx: public MidRadioButton<MidWxRadioButton>
{
public:
    RadioButtonWx
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidRadioButton<MidWxRadioButton>(id, title, parent) {}

};

#endif // __RADIO_BUTTON_WX__
