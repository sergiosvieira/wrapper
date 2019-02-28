#ifndef MID_CHECK_BOX_H
#define MID_CHECK_BOX_H

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief MidCheckBox Template
 */
template <class T>
class MidCheckBox : public MidObject
{
public:
    /*!
     * \brief MidCheckBox
     * \param midID
     * \param title
     * \param parent
     */
    MidCheckBox
    (
        Id midID = 0,
        const std::string &title = "",
        MidObject parent = nullptr
     ):
        MidObject(new T{midID, title, parent}){}
};

#endif /* MID_CHECK_BOX_H */
