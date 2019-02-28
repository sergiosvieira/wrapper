#ifndef MID_STATUS_BAR_H
#define MID_STATUS_BAR_H

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief MidStatusBar Template
 */
template <class T>
class MidStatusBar : public MidObject
{
public:
    /*!
     * \brief MidStatusBar
     * \param id
     * \param title
     * \param parent
     */
    MidStatusBar(Id id ,
              const std::string &title = "",
              MidObject parent = nullptr):
        MidObject(new T{id, title, parent}){}

    void showStatusBar(const std::string &title)
    {
        T *obj = static_cast<T*>(this->get());
        obj->showStatusBar(title);
    }
};

#endif /* MID_BUTTON_H */
