#include "mid-application.h"
#include "mid-window.h"
#include "mid-button.h"
#include "mid-msg-dialog.h"
// Qt5
#include "mid-qt5-window.h"
#include "mid-qt5-button.h"
#include "mid-qt5-app.h"
#include "mid-qt5-msg-dialog.h"


#include "button.h"
#include "window.h"

#include "mid-connect.h"
#include "mid-qt5-connect.h"

#include "mid-qt5-handler.h"

int main(int argc, char **argv)
{
    MidApplication<MidQt5App> app(argc, argv);
    Window w(800, 600, "MidGui SIGA");
    Button b(&w, "Hello World Button");
    //w.connect<MidQt5Button, MidQt5Window>(&b, SIGNAL(clicked()), &w, SLOT(clicked()));

    QObject *obj1 = (QObject*) b.ref<MidQt5Button>();
    // Connecting ckicked() of QPushButton with clicked() of Button
    //QObject::connect(obj1, SIGNAL(clicked()), &b, SLOT(clicked())); //ok

    QPushButton *objn = (QPushButton*) b.ref<MidQt5Button>();
    /*QObject::connect(objn, &QPushButton::clicked, [&]()
    {
        MidMessageDialog<MidQt5MsgDialog> msgDlg(&w, "SIGA", "This is a SIGA message");
            msgDlg.show();
    });*/

    MidConnect<MidQt5Connect> connector (&w);
    MidQT5Handler qt5Handler;
    connector.connect(&b, EventTable::BUTTONCLICK, &qt5Handler);

    w.show();

    return app.execute();
}
