#ifndef MID_WINDOW_H
#define MID_WINDOW_H

#include <vector>
#include <iostream>
#include <type_traits>
#include "mid-object.h"
#include "mid-layout.h"

using std::shared_ptr;

/*!
 * \brief The MidWindow class
 */
template <class T>
class MidWindow: public MidObject
{
public:
    /*!
     * \brief MidWindow
     * \param width
     * \param height
     * \param title
     * \param parent
     */
    MidWindow(int width,
              int height,
              const std::string &title,
              MidObject parent):
        MidObject(new T{ width, height, title, parent }){}
    /*!
     * \brief show
     */
    void show()
    {
        T *obj = static_cast<T*>(this->get());
        obj->show();
    }

    void showStatusBar(const std::string &msg)
    {
        T *obj = static_cast<T*>(this->get());
        obj->showStatusBar(msg);
    }

    /*!
     * \brief setMidLayout
     * \param layout
     */
    void setMidLayout(MidObject layout)
    {
        T *obj = static_cast<T*>(this->get());
        obj->setMidLayout(layout);
    }
};

#endif /* MID_WINDOW_H */
