#ifndef MID_IMAGE_LABEL_H
#define MID_IMAGE_LABEL_H

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief The MidImageLabel class
 */
template <class T>
class MidImageLabel : public MidObject
{
public:
    /*!
     * \brief MidImageLabel
     * \param id
     * \param text
     * \param parent
     */
    MidImageLabel(Id id,
                 MidObject image,
                  MidObject parent = {}):
        MidObject(new T{id, image, parent}){}
};

#endif // MID_IMAGE_LABEL_H
