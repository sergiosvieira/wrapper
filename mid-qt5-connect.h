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

/*!
 * \brief The MidQt5Connect class
 */
class MidQt5Connect: public QObject
{
    Q_OBJECT
private:
    MidWindow<MidQt5Window>* parent = nullptr;

public:
    /*!
     * \brief MidQt5Connect
     * \param parent
     */
    MidQt5Connect(MidWindow<MidQt5Window>* parent = nullptr):
        parent(parent){}
    /*!
     * \brief connect
     * \param source
     * \param eventTable
     * \param eventhandler
     * \return
     */
    bool connect(MidObject* source,
                 EventTable eventTable,
                 MidButtonHandler* eventhandler)
    {
        QPushButton *obj = static_cast<MidQt5Button*>(source->get());
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
    /*!
     * \brief connect
     * \param source
     * \param eventTable
     * \param eventhandler
     * \return
     */
    bool connect(MidObject* source,
                 EventTable eventTable,
                 MidActionHandler* eventhandler)
    {
        QAction *obj = static_cast<MidQt5Action*>(source->get());
        if (obj == nullptr) return false;
        if (eventTable == EventTable::ACTIONTRIGERRED)
        {
            if (eventhandler->lambda != nullptr)
                QObject::connect(obj,
                                 &QAction::triggered,
                                 eventhandler->lambda);
        }
        return true;
    }
};

#endif // MIDQT5CONNECT_H
