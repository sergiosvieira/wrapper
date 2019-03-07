#ifndef MID_QT5_BUTTON_EDIT_H
#define MID_QT5_BUTTON_EDIT_H

#include <QDateEdit>
#include "mid-qt5-window.h"
#include "mid-window.h"
#include "mid-date.h"
#include "mid-qt5-date.h"

/*!
 * \brief The MidQt5DateEdit class
 */
class MidQt5DateEdit: public QDateEdit
{
public:
    /*!
     * \brief MidQt5DateEdit
     * \param id
     * \param date
     * \param parent
     */
    MidQt5DateEdit(Id id = 0,
                   MidObject date = {},
                   MidObject parent = {}):
        QDateEdit (*static_cast<QDate*>(date.get()),
                   static_cast<QWidget*>(parent.get())){}
};


#endif // MID_QT5_BUTTON_EDIT_H
