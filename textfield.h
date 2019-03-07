#ifndef TEXT_FIELD_H
#define TEXT_FIELD_H

#include <iostream>
#include "mid-text-field.h"
#include "mid-qt5-text-field.h"

#include "window.h"


/*!
 * \brief The TextField class
 */
class TextField: public MidTextField<MidQt5TextField>
{
public:
    /*!
     * \brief TextField
     * \param id
     * \param text
     * \param parent
     */
    TextField(Id id = 0,
              const std::string &text = "",
              MidObject parent = {}):
        MidTextField<MidQt5TextField>(id, text, parent){}
};

#endif // TEXT_FIELD_H
