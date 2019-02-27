#ifndef __MID_CHECK_BOX__
#define __MID_CHECK_BOX__

#include "mid-object.h"
#include "mid-window.h"


template <class T>
class MidCheckBox : public MidObject
{
public:
    MidCheckBox
    (
        Id midID = 0,
        const std::string &title = "",
        MidObject parent = nullptr
     ):
        MidObject(new T{midID, title, parent}){}
};

#endif /* __MID_CHECK_BOX__ */
