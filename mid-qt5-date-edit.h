#ifndef MIDQT5BUTTONEDIT_H
#define MIDQT5BUTTONEDIT_H

#include <QDateEdit>
#include "mid-qt5-window.h"

#include "mid-window.h"

#include "mid-qt5-date.h"

class MidQt5DateEdit: public QDateEdit
{
private:
    MidWindow<MidQt5Window>* parent = nullptr;
public:
    MidQt5DateEdit(MidWindow<MidQt5Window>* parent = nullptr,
                 long long int midID = 0,
                   MidQt5Date date = {}):
        QDateEdit (date, (parent != nullptr) ? parent->get() : nullptr)
    {
    }

    void setParent(MidWindow<MidQt5Window>* parent)
    {
        this->parent = parent;
    }
};


#endif // MIDQT5BUTTONEDIT_H
