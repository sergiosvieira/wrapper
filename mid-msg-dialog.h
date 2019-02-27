#ifndef __MID_MESSAGE_DIALOG__
#define __MID_MESSAGE_DIALOG__

#include "mid-window.h"

/*!
 * \brief MidMessageDialog Template
 */
template <class T>
class MidMessageDialog : public MidObject
{
public:
    /*!
     * \brief MidMessageDialog
     * \param parent
     * \param title
     * \param text
     */
    MidMessageDialog
    (
        Id id = 0,
        const std::string &title = "",
        const std::string &text = "",
        MidObject parent = nullptr
    ):MidObject (new T(id, title, text, parent)){}
    /*!
     * \brief show
     */
    void show()
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->show();
    }
};

#endif /* __MID_MESSAGE_DIALOG__ */
