#ifndef MID_TEXT_FIELD_H
#define MID_TEXT_FIELD_H

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief The MidTextField class
 */
template <class T>
class MidTextField : public MidObject
{
public:
    /*!
     * \brief MidTextField
     * \param id
     * \param title
     * \param parent
     */
    MidTextField(Id id = 0,
                 const std::string &title = "",
                 MidObject parent = {}):
        MidObject(new T{id, title, parent}){}

    /*!
     * \brief getText
     * \return
     */
    std::string getText()
    {        
        T *obj = static_cast<T*>(this->get());
        return obj->getMidTitle();
    }

    /*!
     * \brief setMidText
     * \param title
     */
    void setMidText(const std::string& title)
    {
        T *obj = static_cast<T*>(this->get());
        obj->setMidText(title);
    }
};

#endif // MID_TEXT_FIELD_H
