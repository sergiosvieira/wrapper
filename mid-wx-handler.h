#ifndef MIDQT5HANDLER_H
#define MIDQT5HANDLER_H

#include <iostream>

class MidWxHandler: public MidHandler
{
public:	
    MidWxHandler(Lambda y): MidHandler(y){}
    ~MidWxHandler() {}
};

#endif // MIDQT5HANDLER_H
