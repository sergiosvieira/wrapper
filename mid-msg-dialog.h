#ifndef __MID_MESSAGE_DIALOG__
#define __MID_MESSAGE_DIALOG__

#include "mid-window.h"

/*!
 * MidMessageDialog Template
 */
template <class T>
class MidMessageDialog
{
    T *m = nullptr;
public:
    /*!
     * \brief MidMessageDialog
     * \param parent
     * \param title
     * \param text
     */
    template <class U>
    MidMessageDialog(MidWindow<U> *parent,
                    const char* title, 
                    const char* text)
    {
        m = new T(parent, title, text);
        m->setTitle(title);
        m->setText(text);
    }
    /*!
     * \brief show
     */
    void show()
    {
        m->show();
    }
};

#endif /* __MID_MESSAGE_DIALOG__ */
