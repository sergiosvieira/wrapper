#ifndef MIDQTVERTICALLAYOUT_H
#define MIDQTVERTICALLAYOUT_H

#include <QVBoxLayout>
#include <QWidget>
#include <QPushButton>
#include <QMenuBar>
#include "mid-object.h"

/*!
 * \brief The MidQt5VerticalLayout class
 */
class MidQt5VerticalLayout: public QVBoxLayout
{
public:
    /*!
     * \brief MidQt5VerticalLayout
     */
    MidQt5VerticalLayout():
        QVBoxLayout(){}

    /*!
     * \brief add
     * \param object
     */
    void add(MidObject object)
    {
        QWidget* widget = static_cast<QWidget*>(object.get());
        if (widget != nullptr) addWidget(widget);
    }

    /*!
     * \brief addMidLayout
     * \param object
     */
    void addMidLayout(MidObject object)
    {
        QLayout* layout = static_cast<QLayout*>(object.get());
        if (layout != nullptr) addLayout(layout);
    }

    /*!
    * \brief ~MidQt5VerticalLayout
    * */
    ~MidQt5VerticalLayout() {}

    /*!
     * \brief setMidMenuBar
     * \param object
     */
    void setMidMenuBar(MidObject object)
    {
        QMenuBar* menuBar = static_cast<QMenuBar*>(object.get());
        this->setMenuBar(menuBar);
    }
};

#endif // MIDQTVERTICALLAYOUT_H
