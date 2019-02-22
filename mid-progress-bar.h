#ifndef __MID_PROGRESS_BAR__
#define __MID_PROGRESS_BAR__

#include <QFont>
#include <QProgressBar>

#include "mid-object.h"
#include "mid-window.h"


template <class T>
class MidProgressBar : public MidObject
{
public:
    MidProgressBar(Id id = 0,
                   MidObject parent = nullptr):
        MidObject(new T{id, parent}){}

    void setMidRange(int minimum, int maximum)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidRange(minimum, maximum);
    }
    void setMidValue(int value)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidValue(value);
    }
    void setMidEnable(bool enable)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidEnable(enable);
    }
    void setMidMaximum(int maxValue)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidMaximum(maxValue);
    }
    void setMidMinimum(int maxValue)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidMinimum(maxValue);
    }
    int getMinValue()
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) return obj->getMidMinValue();
        return -1;
    }
    int getMaxValue()
    {
        T *obj = static_cast<T*>(this->get());
        if (obj)
        return obj->getMidMaxValue();
        return -1;
    }
};

#endif /* __MID_PROGRESS_BAR__ */
