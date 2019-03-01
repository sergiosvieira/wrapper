#ifndef MID_QT5_GRID_SELECTED_CELL_HANDLER_H
#define MID_QT5_GRID_SELECTED_CELL_HANDLER_H

#include "mid-grid-selected-cell-handler.h"

/*!
 * \brief The MidQt5GridSelectedHandler class
 */
class MidQt5GridSelectedHandler: public MidGridSelectedCellHandler
{
public:
    /*!
     * \brief MidQT5GridSelectedHandler
     * \param y
     */
    MidQt5GridSelectedHandler(SelectedCellLambda y): MidGridSelectedCellHandler(y){}
    /*!
     * \brief ~MidQT5GridSelectedHandler
     */
    virtual ~MidQt5GridSelectedHandler() {}
};

#endif // MID_QT5_GRID_SELECTED_CELL_HANDLER_H
