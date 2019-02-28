#ifndef MID_QT5_LIST_BOX_H
#define MID_QT5_LIST_BOX_H

#include <QListView>
#include "mid-window.h"

/*!
 * \brief The MidQt5ListBox class
 */
class MidQt5ListBox : public QListView
{
private:
    QStringListModel *model = nullptr;
public:
    MidQt5ListBox
    (
            Id id = 0,
            const std::vector<std::string> list = {},
            MidObject parent = nullptr
    ):
        QListView(static_cast<QWidget*>(parent.get()))
    {
        model = new QStringListModel(this);
        QStringList stringList;
        for (auto &str : list) stringList << str.c_str();
        model->setStringList(stringList);
        this->setModel(model);
    }
    virtual ~MidQt5ListBox()
    {
        delete this->model;
    }

};

#endif // MID_QT5_LIST_BOX_H
