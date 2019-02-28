#include "window.h"
#include "window_sample15.h"
#include "button.h"
#include "checkbox.h"
#include "textfield.h"
#include "mid-qt5-colors.h"
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
#include "treeWidget.h"
#include "treeWidgetItem.h"


Window::Window(int width,
           	   int height,
               const std::string &title,
               MidObject parent):
    MidWindow<MidQt5Window>(width, height, title, parent)
{
    long long id = 1;

    this->statusBar = new MidStatusBar<MidQt5StatusBar>(id++, "Hello StatusBar", *this);

    MidLayout<MidQt5VerticalLayout> *vLayout = new MidLayout<MidQt5VerticalLayout>();
    this->button1 = new Button{id++, "Botão 01", nullptr};    
    this->btnSample15 = new Button{id++, "Sample 15", nullptr};


    this->radioButton1 = new RadioButton{id++, "Radio Button 1", nullptr};
    vLayout->add(*button1);
    vLayout->add(*btnSample15);

    vLayout->add(*radioButton1);
    this->textField1 = new TextField(id++, "Text field text", nullptr);
    vLayout->add(*textField1);
    this->progressBar1 = new ProgressBar(id++, 0, 100, "title", "msg", nullptr);
    int min = progressBar1->getMinValue();
    int max = progressBar1->getMaxValue();
    progressBar1->setMidValue(30);
    //vLayout->add(*progressBar1);
    this->textLabel1 = new TextLabel(id++, "TL 5", nullptr);
    MidObject red = std::make_shared<MidQt5ColorRed>();
    this->textLabel1->setMidTextColor(red);
    vLayout->add(*textLabel1);

    this->image = new MidImage<MidQt5Image>(id++, "SIGA.png", nullptr);
    this->imageLabel = new MidImageLabel<MidQt5ImageLabel>(id++, *image, nullptr);
    vLayout->add(*imageLabel);

    this->listBox = new MidListBox<MidQt5ListBox>(id++, {"item1", "item2", "item3"}, nullptr);
     vLayout->add(*listBox);

    this->cb1 = new ComboBox(id++, nullptr);
    cb1->addMidItem("Item 01");
    cb1->addMidItem("Item 02");
    cb1->addMidItem("Item 03");
    vLayout->add(*cb1);
    this->sp1 = new SpinBox(id++, 10, 77, nullptr);
    vLayout->add(*sp1);
    Date date(19, 2, 2019);
    this->dateEdit1 = new DateEdit(id++, date, nullptr);
    vLayout->add(*dateEdit1);

    std::string msg = "A Funceme, como instituição pertencente ao Sistema de Gestão dos Recursos Hídricos do Estado do Ceará, vem implementando um conjunto de ações integradas, que visam obter e gerar, sistematicamente, uma série de informações que subsidiem os órgãos gestores no processo de gerenciamento e planejamento dos recursos hídricos, permitindo o aproveitamento, uso racional e preservação da água.\
            A área de recursos hídricos da Funceme desenvolve projetos em diversas linhas de pesquisa, envolvendo qualidade das águas superficiais e subterrâneas, hidrologia básica, hidráulica de canais, operação de reservatórios, hidrogeologia, sedimentologia, drenagem urbana, interação rio-aquífero, acoplamento de previsão climática a modelagem hidrológica.\
            Concentra seus esforços em três grandes áreas de atuação: Desenvolvimento de Estudos Básicos, Sistema de Suporte e Tratamento de Dados Básicos.";
    this->textEdit1 = new TextEdit(id++, msg, nullptr);
    vLayout->add(*textEdit1);

    //Adicionar treeWidget here
    TreeWidget* treeWidget = new TreeWidget(id++, 2, {"Col 1", "Col 2"}, *this);
    TreeWidgetItem* treeWidgetA = new TreeWidgetItem
            (id++, {"A1","A2"}, {true, true}, {false, true}, *treeWidget);
    TreeWidgetItem* treeWidgetB = new TreeWidgetItem
            (id++, {"B1","B2"}, {false, false}, {false, false}, *treeWidget);
    TreeWidgetItem* treeWidgetC = new TreeWidgetItem
            (id++, {"C1","C2"}, {true, true}, {false, false}, *treeWidget);
    vLayout->add(*treeWidget);


    Panel *panel = new Panel(100, 100, *this);
    Button *b17 = new Button(id++, "Hello World Button 17", *panel);
    MidLayout<MidQt5VerticalLayout> *panelLayout = new MidLayout<MidQt5VerticalLayout>();
    panelLayout->add(*b17);
    panel->setMidLayout(*panelLayout);
    vLayout->add(*panel);


    this->tab1 = new Tab(8, "tab1", nullptr);
    this->base1 = new TabPage(id++, 600, 800, "base1", nullptr);

    Button *buttonTab1 = new Button{id++, "Botão tab1", nullptr};
    MidLayout<MidQt5VerticalLayout> *vLayoutTab1 = new MidLayout<MidQt5VerticalLayout>();
    vLayoutTab1->add(*buttonTab1);
    this->base1->setMidLayout(*vLayoutTab1);

    Button *buttonTab2 = new Button{id++, "Botão tab2", nullptr};
    this->base2 = new TabPage(id++,600, 800, "base2", nullptr);
    MidLayout<MidQt5VerticalLayout> *vLayoutTab2 = new MidLayout<MidQt5VerticalLayout>();
    vLayoutTab2->add(*buttonTab2);
    this->base2->setMidLayout(*vLayoutTab2);



    tab1->addMidTab(*base1, "tab1");
    tab1->addMidTab(*base2, "tab2");
    vLayout->add(*tab1);
    MidConnect<MidQt5Connect> *connector  = new MidConnect<MidQt5Connect>(*this);
    MidQT5ButtonHandler qt5ButtonHandler ([&id, this](){
        MidMessageDialog<MidQt5MsgDialog> m(id++, "SIGA", "Hello world!", *this);
        m.show();
        this->statusBar->showMidStatusBar("Hello Button Click");
        return true;
    });
    connector->connect(*button1, EventTable::BUTTONCLICK, &qt5ButtonHandler);

    MidQT5ButtonHandler qt5BbtnSample15 ([&](){
        WindowSample15 *win15 = new WindowSample15(300, 400, "Minimal Window QT");
        win15->show();
        return true;
    });
    connector->connect(*btnSample15, EventTable::BUTTONCLICK, &qt5BbtnSample15);


    this->gp1 = new GroupBox(id++, "Main Group Box", nullptr);
    MidLayout<MidQt5HorizontalLayout> *h1 = new MidLayout<MidQt5HorizontalLayout>();
    this->button2 = new Button{id++, "Botão 02", nullptr};
    this->radioButton2 = new RadioButton{id++, "Radio Button 2", nullptr};

    this->chBox1 = new CheckBox(id++, "Hello World CheckBox", nullptr);

    h1->add(*button2);
    h1->add(*radioButton2);

    Line *vl = new Line(id++, MidLineType::VERTICAL, nullptr);
    h1->add(*vl);

    h1->add(*chBox1);
    gp1->setMidLayout(*h1);

    Line *hl = new Line(id++, MidLineType::HORIZONAL, nullptr);
    vLayout->add(*hl);

    vLayout->add(*gp1);
    this->setMidLayout(*vLayout);

    MenuBar* menuBar = new MenuBar(id++, nullptr);
    Menu* menuFile = new Menu(id++, "File", nullptr);
    Action* saveAction = new Action(id++, "Save", nullptr);
    Action* exitAction = new Action(id++, "Exit", nullptr);
    menuFile->addMidAction(*saveAction);
    menuFile->addMidAction(*exitAction);
    menuBar->addMidMenu(*menuFile);
    this->setMidMenuBar(*menuBar);

    MidQT5ActionHandler qt5ActionHandler ([&id, this](){
        MidMessageDialog<MidQt5MsgDialog> m(id++, "SIGA", "Action trigerred!", *this);
        m.show();
        this->statusBar->showMidStatusBar("Hello Action");
        return true;
    });
    connector->connect(*saveAction, EventTable::ACTIONTRIGERRED, &qt5ActionHandler);
}

Window::~Window()
{
    if (this->button1) delete button1;
    if (this->radioButton1) delete radioButton1;
    if (this->textField1) delete textField1;
    if (this->progressBar1) delete progressBar1;
    if (this->textLabel1) delete textLabel1;
    if (this->cb1) delete cb1;
    if (this->sp1) delete sp1;
    if (this->dateEdit1) delete dateEdit1;
    if (this->tab1) delete tab1;
    if (this->gp1) delete gp1;
    if (this->imageLabel) delete imageLabel;
    if (this->statusBar) delete statusBar;
    if (this->image) delete image;
    if (this->listBox) delete listBox;
}


