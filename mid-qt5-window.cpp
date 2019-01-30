#include "mid-qt5-window.h"

#include "mid-qt5-button.h"

MidQt5Window::MidQt5Window(int width,
                      int height,
                      const char * title,
                      QWidget *parent)
{
    this->setParent(parent);
    this->resize(width, height);
    this->setWindowTitle(QString(title));
}

void MidQt5Window::addButton(MidQt5Button *button)
{
    if (this->layout() == nullptr)
    {
        this->setLayout(new QVBoxLayout());
    }
    this->layout()->addWidget(button);
}

void MidQt5Window::show()
{
    this->setVisible(true);
}

MidQt5Window::~MidQt5Window()
{
}
