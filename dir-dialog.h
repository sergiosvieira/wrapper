#ifndef DIR_DIALOG_H
#define DIR_DIALOG_H

#include <iostream>
#include "mid-dir-dialog.h"
#include "mid-qt5-dir-dialog.h"

/*!
 * \brief The DirDialog class
 */
class DirDialog: public MidDirDialog<MidQt5DirDialog>
{
public:
    DirDialog(Id id = 0,
           MidObject parent = nullptr):
        MidDirDialog<MidQt5DirDialog>(id, parent){}
};

#endif // DIR_DIALOG_H
