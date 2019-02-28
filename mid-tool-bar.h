#ifndef MID_TOOL_BAR_H
#define MID_TOOL_BAR_H

#include "mid-object.h"
#include "mid-window.h"
#include "mid-menu.h"

/*!
 * \brief MidToolLBar Template
 */
template <class T>
class MidToolBar : public MidObject
{
public:
    /*!
     * \brief MidToolBar
     * \param midID
     * \param parent
     */
    MidToolBar
    (
        Id midID,
        const std::string &title,
        MidObject parent
    ):
        MidObject(new T{midID, title, parent}){}

    void addMidAction(MidObject action)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->addMidAction(action);
    }
};

#endif // MID_TOOL_BAR_H
