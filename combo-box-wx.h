#ifndef __COMBO_BOX_WX__
#define __COMBO_BOX_WX__

#include "mid-combo-box.h"
#include "mid-wx-combo-box.h"

class ComboBoxWx: public MidComboBox<MidWxComboBox>
{
public:
     ComboBoxWx
     (
         Id id = 0,
         MidObject parent = nullptr
     ):
        MidComboBox<MidWxComboBox>(id, parent){}
};

#endif // __COMBO_BOX_WX__
