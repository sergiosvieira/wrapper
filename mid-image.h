#ifndef MID_IMAGE_H
#define MID_IMAGE_H

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief MidImage Template
 */
template <class T>
class MidImage : public MidObject
{
public:
    /*!
     * \brief MidImage
     * \param id
     * \param title
     * \param parent
     */
    MidImage(Id id ,
              const std::string &filename = "",
              MidObject parent = nullptr):
        MidObject(new T{id, filename, parent}){}

};

#endif /* MID_IMAGE_H */
