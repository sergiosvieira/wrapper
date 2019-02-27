#ifndef __MID_QT5_CONNECT_FACTORY__
#define __MID_QT5_CONNECT_FACTORY__

#include <functional>
#include "eventtable.h"
#include <map>
#include "mid-object.h"


class MidHandler;

class MidQt5ConnectFactory
{
    using Funcs =  std::function<bool(MidObject*, MidHandler*)>;
    using MapOfCallbacks = std::map<EventTable, Funcs>;
    static MapOfCallbacks mapOfCallbacks;
public:
    static bool make
    (
        EventTable eventTable,
        MidObject* source,
        MidHandler* eventHandler
    );

protected:
    static bool makeMidQt5Button
    (
        MidObject *source,
        MidHandler *eventhandler
    );
    static bool makeMidQt5Action
    (
        MidObject *source,
        MidHandler *eventHandler
    );
};


#endif /*__MID_QT5_CONNECT_FACTORY__*/
