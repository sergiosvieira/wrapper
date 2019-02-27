#ifndef __MIDTEXTEDIT__
#define __MIDTEXTEDIT__

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief The MidTextEdit class
 */
template <class T>
class MidTextEdit : public MidObject
{
public:
    MidTextEdit
    (
        Id midID = 0,
        const std::string &title = "",
        MidObject parent = nullptr
    ):
        MidObject(new T{midID, title, parent})
    {
    }

    /*!
     * \brief getText
     * \return
     */
    std::string getText()
    {
        T *obj = static_cast<T*>(this->get());
        return obj->getText();
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

#endif // __MIDTEXTEDIT__
