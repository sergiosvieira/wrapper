#ifndef MIDHANDLER_H
#define MIDHANDLER_H

#include <functional>


class MidHandler
{
public:
	using Lambda = std::function<void()>;			
    MidHandler(Lambda y): lambda(y){}
    ~MidHandler() {}
	Lambda lambda;    
};

#endif // MIDHANDLER_H
