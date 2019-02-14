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


int main(int argc, char **argv)
{
    MidApplication<MidQt5App> app(argc, argv);
    Window w(800, 600, "MidGui SIGA");
    Button b(&w, "Hello World Button");
    w.connect<MidQt5Button, MidQt5Window>(&b, SIGNAL(clicked()), &w, SLOT(clicked()));
    w.show();
    return app.execute();
}
