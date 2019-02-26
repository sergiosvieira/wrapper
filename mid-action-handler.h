#ifndef MIDACTIONHANDLER_H
#define MIDACTIONHANDLER_H

#include <functional>

class MidActionHandler
{
public:
    using ActionLambda = std::function<bool()>;
    MidActionHandler(ActionLambda y): lambda(y){}
    ~MidActionHandler() {}
    ActionLambda lambda;
};

#endif // MIDACTIONHANDLER_H
