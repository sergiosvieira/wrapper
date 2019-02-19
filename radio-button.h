#ifndef __RADIO_BUTTON__
#define __RADIO_BUTTON__

#include "mid-radio-button.h"
#include "mid-qt5-radio-button.h"


class RadioButton: public MidRadioButton<MidQt5RadioButton>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    RadioButton(MidWindow<MidQt5Window>* parent = nullptr,
           long long int midID = 0,
              const char *title = ""):
        MidRadioButton<MidQt5RadioButton>(parent, midID, title), parent(parent) {}

};

#endif // __RADIO_BUTTON__
