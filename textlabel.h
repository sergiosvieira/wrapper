#ifndef TEXTLABEL_H
#define TEXTLABEL_H

#include <iostream>
#include "mid-text-label.h"
#include "mid-qt5-text-label.h"

#include "window.h"

using std::cout;

class TextLabel: public MidTextLabel<MidQt5TextLabel>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    TextLabel(MidWindow<MidQt5Window>* parent = nullptr,
           long long int midID = 0,
              const char *title = ""):
        MidTextLabel<MidQt5TextLabel>(parent, midID, title),
        parent(parent) {}
};

#endif // TEXTLABEL_H
