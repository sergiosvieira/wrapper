#ifndef TEXTLABEL_H
#define TEXTLABEL_H

#include <iostream>
#include "mid-text-label.h"
#include "mid-qt5-text-label.h"

#include "window.h"


/*!
 * \brief The TextLabel class
 */
class TextLabel: public MidTextLabel<MidQt5TextLabel>
{
public:
    /*!
     * \brief TextLabel
     * \param id
     * \param title
     * \param parent
     */
    TextLabel(Id id = 0,
              const std::string &title = "",
              MidObject parent = nullptr):
        MidTextLabel<MidQt5TextLabel>(id, title, parent){}
};

#endif // TEXTLABEL_H
