#ifndef __TEXTEDIT__
#define __TEXTEDIT__

#include <iostream>
#include "mid-text-edit.h"
#include "mid-qt5-text-edit.h"

#include "window.h"

using std::cout;

class TextEdit: public MidTextEdit<MidQt5TextEdit>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    TextEdit(MidWindow<MidQt5Window>* parent = nullptr,
           long long int midID = 0,
              const char *title = ""):
        MidTextEdit<MidQt5TextEdit>(parent, midID, title),
        parent(parent) {}
};

#endif // __TEXTEDIT__
