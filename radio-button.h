#ifndef __RADIO_BUTTON__
#define __RADIO_BUTTON__

#include "mid-radio-button.h"
#include "mid-qt5-radio-button.h"


class RadioButton: public MidRadioButton<MidQt5RadioButton>
{
public:
    RadioButton(Id id = 0,
                const std::string &title = "",
                MidObject parent = nullptr):
        MidRadioButton<MidQt5RadioButton>(id, title, parent){}
};

#endif // __RADIO_BUTTON__
