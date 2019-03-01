#ifndef MID_GRID_SELECTED_CELL_HANDLER_H
#define MID_GRID_SELECTED_CELL_HANDLER_H

#include <functional>
#include "mid-handler.h"

/*!
 * \brief The MidButtonHandler class
 */
class MidGridSelectedCellHandler: public MidHandler
{
public:
    /*!
     * SelectedCellHandler
     */
    using SelectedCellLambda = std::function<void(int, int)>;
    /*!
     * \brief MidGridSelectedCellHandler
     * \param y
     */
    MidGridSelectedCellHandler(SelectedCellLambda y): lambda(y){}
    /*!
     * \brief ~MidGridSelectedCellHandler
     */
    virtual ~MidGridSelectedCellHandler() {}
    /*!
     * \brief lambda
     */
    SelectedCellLambda lambda;
};

#endif // MID_BUTTON_HANDLER_H
