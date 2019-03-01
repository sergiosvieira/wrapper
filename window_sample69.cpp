#include "window_sample69.h"
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

WindowSample69::WindowSample69(int width,
           	   int height,
               const std::string &title,
               MidObject parent):
    MidWindow<MidQt5Window>(width, height, title, parent)
{
    long long id = 1;
    MidLayout<MidQt5VerticalLayout> *vLayout = new MidLayout<MidQt5VerticalLayout>();
    this->toolBar = new MidToolBar<MidQt5ToolBar>(id++, "SIGA", *this);


    this->setMidLayout(*vLayout);

    MenuBar* menuBar = new MenuBar(id++, nullptr);
    Menu* menuFile = new Menu(id++, "File", nullptr);
    Menu* viewFile = new Menu(id++, "View", nullptr);
    Menu* orientation = new Menu(id++, "View", *viewFile); //submenu
    Action* saveAction = new Action(id++, "Save", false, false, nullptr);
    Action* newAction = new Action(id++, "New", false, false, nullptr);
    Action* openAction = new Action(id++, "Open", false, false, nullptr);
    Action* checkAction = new Action(id++, "Check", false, false, nullptr);
    Action* radio1Action = new Action(id++, "Radio 1", false, false, nullptr);
    Action* radio2Action = new Action(id++, "Radio 2", false, false, nullptr);
    Action* radio3Action = new Action(id++, "Radio 3", false, false, nullptr);
    Action* radio4Action = new Action(id++, "Radio 4", false, false, nullptr);

    Action* exitAction = new Action(id++, "Exit", false, false, nullptr);
    Action* zoomInAction = new Action(id++, "Zoom in", false, false, nullptr);
    Action* zoomOutAction = new Action(id++, "Zoom out", false, false, nullptr);
    Action* portraitAction = new Action(id++, "Portrait", true, true, nullptr);
    Action* landscapeAction = new Action(id++, "Landscape", true, false, nullptr);
    saveAction->addMidIcon("Save", "SIGA.png");
    this->toolBar->addMidAction(*saveAction);

    menuFile->addMidAction(*saveAction);
    menuFile->addMidAction(*newAction);
    menuFile->addMidAction(*openAction);
    menuFile->addMidAction(*checkAction);
    menuFile->addMidAction(*radio1Action);
    menuFile->addMidAction(*radio1Action);
    menuFile->addMidAction(*radio2Action);
    menuFile->addMidAction(*radio3Action);
    menuFile->addMidAction(*radio4Action);

    viewFile->addMidAction(*zoomInAction);
    viewFile->addMidAction(*zoomOutAction);
    viewFile->addMidSeparator();  //Inserts a separator
    viewFile->addMidMenu(*orientation);  //Insert a submenu
    orientation->addMidAction(*portraitAction);
    orientation->addMidAction(*landscapeAction);
    menuBar->addMidMenu(*menuFile);
    menuBar->addMidMenu(*viewFile);
    this->setMidMenuBar(*menuBar);
}

WindowSample69::~WindowSample69()
{

}


