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
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    template <class U>
    MidTextEdit(MidWindow<U>* parent = nullptr,
        long long int midID = 0,
              const char *title = ""):
        parent(parent),
        MidObject((ptr = new T{parent, midID, title}))
    {
    }

    /*!
     * \brief getText
     * \return
     */
    const char * getText()
    {
        return ptr->getText();
    }

    /*!
     * \brief setMidText
     * \param caption
     */
    void setMidText(const char *caption)
    {
        ptr->setMidText(caption);
    }
};

#endif // __MIDTEXTEDIT__
