#ifndef GROUP_ACTION_H
#define GROUP_ACTION_H

#include <iostream>
#include "mid-group-action.h"
#include "mid-qt5-group-action.h"

/*!
 * \brief The GroupAction class
 */
class GroupAction: public MidGroupAction<MidQt5GroupAction>
{
public:

    GroupAction
    (
        Id id = 0,
        const std::vector<MidObject>& actions = {},
        MidObject parent = nullptr
    ):
        MidGroupAction<MidQt5GroupAction>(id, actions, parent) {}
};

#endif // GROUP_ACTION_H
