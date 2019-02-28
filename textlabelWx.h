#ifndef __TEXTLABELWX__
#define __TEXTLABELWX__

#include <iostream>
#include "mid-text-label.h"
#include "mid-wx-text-label.h"

#include "window.h"

class TextLabelWx: public MidTextLabel<MidWxTextLabel>
{
public:
    TextLabelWx
    (
        Id id = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidTextLabel<MidWxTextLabel>(id, title, parent)
        {}
};

#endif // __TEXTLABELWX__
