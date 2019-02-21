#ifndef __MID_GAUGE__
#define __MID_GAUGE__

#include "mid-object.h"
#include "mid-window.h"

template <class T>
class MidGauge : public MidObject
{
	MidObject *parent = nullptr;
	T *ptr = nullptr;
public:
    template <class U>
    MidGauge(MidWindow<U>* parent = nullptr,
        long long int midID = 0, int min = 0, int max = 100):
    	parent(parent),
        MidObject((ptr = new T{parent, midID, min, max}))
    {
    }

    void setMidRange(int minimum, int maximum)
    {
        T *obj = this->ref<T>();
        if (obj) obj->setMidRange(minimum, maximum);
    }

    void setMidValue(int value, const char *msg = "")
    {
        T *obj = this->ref<T>();
        if (obj) obj->setMidValue(value, msg);
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

    void closeMidGauge()
    {
        T *obj = this->ref<T>();
        if (obj) obj->closeMidGauge();
    }
};

#endif /* __MID_GAUGE__ */
