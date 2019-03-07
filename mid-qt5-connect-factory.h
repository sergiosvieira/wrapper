#ifndef MID_QT5_CONNECT_FACTORY_H
#define MID_QT5_CONNECT_FACTORY_H

#include <QWidget>
#include <functional>
#include <map>
#include "eventtable.h"
#include "mid-object.h"


class MidHandler;

/*!
 * \brief The MidQt5ConnectFactory class
 */
class MidQt5ConnectFactory
{
    using Funcs =  std::function<bool(MidObject, MidObject)>;
    using MapOfCallbacks = std::map<EventTable, Funcs>;
    static MapOfCallbacks mapOfCallbacks;
public:
    /*!
     * \brief make
     * \param source
     * \param eventType
     * \param eventAction
     * \return
     */
    static bool make
    (        
        MidObject source,
        EventTable eventType,
        MidObject eventAction
    );
    static bool make(MidObject source, MidObject action);
protected:
    /*!
     * \brief makeMidQt5Button
     * \param source
     * \param eventAction
     * \return
     */
    static bool makeOnClick
    (
        MidObject source,
        MidObject eventAction
    );
    /*!
     * \brief makeMidQt5Action
     * \param source
     * \param eventAction
     * \return
     */
    static bool makeMidQt5Action
    (
        MidObject source,
        MidObject eventAction
    );
    /*!
     * \brief makeMidQt5GridSelectedCell
     * \param source
     * \param eventAction
     * \return
     */
    static bool makeMidQt5GridSelectedCell
    (
        MidObject source,
        MidObject eventAction
    );
};

#endif /*MID_QT5_CONNECT_FACTORY_H*/
