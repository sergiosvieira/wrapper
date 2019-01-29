#include "mid-window.h"
#include "mid-qt5.h"
#include "Midqt5button.h"
#include "Midbutton.h"

int main(int argc, char **argv)
{
    //MidWindow<MidQt5> w(800, 600);
    MidWindow<MidQt5> w(800, 600);
    MidButton<MidQt5Button> b;
    w.addButton(10,20, b);
    w.show();
    return 0;
}
