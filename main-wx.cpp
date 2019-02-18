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

#include "windowWx.h"
#include "buttonWx.h"

#define WIN

#ifdef WIN
    INT WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,PSTR lpCmdLine, INT nCmdShow)
{
    int argc = 0;
    char **argv = {};
#else
    int main(int argc, char **argv)
{
#endif
    MidApplication<MidWxApp> app(argc, argv);
    WindowWx window(800, 600, "MidGui SIGA wxWidgets");
    window.show();
    return app.execute();
}
