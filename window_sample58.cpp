#include "window_sample58.h"
#include "button.h"
#include "checkbox.h"
#include "textfield.h"
#include "mid-msg-dialog.h"
#include "mid-qt5-msg-dialog.h"
#include "mid-connect.h"
#include "mid-qt5-connect.h"
#include "mid-qt5-button-handler.h"
#include "mid-qt5-action-handler.h"
#include "mid-layout.h"
#include "midqtverticallayout.h"
#include "mid-qt5-horizontal-layout.h"
#include "radio-button.h"
#include "progress-bar.h"
#include "group-box.h"
#include "textlabel.h"
#include "spin-box.h"
#include "date-edit.h"
#include "date.h"
#include "mid-date.h"
#include "combo-box.h"
#include "tab.h"
#include "menu-bar.h"
#include "menu.h"
#include "action.h"
#include "line.h"
#include "textEdit.h"
#include "panel.h"
#include "tabPage.h"
#include "tabPage.h"

#include "mid-qt5-status-bar.h"
#include "mid-status-bar.h"

WindowSample58::WindowSample58(int width,
           	   int height,
               const std::string &title,
               MidObject parent):
    MidWindow<MidQt5Window>(width, height, title, parent)
{
    long long id = 1;
    MidLayout<MidQt5HorizontalLayout> *hLayout = new MidLayout<MidQt5HorizontalLayout>();
    MidStatusBar<MidQt5StatusBar>* statusBar = new MidStatusBar<MidQt5StatusBar>(id++, "Show the settings dialog", *this);

    this->setMidLayout(*hLayout);

    MenuBar* menuBar = new MenuBar(id++, nullptr);
    Menu* menuFile = new Menu(id++, "File", nullptr);
    Menu* menuEdit = new Menu(id++, "Edit", nullptr);
    Menu* menuScraps = new Menu(id++, "Scraps", nullptr);
    Menu* menuView = new Menu(id++, "View", nullptr);
    Menu* menuTools = new Menu(id++, "Tools", nullptr);
    Menu* menuBrowser = new Menu(id++, "Browser", nullptr);
    Menu* menuHelp = new Menu(id++, "Help", nullptr);
    Action* saveAction = new Action(id++, "Save", false, false, nullptr);
    Action* exitAction = new Action(id++, "Exit", false, false, nullptr);
    menuFile->addMidAction(*saveAction);
    menuFile->addMidAction(*exitAction);
    menuBar->addMidMenu(*menuFile);

    menuBar->addMidMenu(*menuEdit);
    menuBar->addMidMenu(*menuScraps);
    menuBar->addMidMenu(*menuView);
    menuBar->addMidMenu(*menuTools);
    menuBar->addMidMenu(*menuBrowser);

    menuBar->addMidMenu(*menuHelp);
    hLayout->setMidMenuBar(*menuBar);

    MidConnect<MidQt5Connect> *connector  = new MidConnect<MidQt5Connect>(*this);
    MidQT5ActionHandler qt5ActionHandler ([&](){
        MidMessageDialog<MidQt5MsgDialog> m(id++, "SIGA", "Action trigerred!", *this);
        m.show();
        return true;
    });
    connector->connect(*saveAction, EventTable::ACTIONTRIGERRED, &qt5ActionHandler);

    //Tab 1
    this->tab1 = new Tab(id++, "tab1", nullptr);
    this->base1 = new TabPage(id++, 200, 600, "base1", nullptr);
    this->base2 = new TabPage(id++, 200, 600, "base2", nullptr);
    MidLayout<MidQt5VerticalLayout> *vLayoutTab1 = new MidLayout<MidQt5VerticalLayout>();
    this->base1->setMidLayout(*vLayoutTab1);
    tab1->addMidTab(*base1, "Scrapbbok");
    tab1->addMidTab(*base2, "Search");

    //Tab 2
    this->tab2 = new Tab(id++, "tab1", nullptr);
    this->base3  = new TabPage(id++, 400, 600, "base1", nullptr);
    this->base4  = new TabPage(id++, 400, 600, "base2", nullptr);
    this->base5  = new TabPage(id++, 400, 600, "base1", nullptr);
    this->base6  = new TabPage(id++, 400, 600, "base2", nullptr);
    this->base7  = new TabPage(id++, 400, 600, "base1", nullptr);
    this->base8  = new TabPage(id++, 400, 600, "base2", nullptr);
    this->base9  = new TabPage(id++, 400, 600, "base1", nullptr);
    this->base10 = new TabPage(id++, 400, 600, "base2", nullptr);
    MidLayout<MidQt5VerticalLayout> *vLayoutTab2 = new MidLayout<MidQt5VerticalLayout>();
    this->base1->setMidLayout(*vLayoutTab2);
    tab2->addMidTab(*base3, "Café Menu");
    tab2->addMidTab(*base4, "Scraps");
    tab2->addMidTab(*base5, "Cookies");
    tab2->addMidTab(*base6, "Web");
    tab2->addMidTab(*base7, "Forum");
    tab2->addMidTab(*base8, "Journal");
    tab2->addMidTab(*base9, "Notebook");
    tab2->addMidTab(*base10, "Refrish");

    hLayout->add(*tab1);
    hLayout->add(*tab2);
    this->setMidLayout(*hLayout);
}

WindowSample58::~WindowSample58()
{

}


