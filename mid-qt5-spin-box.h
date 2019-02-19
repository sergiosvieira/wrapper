#ifndef MIDQT5SPINBOX_H
#define MIDQT5SPINBOX_H

#include <QSpinBox>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5SpinBox: public QSpinBox
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5SpinBox(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0,
                 int minValue = 0,
                  int maxValue = 100):
        QSpinBox ((parent != nullptr) ? parent->get() : nullptr)
    {
        setRange(minValue, maxValue);
    }

    void setParent(MidWindow<MidQt5Window>* parent)
    {
        this->parent = parent;
    }

    int getMidValue()
    {
        return value();
    }
};

#endif // MIDQT5SPINBOX_H
