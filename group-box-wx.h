#ifndef __GROUP_BOX_WX_
#define __GROUP_BOX_WX_

#include "mid-group-box.h"
#include "mid-wx-group-box.h"

class GroupBoxWx: public MidGroupBox<MidWxGroupBox>
{
public:
    GroupBoxWx
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidGroupBox<MidWxGroupBox>(id, title, parent) {}
};

#endif // __GROUP_BOX_WX_
