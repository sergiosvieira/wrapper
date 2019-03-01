#ifndef MID_ACTION_H
#define MID_ACTION_H

#include "mid-object.h"
#include "mid-window.h"

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
     * \param checkable
     * \param checkInput
     * \param parent
     */

    MidAction
    (
        Id id = 0,
        const std::string &title = "",
        bool checkable = false,
        bool checkInput = false,
        MidObject parent = nullptr
    ):
        MidObject(new T{id, title, checkable, checkInput, parent})
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
