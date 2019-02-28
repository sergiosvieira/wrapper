#include "mid-application.h"
#include "mid-qt5-app.h"
#include "window.h"

int main(int argc, char **argv)
{
    MidApplication<MidQt5App> app(argc, argv);
    Window window(800, 600, "MidGui SIGA QT5");
    window.show();

    return app.execute();
}
