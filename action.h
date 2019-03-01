#ifndef ACTION_H
#define ACTION_H

#include <iostream>
#include "mid-action.h"
#include "mid-qt5-action.h"


/*!
 * \brief The Action class
 */
class Action: public MidAction<MidQt5Action>
{
public:
    /*!
     * \brief Action
     * \param id
     * \param title
     * \param checkable
     * \param checkInput
     * \param parent
     */
    Action
    (
        Id id = 0,
        const std::string &title = "",
        bool checkable = false,
        bool checkInput = false,
        MidObject parent = nullptr
    ):
        MidAction<MidQt5Action>(id, title, checkable, checkInput, parent) {}
};

#endif // ACTION_H
