#ifndef __COMBO_BOX__
#define __COMBO_BOX__

#include "mid-combo-box.h"
#include "mid-qt5-combo-box.h"

class ComboBox: public MidComboBox<MidQt5ComboBox>
{
     MidWindow<MidQt5Window>* parent = nullptr;
public:
     ComboBox(MidWindow<MidQt5Window>* parent = nullptr,
              long long int midID = 0):
        MidComboBox<MidQt5ComboBox>(parent, midID),
        parent(parent){}
};

#endif // __COMBO_BOX__
