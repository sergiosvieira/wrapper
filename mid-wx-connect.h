#ifndef MIDQT5CONNECT_H
#define MIDQT5CONNECT_H

#include "mid-connect.h"
#include "mid-wx-window.h"
#include "mid-wx-button.h"
#include "buttonWx.h"
#include "mid-button-handler.h"

#include <iostream>
using std::cout;
using std::endl;

class MidWxConnect
{
public:
    MidWxConnect(MidObject parent = nullptr)
        {}
    bool connect(MidObject source,
                 EventTable eventTable,
                 MidHandler* eventhandler)
        
    {
        if (eventTable == EventTable::BUTTONCLICK)
        {
            MidWxButton *ref = static_cast<MidWxButton*>(source.get());

            MidButtonHandler* pointer = dynamic_cast<MidButtonHandler*>(eventhandler);

            auto &f = pointer->lambda;
            ref->Bind(wxEVT_COMMAND_BUTTON_CLICKED,
                [&f](wxCommandEvent&) {
                f(); //Calling the function
                //pointer->lambda();
            },
                ref->GetId());
        }

        return true;
    }
};

#endif // MIDQT5CONNECT_H
