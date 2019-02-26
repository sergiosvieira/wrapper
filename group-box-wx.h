#ifndef __GROUP_BOX_WX_
#define __GROUP_BOX_WX_

#include "mid-group-box.h"
#include "mid-wx-group-box.h"

class GroupBoxWx: public MidGroupBox<MidWxGroupBox>
{
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    GroupBoxWx(MidWindow<MidWxWindow>* parent = nullptr,
           long long int midID = 0,
              const char *title = ""):
        MidGroupBox<MidWxGroupBox>(parent, midID, title), parent(parent) {}
};

#endif // __GROUP_BOX_WX_
