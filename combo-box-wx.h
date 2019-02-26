#ifndef __COMBO_BOX_WX__
#define __COMBO_BOX_WX__

#include "mid-combo-box.h"
#include "mid-wx-combo-box.h"

class ComboBoxWx: public MidComboBox<MidWxComboBox>
{
     MidWindow<MidWxWindow>* parent = nullptr;
public:
     ComboBoxWx(MidWindow<MidWxWindow>* parent = nullptr,
              long long int midID = 0):
        MidComboBox<MidWxComboBox>(parent, midID),
        parent(parent){}
};

#endif // __COMBO_BOX_WX__
