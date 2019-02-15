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
    Window window(800, 600, "MidGui SIGA QT5");
    Button b1(&window, "Hello World Button");
    MidConnect<MidQt5Connect> connector (&window);
    MidQT5Handler qt5Handler ([&](){
        MidMessageDialog<MidQt5MsgDialog> m(&window, "SIGA", "Hello world!");
        m.show();
    });
    connector.connect(&b1, EventTable::BUTTONCLICK, &qt5Handler);
    window.show();
    return app.execute();
}
