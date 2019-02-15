#ifndef MIDQT5HANDLER_H
#define MIDQT5HANDLER_H

#include <iostream>
using std::cout;
using std::endl;

class MidQT5Handler: public MidHandler
{
private:
    //void (*procedure)() = nullptr;

public:
    MidQT5Handler(void (*procedure)()):
        MidHandler(procedure)
    {}
    ~MidQT5Handler() {}


    /*virtual void procedure()
    {
        cout << "Event called in MidQT5Handler (Treating it)" << endl << endl;
    }*/
};

#endif // MIDQT5HANDLER_H
