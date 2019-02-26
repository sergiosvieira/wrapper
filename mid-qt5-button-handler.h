#ifndef MIDQT5HANDLER_H
#define MIDQT5HANDLER_H

#include <iostream>
#include "mid-button-handler.h"

class MidQT5ButtonHandler: public MidButtonHandler
{
public:	
    MidQT5ButtonHandler(ButtonLambda y): MidButtonHandler(y){}
    ~MidQT5ButtonHandler() {}
};

#endif // MIDQT5HANDLER_H
