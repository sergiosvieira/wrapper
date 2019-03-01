#ifndef MID_CANVAS_H
#define MID_CANVAS_H

#include "mid-object.h"

template <typename T>
/*!
 * \brief The MidCanvas class
 */
class MidCanvas: public MidObject
{
public:
    /*!
     * \brief MidCanvas
     * \param width
     * \param height
     * \param parent
     */
    MidCanvas(int width,
              int height,
              MidObject parent = nullptr):
        MidObject(new T{width, height, parent}){}
    /*!
     * \brief midfill
     * \param color
     */
    void midfill(MidObject color)
    {
        T *obj = static_cast<T*>(this->get());
        obj->midFill(color);
    }
};

#endif // MID_CANVAS_H
