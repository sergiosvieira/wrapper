#include "mid-application.h"
#include "mid-window.h"
#include "mid-button.h"
#include "mid-msg-dialog.h"
// Qt5
#include "mid-qt5-window.h"
#include "mid-qt5-button.h"
#include "mid-qt5-app.h"
#include "mid-qt5-msg-dialog.h"


int main(int argc, char **argv)
{
    MidApplication<MidQt5App> app(argc, argv);
    MidWindow<MidQt5Window> w(800, 600, "MidGui SIGA");
    MidButton<MidQt5Button, MidQt5Window> b(&w, "Hello World Button");
//    b.onclick({
//        MidMessageDialog<MidQt5MsgDialog> d("Alô mundo");
//        d.show();
//    });
    w.addButton(10,20, &b);
    w.show();

    MidMessageDialog<MidQt5MsgDialog> d("Título", "Alô mundo");
    d.show();

    return app.execute();
}
