#ifndef MID_RADIO_BUTTON_H
#define MID_RADIO_BUTTON_H

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief The MidRadioButton class
 */
template <class T>
class MidRadioButton : public MidObject
{
public:
    /*!
     * \brief MidRadioButton
     * \param id
     * \param title
     * \param parent
     */
    MidRadioButton(Id id = 0,
                   const std::string &title = "",
                   MidObject parent = nullptr):
        MidObject(new T{id, title, parent}){}
};

#endif // MID_RADIO_BUTTON_H
