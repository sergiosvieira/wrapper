#ifndef MIDACTIONHANDLER_H
#define MIDACTIONHANDLER_H

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

#endif // MIDACTIONHANDLER_H
