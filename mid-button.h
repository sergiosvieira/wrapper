#ifndef MID_BUTTON_H
#define MID_BUTTON_H

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief MidButton Template
 */
template <class T>
class MidButton : public MidObject
{
public:
    /*!
     * \brief MidButton
     * \param id
     * \param title
     * \param parent
     */
    MidButton(Id id = 0,
              const std::string &title = "",
              MidObject parent = {}):
        MidObject(new T{id, title, parent}){}
};

#endif /* MID_BUTTON_H */
