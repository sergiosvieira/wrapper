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
            MidObject parent = nullptr,
            int width = 600,
            int height = 800
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
    ~MidQt5Panel() {}

    /*!
     * \brief setMidLayout
     * \param layout
     */
    void setMidLayout(QLayout* layout)
    {
        setLayout(layout);
    }
};

#endif // __MIDQT5PANEL__
