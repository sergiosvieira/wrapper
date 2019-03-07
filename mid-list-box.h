#ifndef MID_LIST_BOX_H
#define MID_LIST_BOX_H

#include "mid-object.h"
#include <vector>

/*!
 * \brief The MidListBox class
 */
template <class T>
class MidListBox : public MidObject
{
public:
    MidListBox
    (
        Id id = 0,
        const std::vector<std::string> &list = {},
            MidObject parent = {}
    ):
        MidObject(new T{id, list, parent}){}
};

#endif // MID_LIST_BOX_H
