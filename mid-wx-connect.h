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
    bool connect(MidObject* source,
                 EventTable eventTable,
                 MidButtonHandler* eventhandler)
        
    {
        if (eventTable == EventTable::BUTTONCLICK)
        {
            MidWxButton *ref = static_cast<MidWxButton*>(source->get());
            //wxButton* ref = (wxButton*)source->ref<MidWxButton>();
            auto& f = eventhandler->lambda;
            ref->Bind(wxEVT_COMMAND_BUTTON_CLICKED,
                [&](wxCommandEvent&) {
                f(); //Calling the function
            },
                //source->getID());
                ref->GetId());
                //BUTTON_Hello);
        }

        return true;
    }
};

#endif // MIDQT5CONNECT_H
