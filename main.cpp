#include "mid-window.h"
#include "mid-qt5.h"

int main(int argc, char **argv)
{
    MidWindow<MidQt5> w(800, 600);
    w.show();
    return 0;
}
