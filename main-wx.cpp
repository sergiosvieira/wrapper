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

#define MAINWINDOWS INT WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,PSTR lpCmdLine, INT nCmdShow)

#define MAINOSX int main(int argc, char **argv)

#define WINDOWS

#ifdef WINDOWS
MAINWINDOWS
#endif // WINDOWS

#ifdef OSX
MAINOSX
#endif // MAC

{
    int argc = 0;
    char *argv = {};

    MidApplication<MidWxApp> app(argc, &argv);
    MidWindow<MidWxWindow> window(800, 600, "MidGui");
    MidButton<MidWxButton> b1(&window, "Botao 01");

    wxButton* ref = (wxButton*)b1.ref<MidWxButton>();
    ref->Bind(wxEVT_COMMAND_BUTTON_CLICKED,
        [](wxCommandEvent&) {
        int a = 10;
        a = 20;
    },
        BUTTON_Hello);

    window.show();
    return app.execute();
}
