#ifndef __MIDWXBUTTONHANDLER__
#define __MIDWXBUTTONHANDLER__

#include <iostream>

class MidWxButtonHandler: public MidButtonHandler
{
public:	
    MidWxButtonHandler(ButtonLambda y): MidButtonHandler(y){}
    ~MidWxButtonHandler() {}
};

#endif // __MIDWXBUTTONHANDLER__
