#ifndef __MID_QT5_RADIO_BUTTON__
#define __MID_QT5_RADIO_BUTTON__

#include <QRadioButton>
#include "mid-window.h"
#include "mid-qt5-window.h"


class MidQt5RadioButton: public QRadioButton
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5RadioButton(MidWindow<MidQt5Window>* parent = nullptr,
                      long long int midID = 0,
                      const char *title = ""):
        QRadioButton (title, (parent != nullptr) ? parent->get() : nullptr){}
};


#endif // __MID_QT5_RADIO_BUTTON__
