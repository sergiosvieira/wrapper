#ifndef MID_TEXT_EDIT_H
#define MID_TEXT_EDIT_H

#include "mid-color.h"
#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief The MidTextEdit class
 */
template <class T>
class MidTextEdit : public MidObject
{
public:
    /*!
     * \brief MidTextEdit
     * \param midID
     * \param title
     * \param parent
     */
    MidTextEdit
    (
        Id midID = 0,
        const std::string &title = "",
        MidObject parent = {}
    ):
        MidObject(new T{midID, title, parent}){}
    /*!
     * \brief getMidText
     * \return
     */
    std::string getMidText()
    {
        T *obj = static_cast<T*>(this->get());
        return obj->getMidText();
    }
    /*!
     * \brief setMidText
     * \param caption
     */
    void setMidText(const std::string &caption)
    {
        T *obj = static_cast<T*>(this->get());
        obj->setMidText(caption);
    }
};

#endif // MID_TEXT_EDIT_H
