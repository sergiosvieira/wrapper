#ifndef MIDQT5SPINBOX_H
#define MIDQT5SPINBOX_H

#include <QSpinBox>
#include "mid-qt5-window.h"

#include "mid-window.h"

class MidQt5SpinBox: public QSpinBox
{
public:
    MidQt5SpinBox(Id id = 0,
                  int minValue = 0,
                  int maxValue = 100,
                  MidObject parent = nullptr):
        QSpinBox (static_cast<QWidget*>(parent.get()))
    {
        setRange(minValue, maxValue);
    }
    int getMidValue()
    {
        return value();
    }
};

#endif // MIDQT5SPINBOX_H
