#ifndef COMBO_BOX_H
#define COMBO_BOX_H

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
              MidObject parent = {}):
        MidComboBox<MidQt5ComboBox>(id, parent){}
};

#endif // COMBO_BOX_H
