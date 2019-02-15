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

    MidConnect<MidQt5Connect> connector (&w);
    MidQT5Handler qt5Handler (
                []()
              {
                 cout << "Event called in MidQT5Handler (Treating it)" << endl << endl;
              });
    connector.connect(&b, EventTable::BUTTONCLICK, &qt5Handler);
    w.show();

    return app.execute();
}
