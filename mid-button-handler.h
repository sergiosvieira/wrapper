#ifndef MID_BUTTON_HANDLER_H
#define MID_BUTTON_HANDLER_H

#include <functional>
#include "mid-handler.h"

/*!
 * \brief The MidButtonHandler class
 */
class MidButtonHandler: public MidHandler
{
public:
    /*!
     * ButtonLambda
     */
    using ButtonLambda = std::function<bool()>;
    /*!
     * \brief MidButtonHandler
     * \param y
     */
    MidButtonHandler(ButtonLambda y): lambda(y){}
    /*!
     * \brief ~MidButtonHandler
     */
    virtual ~MidButtonHandler() {}
    /*!
     * \brief lambda
     */
    ButtonLambda lambda;
};

#endif // MID_BUTTON_HANDLER_H
