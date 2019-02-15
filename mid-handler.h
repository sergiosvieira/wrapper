#ifndef MIDHANDLER_H
#define MIDHANDLER_H

class MidHandler
{
public:
    MidHandler(void (*procedure)()):
        procedure(procedure)
    {}


    ~MidHandler() {}
    //virtual void procedure() = 0;

    void (*procedure)() = nullptr;
};

#endif // MIDHANDLER_H
