#ifndef __MIDQT5TEXTEDIT__
#define __MIDQT5TEXTEDIT__

#include <QPlainTextEdit>
#include "mid-qt5-window.h"

#include "mid-window.h"

/*!
 * \brief The MidQt5TextEdit class
 */
class MidQt5TextEdit: public QPlainTextEdit
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    /*!
     * \brief MidQt5TextEdit
     * \param parent
     * \param midID
     * \param title
     */
    MidQt5TextEdit(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0,
                 const char *title = ""):
        QPlainTextEdit (title, (parent != nullptr) ? parent->get() : nullptr)
    {
    }

    /*!
     * \brief MidQt5TextEdit
     * \param parent
     * \param midID
     */
    MidQt5TextEdit(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0):
        QPlainTextEdit ((parent != nullptr) ? parent->get() : nullptr)
    {
    }

    /*!
     * \brief getText
     * \return
     */
    const char * getText()
    {
        QString text = this->toPlainText();
        return text.toStdString().c_str();
    }

    /*!
     * \brief setMidText
     * \param caption
     */
    void setMidText(const char *caption)
    {
        setPlainText(QString(caption));
    }

    /*!
     * \brief setParent
     * \param parent
     */
    void setParent(MidWindow<MidQt5Window>* parent)
    {
        this->parent = parent;
    }
};

#endif // __MIDQT5TEXTEDIT__
