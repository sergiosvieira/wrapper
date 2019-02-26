#ifndef __MID_PROGRESS_BAR__
#define __MID_PROGRESS_BAR__

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief The MidProgressBar Template
 */
template <class T>
class MidProgressBar : public MidObject
{
	MidObject *parent = nullptr;
	T *ptr = nullptr;
public:
    MidProgressBar
(
	Id id = 0, 
	int min = 0, 
	int max = 100, 
	const char *title = "", 
	const char *msg = "",
	MidObject parent = nullptr
):
        MidObject(new T{id, min, max, title, msg, parent}){}
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
     */
    void setMidValue(int value)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidValue(value);
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
     * \brief closeMidProgressBar
     */
    void closeMidProgressBar()
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->closeMidProgressBar();
    }
};

#endif /* __MID_PROGRESS_BAR__ */
