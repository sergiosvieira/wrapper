#ifndef GROUP_BOX_H
#define GROUP_BOX_H

#include "mid-group-box.h"
#include "mid-qt5-group-box.h"

/*!
 * \brief The GroupBox class
 */
class GroupBox: public MidGroupBox<MidQt5GroupBox>
{
public:
    /*!
     * \brief GroupBox
     * \param id
     * \param title
     * \param parent
     */
    GroupBox(Id id = 0,
             const std::string &title = "",
             MidObject parent = nullptr):
        MidGroupBox<MidQt5GroupBox>(id, title, parent){}
};

#endif // GROUP_BOX_H
