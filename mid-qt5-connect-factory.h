#ifndef MID_QT5_CONNECT_FACTORY_H
#define MID_QT5_CONNECT_FACTORY_H

#include <functional>
#include "eventtable.h"
#include <map>
#include "mid-object.h"


class MidHandler;

/*!
 * \brief The MidQt5ConnectFactory class
 */
class MidQt5ConnectFactory
{
    using Funcs =  std::function<bool(MidObject, MidHandler*)>;
    using MapOfCallbacks = std::map<EventTable, Funcs>;
    static MapOfCallbacks mapOfCallbacks;
public:
    /*!
     * \brief make
     * \param eventTable
     * \param source
     * \param eventHandler
     * \return
     */
    static bool make
    (
        EventTable eventTable,
        MidObject source,
        MidHandler* eventHandler
    );

protected:
    /*!
     * \brief makeMidQt5Button
     * \param source
     * \param eventhandler
     * \return
     */
    static bool makeMidQt5Button
    (
        MidObject source,
        MidHandler *eventhandler
    );
    /*!
     * \brief makeMidQt5Action
     * \param source
     * \param eventHandler
     * \return
     */
    static bool makeMidQt5Action
    (
        MidObject source,
        MidHandler *eventHandler
    );
};


#endif /*MID_QT5_CONNECT_FACTORY_H*/
