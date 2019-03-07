#ifndef DATE_EDIT_H
#define DATE_EDIT_H

#include <iostream>
#include "mid-date-edit.h"
#include "mid-qt5-date-edit.h"
#include "mid-qt5-date.h"
#include "mid-date-edit.h"
#include "mid-date.h"

/*!
 * \brief The DateEdit class
 */
class DateEdit: public MidDateEdit<MidQt5DateEdit>
{
public:
    /*!
      * \brief DateEdit
      * \param id
      * \param date
      * \param parent
      */
    DateEdit(Id id = 0,
             MidObject date = {},
             MidObject parent = {}):
        MidDateEdit<MidQt5DateEdit>(id, date, parent){}
};

#endif // __DATE_EDIT__
