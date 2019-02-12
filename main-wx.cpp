#include "mid-application.h"
#include "mid-window.h"
#include "mid-button.h"
#include "mid-msg-dialog.h"
// wxWidgets
#include "mid-wx-app.h"
#include "mid-wx-window.h"
#include "mid-wx-button.h"
#include "mid-wx-msg-dialog.h"

#include <wx/msgdlg.h>


int main(int argc, char **argv)
{
    MidApplication<MidWxApp> app(argc, argv);
    MidWindow<MidWxWindow> window(800, 600, "MidGui");
    MidButton<MidWxButton> b1(&window, "Botão 01");
    //window.addChild(&b1);
    window.show();
    return app.execute();
}
