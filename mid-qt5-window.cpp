#include "mid-qt5-window.h"

#include "mid-qt5-button.h"

MidQt5Window::MidQt5Window(int width,
                           int height,
                           const std::string &title,
                           MidObject parent)
{
    this->setParent(static_cast<QWidget*>(parent.get()));
    this->resize(width, height);
    this->setWindowTitle(QString(title.c_str()));
}

void MidQt5Window::show()
{
    this->setVisible(true);
}
