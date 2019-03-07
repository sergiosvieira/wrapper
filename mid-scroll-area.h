#ifndef MID_SCROLL_AREA_H
#define MID_SCROLL_AREA_H

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief MidScrollArea Template
 */
template <class T>
class MidScrollArea : public MidObject
{
public:
    /*!
     * \brief MidScrollArea
     * \param id
     * \param parent
     */
    MidScrollArea(Id id = 0,
              MidObject parent = nullptr):
        MidObject(new T{id, parent}){}

    void setComponent(MidObject component)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setComponent(component);
    }

    void setMidGeometry(int originX, int originY, int width, int height)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidGeometry(originX, originY, width, height);
    }
};

#endif /* MID_SCROLL_AREA_H */
