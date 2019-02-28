#ifndef __MIDQT5PANEL__
#define __MIDQT5PANEL__

#include <QtWidgets>
#include <QString>
#include <iostream>
#include <memory>
#include "mainwindow.h"
#include "mid-window.h"
#include "mid-qt5-window.h"

/*!
 * \brief The MidQt5Panel class
 */
class MidQt5Panel: public QWidget
{
    Q_OBJECT
public:
    /*!
     * \brief MidQt5Panel
     * \param parent
     * \param width
     * \param height
     */
    explicit MidQt5Panel
    (
            int width = 600,
            int height = 800,
            MidObject parent = nullptr
    ) : QWidget(static_cast<QWidget*>(parent.get()))
    {
        this->resize(width, height);
    }

    /*!
     * \brief show
     */
    void show(){}

    /*!
    \brief ~MidQt5Panel
    */
    virtual ~MidQt5Panel() {}
    /*!
     * \brief setMidLayout
     * \param layout
     */
    void setMidLayout(MidObject layout)
    {
        setLayout(static_cast<QLayout*>(layout.get()));
    }
};

#endif // __MIDQT5PANEL__
