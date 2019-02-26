#ifndef __MIDACTION__
#define __MIDACTION__

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
     * \param parent
     */
    MidAction
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidObject(new T{id, title, parent})
    {
    }
};

#endif // __MIDACTION__
