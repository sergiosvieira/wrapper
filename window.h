#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include "mid-window.h"
#include "mid-qt5-window.h"

#include "mid-msg-dialog.h"
#include "mid-qt5-msg-dialog.h"

using std::cout;

class Window: public MidWindow<MidQt5Window>
{
public:
    Window(int width,
           int height,
           const char *title):
        MidWindow<MidQt5Window>(width, height, title){}
    void slotClick()
    {
        MidMessageDialog<MidQt5MsgDialog> msgDlg(this, "SIGA", "This is a SIGA message");
        msgDlg.show();

        /*cout << "slotClick() of Window\n";
        cout.flush();*/

        //Chama a função processButtonClick() of MidQt5Button
        //this->get()->processButtonClick();
    }
};

#endif // WINDOW_H
