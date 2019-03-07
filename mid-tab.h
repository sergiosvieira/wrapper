#ifndef MID_TAB_H
#define MID_TAB_H

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief The MidTab class
 */
template <class T>
class MidTab : public MidObject
{
public:
    /*!
     * \brief MidTab
     * \param id
     * \param title
     * \param parent
     */
    MidTab(Id id = 0,
           const std::string &title = "",
           MidObject parent = {}):
        MidObject(new T{id, title, parent}){}

    /*!
     * \brief addMidTab
     * \param object
     * \param tabTitle
     */
    void addMidTab(MidObject object, const char *tabTitle)
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->addMidTab(object, tabTitle);
    }
};

#endif // MID_TAB_H
