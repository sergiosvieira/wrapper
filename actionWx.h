#ifndef __ACTIONWX__
#define __ACTIONWX__

#include <iostream>
#include "mid-action.h"
#include "mid-wx-action.h"

#include "window.h"

using std::cout;

/*!
 * \brief The Action class
 */
class ActionWx: public MidAction<MidWxAction>
{
public:
    ActionWx
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidAction<MidWxAction>(id, title, parent) {}
};

#endif // __ACTIONWX__
