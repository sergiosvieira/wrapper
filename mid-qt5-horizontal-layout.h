#ifndef MID_QT5_HORIZONTAL_LAYOUT_H
#define MID_QT5_HORIZONTAL_LAYOUT_H

#include <QHBoxLayout>
#include <QWidget>
#include <QPushButton>
#include <QMenuBar>
#include "mid-object.h"

/*!
 * \brief The MidQt5HorizontalLayout class
 */
class MidQt5HorizontalLayout: public QHBoxLayout
{
public:
    /*!
     * \brief MidQt5HorizontalLayout
     */
    MidQt5HorizontalLayout():
        QHBoxLayout(){}
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
     * \brief ~MidQt5HorizontalLayout
     */
    virtual ~MidQt5HorizontalLayout() {}
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


#endif // MID_QT5_HORIZONTAL_LAYOUT_H
