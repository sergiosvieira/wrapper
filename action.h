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
     * \param type
     * \param checkInput
     * \param shortcut
     * \param parent
     */
    Action
    (
        Id id = 0,
        const std::string &title = "",
        const ActionType type = ActionType::DEFAULT,
        bool checkInput = false,
        const std::string& shortcut = "",
        MidObject parent = nullptr
    ):
        MidAction<MidQt5Action>(id, title, type, checkInput, shortcut, parent) {}
};

#endif // ACTION_H
