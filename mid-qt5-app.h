#ifndef MID_QT5_APP_H
#define MID_QT5_APP_H

#include <QtWidgets>
#include <iostream>

/*!
 * \brief The MidQt5App class
 */
class MidQt5App: public QApplication
{
public:
    /*!
     * \brief MidQt5App
     * \param argc
     * \param argv
     */
    MidQt5App(int argc, char **argv):
        QApplication(argc, argv){}
    /*!
     * \brief notify
     * \param receiver
     * \param event
     * \return
     */
    bool notify(QObject *receiver, QEvent *event) override
    {
        return QApplication::notify(receiver, event);
    }
    /*!
     * \brief execute
     * \return
     */
    int execute()
    {
        return this->exec();
    }
};

#endif /* MID_QT5_APP_H */
