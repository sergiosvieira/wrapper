#ifndef __MIDPANEL__
#define __MIDPANEL__

#include <vector>
#include <iostream>
#include <type_traits>
#include "mid-object.h"
#include "mid-layout.h"
#include "mid-window.h"

using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::is_reference;

template <class T>
class MidPanel: public MidObject
{
    vector<shared_ptr<MidObject>> child;
public:
    /*!
     * \brief MidPanel
     * \param width
     * \param height
     * \param parent
     */
    MidPanel(
        int width = 600,
        int height = 800,
        MidObject parent = nullptr
    ):
        MidObject(new T{width, height, parent}){}
    /*!
     * \brief getWidth
     * \return
     */
    int getMidWidth() const
    {
        T *obj = static_cast<T*>(this->get());
        return obj->getMidWidth();
    }
    /*!
     * \brief getHeight
     * \return
     */
    int getMidHeight() const
    {
        T *obj = static_cast<T*>(this->get());
        return obj->getMidHeight();
    }
    /*!
     * \brief show
     */
    void midShow()
    {
        T *obj = static_cast<T*>(this->get());
        if (obj) obj->midShow();
    }

    virtual ~MidPanel()
    { }

    void show()
    {
        T *obj = static_cast<T*>(this->get());
        obj->show();
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

    MidPanel(const T& t): MidObject(t){}
};

#endif // __MIDPANEL__
