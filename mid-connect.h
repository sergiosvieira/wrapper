#ifndef MID_CONNECT_H
#define MID_CONNECT_H

#include "mid-object.h"
#include "mid-window.h"
#include "mid-lambda.h"
#include "eventtable.h"
#include "mid-button-handler.h"
#include "mid-action-handler.h"

#include <iostream>


/*!
 * \brief MidConnect Template
 */
template <class T>
class MidConnect: public MidObject/*, public IMidName*/
{
public:
    /*!
     * \brief MidConnect
     * \param source
     * \param eventType
     * \param eventAction
     */
    MidConnect(MidObject source,
               EventTable eventType,
               MidObject eventAction) :
        MidObject(new T{source, eventType, eventAction})/*,
        IMidName(std::string(typeid(this).name()))*/
    {

    }
};

#endif // MID_CONNECT_H
