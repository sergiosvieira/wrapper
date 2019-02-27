#ifndef MIDQT5CONNECT_H
#define MIDQT5CONNECT_H

#include "mid-connect.h"
#include "mid-qt5-window.h"
#include "mid-qt5-button.h"
#include "button.h"
#include "mid-button-handler.h"
#include "mid-qt5-action.h"
#include "mid-qt5-connect-factory.h"

#include "QObject"
#include "QPushButton"

#include <iostream>

/*!
 * \brief The MidQt5Connect class
 */
class MidQt5Connect: public QObject
{
    Q_OBJECT
public:
    /*!
     * \brief MidQt5Connect
     * \param parent
     */
    MidQt5Connect(MidObject parent = nullptr){}
    /*!
     * \brief connect
     * \param source
     * \param eventTable
     * \param eventhandler
     * \return
     */
    bool connect
    (
        MidObject source,
        EventTable eventTable,
        MidHandler* eventHandler
    )
    {
        return MidQt5ConnectFactory::make(eventTable, source, eventHandler);
    }
};

#endif // MIDQT5CONNECT_H
