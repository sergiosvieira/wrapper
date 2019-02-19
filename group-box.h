#ifndef __GROUP_BOX__
#define __GROUP_BOX__

#include "mid-group-box.h"
#include "mid-qt5-group-box.h"

class GroupBox: public MidGroupBox<MidQt5GroupBox>
{
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    GroupBox(MidWindow<MidQt5Window>* parent = nullptr,
           long long int midID = 0,
              const char *title = ""):
        MidGroupBox<MidQt5GroupBox>(parent, midID, title), parent(parent) {}
};

#endif // __GROUP_BOX__
