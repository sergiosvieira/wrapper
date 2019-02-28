#ifndef __TEXTEDITWX__
#define __TEXTEDITWX__

#include <iostream>
#include "mid-text-edit.h"
#include "mid-wx-text-edit.h"

#include "window.h"

using std::cout;

class TextEditWx: public MidTextEdit<MidWxTextEdit>
{
public:
    TextEditWx
    (
        Id midID = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidTextEdit<MidWxTextEdit>(midID, title, parent)
        {}
};

#endif // __TEXTEDITWX__
