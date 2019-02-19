#ifndef __MID_QT5_COMBO_BOX__
#define __MID_QT5_COMBO_BOX__

#include <QRadioButton>
#include "mid-window.h"
#include "mid-qt5-window.h"


class MidQt5ComboBox: public QComboBox
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5ComboBox(MidWindow<MidQt5Window>* parent = nullptr,
                      long long int midID = 0):
        QComboBox ((parent != nullptr) ? parent->get() : nullptr){}
    void addMidItem(const char* item)
    {
        this->addItem(QString(item));
    }
};


#endif // __MID_QT5_COMBO_BOX__
