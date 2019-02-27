#ifndef MIDHANDLER_H
#define MIDHANDLER_H

#include <functional>


class MidHandler
{
public:
    /*using Lambda = std::function<bool()>;
    MidHandler(Lambda y): lambda(y){}
    ~MidHandler() {}
    Lambda lambda;*/

    MidHandler() {}
    virtual ~MidHandler() {}
};

#endif // MIDHANDLER_H
