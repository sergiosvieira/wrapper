#include "window_sample117.h"
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

WindowSample117::WindowSample117(int width,
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
    Action* saveAction = new Action(id++, "Save", ActionType::DEFAULT, false,"", nullptr);
    Action* exitAction = new Action(id++, "Exit", ActionType::DEFAULT, false,"", nullptr);
    Action* zoomInAction = new Action(id++, "Zoom in", ActionType::DEFAULT, false,"", nullptr);
    Action* zoomOutAction = new Action(id++, "Zoom out", ActionType::DEFAULT, false,"", nullptr);
    Action* portraitAction = new Action(id++, "Portrait", ActionType::DEFAULT, true,"", nullptr);
    Action* landscapeAction = new Action(id++, "Landscape", ActionType::DEFAULT, false,"", nullptr);
    saveAction->addMidIcon("Save", "01.png");
    exitAction->addMidIcon("Exit", "02.png");
    zoomInAction->addMidIcon("Zoom In", "03.png");
    zoomOutAction->addMidIcon("Zoom Out", "04.png");

    this->toolBar->addMidAction(*saveAction);
    this->toolBar->addMidAction(*exitAction);
    this->toolBar->addMidAction(*zoomInAction);
    this->toolBar->addMidAction(*zoomOutAction);

    menuFile->addMidAction(*saveAction);
    menuFile->addMidAction(*exitAction);
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

WindowSample117::~WindowSample117()
{

}
