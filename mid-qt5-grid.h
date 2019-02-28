#ifndef MID_QT5_GRID_H
#define MID_QT5_GRID_H

#include <QTableWidget>
#include "mid-window.h"

class MidQt5Grid : public QTableWidget
{
public:
    MidQt5Grid
    (
        Id id = 0,
        unsigned int numRows = 0,
        unsigned int numCols = 0,
        MidObject parent = nullptr
    ):
        QTableWidget (static_cast<QWidget*>(parent.get()))
    {
        this->setRowCount(numRows);
        this->setColumnCount(numCols);
    }
    void setMidColsLabels(const std::vector<std::string> &labels)
    {
        QStringList stringLabels;
        for (auto &str: labels) stringLabels << str.c_str();
        this->setHorizontalHeaderLabels(stringLabels);
    }
    void setMidRowsLabels(const std::vector<std::string> &labels)
    {
        QStringList stringLabels;
        for (auto &str: labels) stringLabels << str.c_str();
        this->setVerticalHeaderLabels(stringLabels);
    }
};

#endif // MID_QT5_GRID_H
