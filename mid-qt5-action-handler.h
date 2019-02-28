#ifndef MID_QT5_ACTION_HANDLER_H
#define MID_QT5_ACTION_HANDLER_H

#include <iostream>
#include "mid-action-handler.h"

/*!
 * \brief The MidQT5ActionHandler class
 */
class MidQT5ActionHandler: public MidActionHandler
{
public:
    /*!
     * \brief MidQT5ActionHandler
     * \param y
     */
    MidQT5ActionHandler(ActionLambda y): MidActionHandler(y){}
    /*!
     * \brief ~MidQT5ActionHandler
     */
    virtual ~MidQT5ActionHandler() {}
};

#endif // MID_QT5_ACTION_HANDLER_H
