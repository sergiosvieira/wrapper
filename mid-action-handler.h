#ifndef MID_ACTION_HANDLER_H
#define MID_ACTION_HANDLER_H

#include <functional>
#include "mid-handler.h"

/*!
 * \brief The MidActionHandler class
 */
class MidActionHandler: public MidHandler
{
public:
    /*!
     * ActionLambda
     */
    using ActionLambda = std::function<bool()>;
    /*!
     * \brief MidActionHandler
     * \param y
     */
    MidActionHandler(ActionLambda y): lambda(y){}
    /*!
     * \brief ~MidActionHandler
     */
    virtual ~MidActionHandler() {}
    /*!
     * \brief lambda
     */
    ActionLambda lambda;
};

#endif // MID_ACTION_HANDLER_H
