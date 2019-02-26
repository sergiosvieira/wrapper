#ifndef MIDCONNECT_H
#define MIDCONNECT_H

#include "mid-object.h"
#include "mid-window.h"

#include "eventtable.h"
#include "mid-button-handler.h"
#include "mid-action-handler.h"

#include <iostream>

template <class T>
class MidConnect: public MidObject
{
    MidObject *parent = nullptr;
    T *ptr = nullptr;
public:
    template <class U>
    MidConnect(MidWindow<U>* parent = nullptr) :
        parent(parent),
        ptr(new T{ parent }),
        MidObject(ptr) {}

    /*!
     * \brief connect
     * \param source: source of the event
     * \param signal: function that is going to trigger the event
     *
     * \return
     */
    bool connect(MidObject* source,
                 EventTable eventTable,
                 MidButtonHandler* eventhandler)
    {
        if (ptr == nullptr) throw std::exception();
        ptr->connect(source, eventTable, eventhandler);
        return true;
    }

    bool connect(MidObject* source,
                 EventTable eventTable,
                 MidActionHandler* eventhandler)
    {
        if (ptr == nullptr) throw std::exception();
        ptr->connect(source, eventTable, eventhandler);
        return true;
    }
};

#endif // MIDCONNECT_H
