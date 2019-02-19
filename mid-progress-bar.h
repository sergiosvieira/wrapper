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
        ptr->setMidRange(minimum, maximum);
    }

    void setMidValue(int value)
    {
        ptr->setMidValue(value);
    }

    void setMidEnable(bool enable)
    {
        ptr->setMidEnable(enable);
    }

    void setMidFormat(const QString &format)
    {
        ptr->setMidFormat(format);
    }

    void setMidMaximum(int maxValue)
    {
        ptr->setMidMaximum(maxValue);
    }

    void setMidMinimum(int maxValue)
    {
        ptr->setMidMinimum(maxValue);
    }

    void setMidFont(const QFont &font)
    {
        ptr->setMidFont(font);
    }

};

#endif /* __MID_PROGRESS_BAR__ */
