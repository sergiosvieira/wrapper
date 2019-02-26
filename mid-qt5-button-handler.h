#ifndef MIDQT5HANDLER_H
#define MIDQT5HANDLER_H

#include <iostream>
#include "mid-button-handler.h"

/*!
 * \brief The MidQT5ButtonHandler class
 */
class MidQT5ButtonHandler: public MidButtonHandler
{
public:	
    /*!
     * \brief MidQT5ButtonHandler
     * \param y
     */
    MidQT5ButtonHandler(ButtonLambda y): MidButtonHandler(y){}
    /*!
     * \brief ~MidQT5ButtonHandler
     */
    virtual ~MidQT5ButtonHandler() {}
};

#endif // MIDQT5HANDLER_H
