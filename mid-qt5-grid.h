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

    void setMidCellValue
    (
            unsigned int row,
            unsigned int col,
            const std::string &value
    )
    {
        this->setItem(row, col, new QTableWidgetItem(value.c_str()));
    }
};

#endif // MID_QT5_GRID_H
