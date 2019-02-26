#ifndef __MIDTEXTLABEL__
#define __MIDTEXTLABEL__

#include "mid-object.h"
#include "mid-window.h"

/*!
 * \brief The MidTextLabel class
 */
template <class T>
class MidTextLabel : public MidObject
{
public:
    /*!
     * \brief MidTextLabel
     * \param id
     * \param text
     * \param parent
     */
    MidTextLabel(Id id = 0,
                 const std::string &text = "",
                 MidObject parent = nullptr):
        MidObject(new T{id, text, parent}){}

    /*!
     * \brief getMidText
     * \return
     */
    std::string getMidText()
    {
        T *obj = static_cast<T*>(this->get());
        return obj->getText();
    }

    /*!
     * \brief setMidText
     * \param text
     */
    void setMidText(const std::string &text)
    {
        T *obj = static_cast<T*>(this->get());
        obj->setMidText(text);
    }
};

#endif // __MIDTEXTLABEL__
