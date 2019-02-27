#ifndef MID_PANEL_H
#define MID_PANEL_H

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

#endif // MID_PANEL_H
