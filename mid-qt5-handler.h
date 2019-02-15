#ifndef MIDQT5HANDLER_H
#define MIDQT5HANDLER_H

#include <iostream>
using std::cout;
using std::endl;

class MidQT5Handler: public MidHandler
{
public:
    MidQT5Handler() {}
    ~MidQT5Handler() {}
    virtual void procedure()
    {
        cout << "Event called in MidQT5Handler (Treating it)" << endl << endl;
    }
};

#endif // MIDQT5HANDLER_H
