#ifndef MID_COMBO_BOX_H
#define MID_COMBO_BOX_H

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief MidComponentBox Template
 */
template <class T>
class MidComboBox: public MidObject
{
public:
    /*!
     * \brief MidComboBox
     * \param id
     * \param parent
     */
    MidComboBox(Id id = 0,
                MidObject parent = nullptr):
        MidObject(new T{id, parent}){}
    /*!
     * \brief addMidItem
     * \param item
     */
    void addMidItem(const std::string &item)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->addMidItem(item);
    }
};

#endif // MID_COMBO_BOX_H
