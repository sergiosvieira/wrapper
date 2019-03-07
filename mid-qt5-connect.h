#ifndef MID_QT5_CONNECT_H
#define MID_QT5_CONNECT_H

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
     * \param source
     * \param eventType
     * \param eventAction
     */
    MidQt5Connect(MidObject source,
                  EventTable eventType,
                  MidObject eventAction)
    {
        MidQt5ConnectFactory::make(source, eventType, eventAction);
//        MidQt5ConnectFactory::make(source, eventAction);
    }
};

#endif // MID_QT5_CONNECT_H
