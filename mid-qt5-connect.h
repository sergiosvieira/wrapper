#ifndef MIDQT5CONNECT_H
#define MIDQT5CONNECT_H

#include "mid-connect.h"
#include "mid-qt5-window.h"
#include "mid-qt5-button.h"
#include "button.h"
#include "mid-handler.h"

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
        QPushButton *obj = static_cast<MidQt5Button*>(parent->get());
        if (obj == nullptr) return false;
        if (eventTable == EventTable::BUTTONCLICK)
        {
            if (eventhandler->lambda != nullptr)
                QObject::connect(obj, 
                                 &QPushButton::clicked, 
                                 eventhandler->lambda);
        }
        return true;
    }
};

#endif // MIDQT5CONNECT_H
