#include "window.h"
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
#include "line.h"
#include "panel.h"
#include "menu-bar.h"
#include "menu.h"
#include "action.h"
#include "textEdit.h"

Window::Window(int width,
           	   int height,
           	   const char *title):
	MidWindow<MidQt5Window>(width, height, title)
{
    long long id = 1;
    MidLayout<MidQt5VerticalLayout> *mainVertical = new MidLayout<MidQt5VerticalLayout>();
    MidLayout<MidQt5HorizontalLayout> *h1 = new MidLayout<MidQt5HorizontalLayout>();

    Button *b1 = new Button(nullptr, id++, "Hello World Button 1");
    RadioButton *rb1 = new RadioButton(nullptr, id++, "Radio Button 1");

    MidLayout<MidQt5VerticalLayout> *h2 = new MidLayout<MidQt5VerticalLayout>();

    TextField * tf = new TextField(nullptr, id++, "Text field text");
    Checkbox *c4 = new Checkbox(nullptr, id++, "Hello World Button 4");

    h1->add(b1);
    h1->add(rb1);
    h2->add(tf);

    Line *hl = new Line(nullptr, id++, MidLineType::HORIZONAL);
    h2->add(hl);

    h2->add(c4);

    MidLayout<MidQt5HorizontalLayout> *h3 = new MidLayout<MidQt5HorizontalLayout>();

    Button *b5 = new Button(nullptr, id++, "Hello World Button 5");
    h3->add(b5);

    Line *vl = new Line(nullptr, id++,MidLineType::VERTICAL);
    h3->add(vl);

    Progressbar *p6 = new Progressbar(nullptr, id++);
    int min = p6->getMinValue();
    int max = p6->getMaxValue();
    p6->setMidValue(30);

    h3->add(p6);

    TextLabel* tl = new TextLabel(nullptr, id++, "TL 5");
    Button *b6 = new Button(nullptr, id++, "Hello World Button 6");
    h3->add(tl);
    h3->add(b6);

    MidLayout<MidQt5VerticalLayout> *h4 = new MidLayout<MidQt5VerticalLayout>();

    ComboBox *cb = new ComboBox(nullptr, id++);
    cb->addMidItem("Item 01");
    cb->addMidItem("Item 02");
    cb->addMidItem("Item 03");

    SpinBox* sp = new SpinBox(nullptr, id++, 10, 77);
    Button *b9 = new Button(nullptr, id++, "Hello World Button 9");

    Date date(19, 2, 2019);
    DateEdit *de = new DateEdit(nullptr, id++, date);

    MidWindow<MidQt5Window> *base1 = new MidWindow<MidQt5Window>(0,0,"h1");
    MidWindow<MidQt5Window> *base2 = new MidWindow<MidQt5Window>(0,0,"h2");
    Button *b21 = new Button(base1, id++, "Hello World Button 21");
    Button *b22 = new Button(base2, id++, "Hello World Button 22");
    Tab *tab = new Tab(nullptr, id++);
    tab->addMidTab(base1, "Aba 1");
    tab->addMidTab(base2, "Aba 2");

    Button *b12 = new Button(nullptr, id++, "Hello World Button 12");
    Button *b13 = new Button(nullptr, id++, "Hello World Button 13");
    Button *b14 = new Button(nullptr, id++, "Hello World Button 14");
    Button *b15 = new Button(nullptr, id++, "Hello World Button 15");
    Button *b16 = new Button(nullptr, id++, "Hello World Button 16");

    h4->add(cb);
    h4->add(sp);
    h4->add(b9);
    h4->add(de);
    h4->add(tab);
    h4->add(b12);
    h4->add(b13);
    h4->add(b14);
    h4->add(b15);
    h4->add(b16);

    Panel *panel = new Panel(100, 100);
    Button *b17 = new Button(nullptr, id++, "Hello World Button 17");
    MidLayout<MidQt5VerticalLayout> *panelLayout = new MidLayout<MidQt5VerticalLayout>();
    panelLayout->add(b17);
    panel->setMidLayout(*panelLayout);
    h4->add(panel);

    std::string msg = "A Funceme, como instituição pertencente ao Sistema de Gestão dos Recursos Hídricos do Estado do Ceará, vem implementando um conjunto de ações integradas, que visam obter e gerar, sistematicamente, uma série de informações que subsidiem os órgãos gestores no processo de gerenciamento e planejamento dos recursos hídricos, permitindo o aproveitamento, uso racional e preservação da água.\
            A área de recursos hídricos da Funceme desenvolve projetos em diversas linhas de pesquisa, envolvendo qualidade das águas superficiais e subterrâneas, hidrologia básica, hidráulica de canais, operação de reservatórios, hidrogeologia, sedimentologia, drenagem urbana, interação rio-aquífero, acoplamento de previsão climática a modelagem hidrológica.\
            Concentra seus esforços em três grandes áreas de atuação: Desenvolvimento de Estudos Básicos, Sistema de Suporte e Tratamento de Dados Básicos.";
    TextEdit* textEdit = new TextEdit(nullptr, id++, msg.c_str());
    h4->add(textEdit);

    mainVertical->addMidLayout(h1);
    mainVertical->addMidLayout(h2);
    mainVertical->addMidLayout(h3);
    mainVertical->addMidLayout(h4);
	MidConnect<MidQt5Connect> connector (this);
    MidQT5ButtonHandler qt5Handler ([&](){
	    MidMessageDialog<MidQt5MsgDialog> m(this, "SIGA", "Hello world!");
	    m.show();
        return true;
	});
	connector.connect(b1, EventTable::BUTTONCLICK, &qt5Handler);
    GroupBox *gp = new GroupBox(nullptr, id++, "Main Group Box");
    gp->setMidLayout(*mainVertical);
    MidLayout<MidQt5VerticalLayout> *windowLayout = new MidLayout<MidQt5VerticalLayout>();
    windowLayout->add(gp);
    setMidLayout(*windowLayout);

    MenuBar* menuBar = new MenuBar(nullptr, id++);
    Menu* menuFile = new Menu(nullptr, id++, "File");
    Action* saveAction = new Action(nullptr,id++, "Save");
    Action* exitAction = new Action(nullptr,id++, "Exit");
    //menuFile->addMidAction("Save");
    //menuFile->addMidAction("Exit");
    menuFile->addMidAction(saveAction);
    menuFile->addMidAction(exitAction);
    menuBar->addMidMenu(menuFile);
    Menu* menuView = new Menu(nullptr, id++, "View");
    Action* zoomInAction = new Action(nullptr,id++, "Zoom in");
    Action* zoomOutAction = new Action(nullptr,id++, "Zoom out");
    menuView->addMidAction(zoomInAction);
    menuView->addMidAction(zoomOutAction);
    menuBar->addMidMenu(menuView);
    Menu* menuAbout = new Menu(nullptr, id++, "Help");
    Action* versionAction = new Action(nullptr,id++, "Version");
    Action* aboutAction = new Action(nullptr,id++, "About");
    menuAbout->addMidAction(versionAction);
    menuAbout->addMidAction(aboutAction);
    menuBar->addMidMenu(menuAbout);
    windowLayout->setMidMenuBar(menuBar);

    MidQT5ActionHandler qt5ActionHandler ([&](){
        MidMessageDialog<MidQt5MsgDialog> m(this, "SIGA", "Action trigerred!");
        m.show();
        return true;
    });
    connector.connect(saveAction, EventTable::ACTIONTRIGERRED, &qt5ActionHandler);
}


