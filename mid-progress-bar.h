#ifndef __MID_PROGRESS_BAR__
#define __MID_PROGRESS_BAR__

#include <QFont>
#include <QProgressBar>

#include "mid-object.h"
#include "mid-window.h"


template <class T>
class MidProgressBar : public MidObject
{
	MidObject *parent = nullptr;
	T *ptr = nullptr;
public:
    template <class U>
    MidProgressBar(MidWindow<U>* parent = nullptr,
        long long int midID = 0):
    	parent(parent),
        MidObject((ptr = new T{parent, midID}))
    {
    }

    void setMidRange(int minimum, int maximum)
    {
        T *obj = this->ref<T>();
        if (obj) obj->setMidRange(minimum, maximum);
    }

    void setMidValue(int value)
    {
        T *obj = this->ref<T>();
        if (obj) obj->setMidValue(value);
    }

    void setMidEnable(bool enable)
    {
        T *obj = this->ref<T>();
        if (obj) obj->setMidEnable(enable);
    }

    void setMidMaximum(int maxValue)
    {
        T *obj = this->ref<T>();
        if (obj) obj->setMidMaximum(maxValue);
    }

    void setMidMinimum(int maxValue)
    {
        T *obj = this->ref<T>();
        if (obj) obj->setMidMinimum(maxValue);
    }

    int getMinValue()
    {
        T *obj = this->ref<T>();
        if (obj) return obj->getMidMinValue();

        return -1;
    }
    int getMaxValue()
    {
        T *obj = this->ref<T>();
        if (obj)
        return obj->getMidMaxValue();
        return -1;
    }
};

#endif /* __MID_PROGRESS_BAR__ */
