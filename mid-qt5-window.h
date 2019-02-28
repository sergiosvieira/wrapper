#ifndef __MID_QT5_WINDOW__
#define __MID_QT5_WINDOW__

#include <QtWidgets>
#include <QString>
#include <iostream>
#include <memory>
#include "mainwindow.h"
#include "mid-object.h"
#include <QMenuBar>

class MidQt5Button;

/*!
 * \brief The MidQt5Window class
 */
class MidQt5Window: public QMainWindow
{
    Q_OBJECT
public:
    /*!
     * \brief MidQt5Window
     * \param width
     * \param height
     * \param title
     * \param parent
     */
    explicit MidQt5Window(int width,
                          int height,
                          const std::string &title,
                          MidObject parent);
    /*!
     * \brief show
     */
    void show();

    /*!
     * \brief showStatusBar
     * \param msg
     */
    void showStatusBar(const std::string &msg)
    {
        statusBar()->showMessage(tr(msg.c_str()));
    }

    /*!
     * \brief setMidLayout
     * \param layout
     */
    void setMidLayout(MidObject layout)
    {
        QWidget *window = new QWidget();
        window-> setLayout(static_cast<QLayout*>(layout.get()));
        setCentralWidget(window);
    }

    void setMidMenuBar(MidObject menuBar)
    {
        QMenuBar *obj = static_cast<QMenuBar*>(menuBar.get());
        if (obj && this->layout())
        {
            this->layout()->setMenuBar(obj);
        }
    }
};

#endif /* __MID_QT5_WINDOW__ */
