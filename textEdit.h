#ifndef TEXT_EDIT_H
#define TEXT_EDIT_H

#include <iostream>
#include "mid-text-edit.h"
#include "mid-qt5-text-edit.h"

#include "window.h"

class TextEdit: public MidTextEdit<MidQt5TextEdit>
{
public:
    /*!
     * \brief TextEdit
     * \param midID
     * \param title
     * \param parent
     */
    TextEdit
    (
        Id midID = 0,
        const std::string &title = "",
        MidObject parent = {}
    ):
        MidTextEdit<MidQt5TextEdit>(midID, title, parent)
        {}
};

#endif // TEXT_EDIT_H
