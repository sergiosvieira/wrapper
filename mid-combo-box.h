#ifndef __MID_COMBO_BOX__
#define __MID_COMBO_BOX__

#include "mid-object.h"
#include "mid-window.h"

/*!
 * MidComponentBox Template
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
    void addMidItem(const char* item)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->addMidItem(item);
    }
};

#endif // __MID_COMBO_BOX__
