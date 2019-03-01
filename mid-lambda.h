#ifndef MID_LAMBDA_H
#define MID_LAMBDA_H

#include <memory>
#include "mid-object.h"
#include "eventtable.h"

/*!
 * \brief The MidLambda class
 */
template <typename T>
class MidLambda: public MidObject
{
protected:
    T lambda;
    EventTable type;
public:
    MidLambda(T lambda): lambda(lambda){}
    static std::shared_ptr<MidLambda<T>> makeShared(T lambda)
    {
        return std::make_shared<MidLambda<T>>(lambda);
    }
    T getLambda() const
    {
        return this->lambda;
    }
    EventTable getType() const
    {
        return this->type;
    }
};

#endif // MID_LAMBDA_H
