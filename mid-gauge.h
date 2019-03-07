#ifndef MID_GAUGE_H
#define MID_GAUGE_H

#include "mid-object.h"
#include "mid-window.h"

/*!
 *  \brief MidGauge class
 */
template <class T>
class MidGauge : public MidObject
{
public:
    /*!
     * \brief MidGauge
     * \param id
     * \param min
     * \param max
     * \param parent
     */
    MidGauge(Id id = 0,
             int min = 0,
             int max = 100,
             MidObject parent = {}):
        MidObject(new T{id, min, max, parent}){}
    /*!
     * \brief setMidRange
     * \param minimum
     * \param maximum
     */
    void setMidRange(int minimum, int maximum)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidRange(minimum, maximum);
    }
    /*!
     * \brief setMidValue
     * \param value
     * \param msg
     */
    void setMidValue(int value, const char *msg = "")
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidValue(value, msg);
    }
    /*!
     * \brief setMidEnable
     * \param enable
     */
    void setMidEnable(bool enable)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidEnable(enable);
    }
    /*!
     * \brief setMidMaximum
     * \param maxValue
     */
    void setMidMaximum(int maxValue)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidMaximum(maxValue);
    }
    /*!
     * \brief setMidMinimum
     * \param maxValue
     */
    void setMidMinimum(int maxValue)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidMinimum(maxValue);
    }
    /*!
     * \brief getMinValue
     * \return
     */
    int getMinValue()
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) return obj->getMidMinValue();
        return -1;
    }
    /*!
     * \brief getMaxValue
     * \return
     */
    int getMaxValue()
    {
        T *obj = static_cast<T*>(this->get());
        if (obj)
        return obj->getMidMaxValue();
        return -1;
    }
    /*!
     * \brief closeMidGauge
     */
    void closeMidGauge()
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->closeMidGauge();
    }
};

#endif /* MID_GAUGE_H */
