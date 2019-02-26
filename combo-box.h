#ifndef __COMBO_BOX__
#define __COMBO_BOX__

#include "mid-combo-box.h"
#include "mid-qt5-combo-box.h"

/*!
 * \brief The ComboBox class
 */
class ComboBox: public MidComboBox<MidQt5ComboBox>
{
public:
    /*!
      * \brief ComboBox
      * \param id
      * \param parent
      */
     ComboBox(Id id = 0,
              MidObject parent = nullptr):
        MidComboBox<MidQt5ComboBox>(id, parent){}
};

#endif // __COMBO_BOX__
