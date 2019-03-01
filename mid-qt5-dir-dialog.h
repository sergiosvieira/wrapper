#ifndef MID_QT5_DIR_DIALOG_H
#define MID_QT5_DIR_DIALOG_H

#include <QFileDialog>
#include "mid-qt5-window.h"

#include "mid-window.h"

#include "general.h"
#include <vector>

/*!
 * \brief The MidQt5DirDialog class
 */
class MidQt5DirDialog: public QFileDialog
{
public:
    MidQt5DirDialog(Id id = 0,
                 MidObject parent = nullptr):
        QFileDialog(static_cast<QWidget*>(parent.get())){}

    DirChooseStruct chooseMidDirectory
    (
            const std::string& title,
            const std::string& initialDir
    )
    {
        DirChooseStruct ret;
        QString fileName = getExistingDirectory
        (
            parentWidget(),
            title.c_str(),
            initialDir.c_str(),
            QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks
        );

        //check the return
        if(!fileName.isEmpty() && !fileName.isNull())
        {
            ret.dirChoose = DirChoose::DirChoose;
            ret.url = fileName.toStdString();
        }
        else
        {
            ret.dirChoose = DirChoose::DirChooseCalcel;
        }

        return ret;
    }
};

#endif /* MID_QT5_DIR_DIALOG_H */
