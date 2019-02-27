#ifndef MIDQT5CONNECT_H
#define MIDQT5CONNECT_H

#include "mid-connect.h"
#include "mid-qt5-window.h"
#include "mid-qt5-button.h"
#include "button.h"
#include "mid-button-handler.h"
#include "mid-qt5-action.h"
#include "mid-qt5-connect-factory.h"

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
                 MidHandler* eventHandler)
    {
        return MidQt5ConnectFactory::make(eventTable, source, eventHandler);
    }
};

#endif // MIDQT5CONNECT_H
