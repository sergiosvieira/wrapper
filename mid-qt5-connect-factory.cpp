#include "mid-qt5-connect-factory.h"
#include "QPushButton"
#include "QAction"
#include "mid-button-handler.h"
#include "mid-action-handler.h"
#include "mid-qt5-button.h"
#include "mid-qt5-action.h"


MidQt5ConnectFactory::MapOfCallbacks MidQt5ConnectFactory::mapOfCallbacks =
{
    {EventTable::BUTTONCLICK, &MidQt5ConnectFactory::makeMidQt5Button},
    {EventTable::ACTIONTRIGERRED, &MidQt5ConnectFactory::makeMidQt5Action}

};

bool MidQt5ConnectFactory::makeMidQt5Button
(
        MidObject* source,
        MidHandler* eventHandler
)
{
    QPushButton *obj = static_cast<MidQt5Button*>(source->get());
    if (obj == nullptr) return false;
    MidButtonHandler* pointer = dynamic_cast<MidButtonHandler*>(eventHandler);
    if (pointer != nullptr && pointer->lambda != nullptr)
    QObject::connect
    (
        obj,
        &QPushButton::clicked,
        pointer->lambda
    );
    return true;
}

bool MidQt5ConnectFactory::makeMidQt5Action
(
        MidObject* source,
        MidHandler* eventHandler
)
{
    QAction *obj = static_cast<MidQt5Action*>(source->get());
    if (obj == nullptr) return false;
    MidActionHandler* pointer = dynamic_cast<MidActionHandler*>(eventHandler);
    if (pointer != nullptr && pointer->lambda != nullptr)
        QObject::connect(obj,
                         &QAction::triggered,
                         pointer->lambda);
    return true;
}

bool MidQt5ConnectFactory::make
(
        EventTable eventTable,
        MidObject* source,
        MidHandler* eventHandler
)
{
    auto lambda = mapOfCallbacks.find(eventTable);
    if (lambda == mapOfCallbacks.end())
    {
        throw std::invalid_argument("MidQt5ConnectFactory::make: invalid eventTable");
    }
    return lambda->second(source, eventHandler);
}
