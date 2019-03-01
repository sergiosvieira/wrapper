#include "mid-qt5-connect-factory.h"
#include "QPushButton"
#include "QAction"
#include <QTableWidget>
#include "mid-button-handler.h"
#include "mid-action-handler.h"
#include "mid-grid-selected-cell-handler.h"
#include "mid-qt5-button.h"
#include "mid-qt5-action.h"
#include "mid-qt5-grid.h"
#include "mid-events.h"


MidQt5ConnectFactory::MapOfCallbacks MidQt5ConnectFactory::mapOfCallbacks =
{
    {EventTable::BUTTONCLICK, &MidQt5ConnectFactory::makeOnClick},
    {EventTable::ACTIONTRIGERRED, &MidQt5ConnectFactory::makeMidQt5Action},
    {EventTable::GRIDSELECTEDCELL, &MidQt5ConnectFactory::makeMidQt5GridSelectedCell}

};

bool MidQt5ConnectFactory::makeOnClick
(
    MidObject source,
    MidObject eventAction
)
{
    QAbstractButton *widget = static_cast<QAbstractButton*>(source.get());
    OnClicked *onClicked = static_cast<OnClicked*>(eventAction.get());
    QObject::connect(widget, &QPushButton::clicked, onClicked->getLambda());
    return true;
}

bool MidQt5ConnectFactory::makeMidQt5Action
(
    MidObject source,
    MidObject eventAction
)
{
//    QAction *obj = static_cast<MidQt5Action*>(source.get());
//    if (obj == nullptr) return false;
//    MidActionHandler* pointer = dynamic_cast<MidActionHandler*>(eventHandler);
//    if (pointer != nullptr && pointer->lambda != nullptr)
//        QObject::connect(obj,
//                         &QAction::triggered,
//                         pointer->lambda);
    return true;
}

bool MidQt5ConnectFactory::makeMidQt5GridSelectedCell
(
    MidObject source,
    MidObject eventAction
)
{
    QTableWidget *widget = static_cast<QTableWidget*>(source.get());
    OnItemDoubleClicked *event = static_cast<OnItemDoubleClicked*>(eventAction.get());
    QObject::connect(widget, &QTableWidget::cellDoubleClicked, event->getLambda());
    return true;
}

bool MidQt5ConnectFactory::make
(        
        MidObject source,
        EventTable eventTable,
        MidObject eventAction
)
{
    auto lambda = mapOfCallbacks.find(eventTable);
    if (lambda == mapOfCallbacks.end())
    {
        throw std::invalid_argument("MidQt5ConnectFactory::make: invalid eventTable");
    }
    return lambda->second(source, eventAction);
}
