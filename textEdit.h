#ifndef __TEXTEDIT__
#define __TEXTEDIT__

#include <iostream>
#include "mid-text-edit.h"
#include "mid-qt5-text-edit.h"

#include "window.h"


class TextEdit: public MidTextEdit<MidQt5TextEdit>
{
public:
    TextEdit
    (
        Id midID = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidTextEdit<MidQt5TextEdit>(midID, title, parent)
        {}
};

#endif // __TEXTEDIT__
