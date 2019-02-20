#ifndef MIDQT5ACTIONHANDLER_H
#define MIDQT5ACTIONHANDLER_H

#include <iostream>
#include "mid-action-handler.h"

class MidQT5ActionHandler: public MidActionHandler
{
public:
    MidQT5ActionHandler(ActionLambda y): MidActionHandler(y){}
    ~MidQT5ActionHandler() {}
};

#endif // MIDQT5ACTIONHANDLER_H
