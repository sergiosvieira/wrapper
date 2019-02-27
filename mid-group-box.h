#ifndef MID_GROUP_BOX_H
#define MID_GROUP_BOX_H

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief MidGroupBox Template
 */
template <class T>
class MidGroupBox: public MidObject
{
public:
    /*!
     * \brief MidGroupBox
     * \param id
     * \param title
     * \param parent
     */
    MidGroupBox(Id id = 0,
                const std::string &title = "",
                MidObject parent = nullptr):
        MidObject(new T{id, title, parent}){}
    /*!
     * \brief setMidLayout
     * \param layout
     */
    void setMidLayout(MidObject layout)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->setMidLayout(layout);
    }
};

#endif // MID_GROUP_BOX_H
