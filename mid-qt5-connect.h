#ifndef MIDQT5CONNECT_H
#define MIDQT5CONNECT_H

#include "mid-connect.h"
#include "mid-qt5-window.h"
#include "mid-qt5-button.h"
#include "button.h"
#include "mid-button-handler.h"
#include "mid-qt5-action.h"

#include "QObject"
#include "QPushButton"

#include <iostream>
using std::cout;
using std::endl;

class MidQt5Connect: public QObject
{
    Q_OBJECT
private:
    MidWindow<MidQt5Window>* parent = nullptr;

public:
    MidQt5Connect(MidWindow<MidQt5Window>* parent = nullptr):
        parent(parent){}
    bool connect(MidObject* source,
                 EventTable eventTable,
                 MidHandler* eventhandler)
    {
        if (eventTable == EventTable::BUTTONCLICK)
        {
            QPushButton *obj = static_cast<MidQt5Button*>(source->get());
            if (obj == nullptr) return false;
            MidButtonHandler* pointer = dynamic_cast<MidButtonHandler*>(eventhandler);
            if (pointer != nullptr && pointer->lambda != nullptr)
                QObject::connect(obj, 
                                 &QPushButton::clicked, 
                                 pointer->lambda);
        }
        else if (eventTable == EventTable::ACTIONTRIGERRED)
        {
            QAction *obj = static_cast<MidQt5Action*>(source->get());
            if (obj == nullptr) return false;
            MidActionHandler* pointer = dynamic_cast<MidActionHandler*>(eventhandler);
            if (pointer != nullptr && pointer->lambda != nullptr)
                QObject::connect(obj,
                                 &QAction::triggered,
                                 pointer->lambda);
        }

        return true;
    }
};

#endif // MIDQT5CONNECT_H
