#ifndef __MIDWXTAB__
#define __MIDWXTAB__

#include <wx/notebook.h>
#include <wx/panel.h>
#include "mid-wx-window.h"

#include "mid-window.h"

class MidWxTab: public wxNotebook
{
private:
    MidWindow<MidWxWindow>* parent = nullptr;
public:
    MidWxTab(MidWindow<MidWxWindow>* parent = nullptr,
                 long long int midID = 0):
        wxNotebook(
        //(parent->get() != nullptr) ? (wxWindow*) parent->get() : nullptr,
        (parent->get() != nullptr) ? parent->get() : nullptr,
        midID), parent (parent)
    {
    }

    void setParent(MidWindow<MidWxWindow>* parent)
    {
        this->parent = parent;
    }

    void addMidTab(MidObject *object, const char *tabTitle = "")
    {
        wxPanel* pointer = object->ref<wxPanel>();
        AddPage(pointer, tabTitle);

        //Não se deve adicionar um componente diretamente no tab
        //Deve configurar um layout no tab (esse layout deve ter o componente)
    }

    /*template <class L>
    void setMidLayout(MidLayout<L> layout)
    {
        this->get()->setMidLayout(layout.get());
    }*/
};

#endif // __MIDWXTAB__
