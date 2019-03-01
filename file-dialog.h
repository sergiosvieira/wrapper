#ifndef FILE_DIALOG_H
#define FILE_DIALOG_H

#include <iostream>
#include "mid-file-dialog.h"
#include "mid-qt5-file-dialog.h"

/*!
 * \brief The FileDialog class
 */
class FileDialog: public MidFileDialog<MidQt5FileDialog>
{
public:
    FileDialog(Id id = 0,
           MidObject parent = nullptr):
        MidFileDialog<MidQt5FileDialog>(id, parent){}
};

#endif // FILE_DIALOG_H
