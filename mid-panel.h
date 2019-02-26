#ifndef __MIDPANEL__
#define __MIDPANEL__

#include <vector>
#include <iostream>
#include <type_traits>
#include "mid-object.h"
#include "mid-layout.h"
#include "mid-window.h"


/*!
 * \brief The MidPanel template
 */
template <class T>
class MidPanel: public MidObject
{
public:
    /*!
     * \brief MidPanel
     * \param width
     * \param height
     * \param parent
     */
    MidPanel(
        int width = 600,
        int height = 800,
        MidObject parent = nullptr
    ):
        MidObject(new T{width, height, parent}){}
    /*!
     * \brief getWidth
     * \return
     */
    int getMidWidth() const
    {
        T *obj = static_cast<T*>(this->get());
        return obj->getMidWidth();
    }
    /*!
     * \brief getHeight
     * \return
     */
    int getMidHeight() const
    {
        T *obj = static_cast<T*>(this->get());
        return obj->getMidHeight();
    }
    /*!
     * \brief addChild
     * \param child
     */
    void addMidChild(MidObject child)
    {
        T *obj = static_cast<T*>(this->get());
        return obj->addMidChild(child);
    }
    /*!
     * \brief show
     */
    void midShow()
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->midShow();
    }
    /*!
     * \brief setMidLayout
     * \param layout
     */
    void setMidLayout(MidObject layout)
    {
        T *obj = static_cast<T*>(this->get());
        return obj->setMidLayout(layout);
    }
};

#endif // __MIDPANEL__
