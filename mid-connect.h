#ifndef MIDCONNECT_H
#define MIDCONNECT_H

#include "mid-object.h"
#include "mid-window.h"

#include "eventtable.h"
#include "button.h"
#include "mid-handler.h"

template <class T>
class MidConnect: public MidObject
{
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    template <class U>
    MidConnect(MidWindow<U>* parent = nullptr):
        parent(parent),
        MidObject((ptr = new T{parent})){}

    /*!
     * \brief connect
     * \param source: source of the event
     * \param signal: function that is going to trigger the event
     *
     * \return
     */
    bool connect(MidObject* source,
                 EventTable eventTable,
                 MidHandler* eventhandler)
    {
        ptr->connect(source, eventTable, eventhandler);
    }
};

#endif // MIDCONNECT_H
