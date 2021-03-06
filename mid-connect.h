#ifndef MID_CONNECT_H
#define MID_CONNECT_H

#include "mid-object.h"
#include "mid-window.h"

#include "eventtable.h"
#include "mid-button-handler.h"
#include "mid-action-handler.h"

#include <iostream>

/*!
 * \brief MidConnect Template
 */
template <class T>
class MidConnect: public MidObject
{
public:
    /*!
     * \brief MidConnect
     * \param parent
     */
    MidConnect(MidObject parent = nullptr) :
        MidObject(new T{ parent }) {}
    /*!
     * \brief connect
     * \param source: source of the event
     * \param signal: function that is going to trigger the event
     *
     * \return
     */
    bool connect
    (
        MidObject source,
        EventTable eventTable,
        MidHandler* eventhandler
    )
    {
        T *obj = static_cast<T*>(this->get());
        obj->connect(source, eventTable, eventhandler);
        return true;
    }
};

#endif // MID_CONNECT_H
