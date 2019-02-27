#ifndef MID_DATE_EDIT_H
#define MID_DATE_EDIT_H

#include "mid-object.h"
#include "mid-window.h"
#include "mid-date.h"

/*!
 * \brief MidDateEdit Template
 */
template <class T>
class MidDateEdit : public MidObject
{
public:
    /*!
     * \brief MidDateEdit
     * \param id
     * \param date
     * \param parent
     */
    MidDateEdit(Id id = 0,
                MidObject date = nullptr,
                MidObject parent = nullptr):
        MidObject(new T{id, date, parent}){}
};

#endif // MID_DATE_EDIT_H
