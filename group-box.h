#ifndef __GROUP_BOX__
#define __GROUP_BOX__

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

#endif // __GROUP_BOX__
