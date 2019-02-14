#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include "mid-button.h"
#include "mid-qt5-button.h"

#include "window.h"

using std::cout;

class Button: public QObject, public MidButton<MidQt5Button>
{
    Q_OBJECT

    MidWindow<MidQt5Window>* parent = nullptr;
public:
    Button(MidWindow<MidQt5Window>* parent = nullptr,
              const char *title = ""):
        MidButton<MidQt5Button>(parent, title), parent(parent) {}

public slots:
    void clicked()
    {
        cout << "clicked() of Button\n";
        cout.flush();

        //Chama a função slotClick() de Window
        Window* parentInOtherScope = dynamic_cast<Window*>(this->parent);
        if (parentInOtherScope != nullptr)
        {
            parentInOtherScope->slotClick();
        }
    }
};

#endif // BUTTON_H
