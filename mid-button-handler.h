#ifndef _MIDBUTTONHANDLER__
#define _MIDBUTTONHANDLER__

#include <functional>

class MidButtonHandler
{
public:
    using ButtonLambda = std::function<bool()>;
    MidButtonHandler(ButtonLambda y): lambda(y){}
    ~MidButtonHandler() {}
    ButtonLambda lambda;
};

#endif // _MIDBUTTONHANDLER__
