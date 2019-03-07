#ifndef MID_ACTION_H
#define MID_ACTION_H

#include "mid-object.h"
#include "mid-window.h"
#include "general.h"

/*!
 * \brief MidAction Template
 */
template <class T>
class MidAction : public MidObject
{
public:
    /*!
     * \brief MidAction
     * \param id
     * \param title
     * \param type
     * \param checkInput
     * \param shortcut
     * \param parent
     */

    MidAction
    (
        Id id = 0,
        const std::string &title = "",
        const ActionType type = ActionType::DEFAULT,
        bool checkInput = false,
        const std::string& shortcut = "",
        MidObject parent = {}
    ):
        MidObject(new T{id, title, type, checkInput, shortcut, parent})
    {
    }

    void addMidIcon
    (
            const std::string &name,
            const std::string &filename
    )
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->addMidIcon(name, filename);
    }
};

#endif // MID_ACTION_H
