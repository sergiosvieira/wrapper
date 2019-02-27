#ifndef MIDACTIONHANDLER_H
#define MIDACTIONHANDLER_H

#include <functional>
#include "mid-handler.h"

class MidActionHandler: public MidHandler
{
public:
    using ActionLambda = std::function<bool()>;
    MidActionHandler(ActionLambda y): lambda(y){}
    ~MidActionHandler() {}
    ActionLambda lambda;
};

#endif // MIDACTIONHANDLER_H
