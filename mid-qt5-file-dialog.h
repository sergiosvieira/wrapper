#ifndef MID_QT5_FILE_DIALOG_H
#define MID_QT5_FILE_DIALOG_H

#include <QFileDialog>
#include "mid-qt5-window.h"

#include "mid-window.h"

#include "general.h"
#include <vector>

/*!
 * \brief The MidQt5FileDialog class
 */
class MidQt5FileDialog: public QFileDialog
{
public:
    MidQt5FileDialog(Id id = 0,
                 MidObject parent = nullptr):
        QFileDialog(static_cast<QWidget*>(parent.get())){}

    FileSaveStruct saveMidFile
    (
            const std::string& title,
            const std::string& initialDir,
            const std::vector<Filter>& filters
    )
    {
        FileSaveStruct ret;
        std::string filter;

        for(int index = 0; index < filters.size(); ++index)
        {
            if (index > 0) filter += ";;";
            filter += (filters.at(index).name+" ("+filters.at(index).extension)+")";
        }

        QString fileName = getSaveFileName
        (
            parentWidget(),
            title.c_str(),
            initialDir.c_str(),
            filter.c_str()
        );

        //check the return
        if(!fileName.isEmpty() && !fileName.isNull())
        {
            ret.fileSave = FileSave::FileSave;
            ret.fullUrl = fileName.toStdString();
        }
        else
        {
            ret.fileSave = FileSave::FileSaveCancel;
        }

        return ret;
    }

    FileOpenStruct openMidFile
    (
            const std::string& title,
            const std::string& initialDir,
            const std::vector<Filter>& filters
    )
    {
        FileOpenStruct ret;
        std::string filter;

        for(int index = 0; index < filters.size(); ++index)
        {
            if (index > 0) filter += ";;";
            filter += (filters.at(index).name+" ("+filters.at(index).extension)+")";
        }

        QString fileName = getOpenFileName
        (
            parentWidget(),
            title.c_str(),
            initialDir.c_str(),
            filter.c_str()
        );

        //check the return
        if(!fileName.isEmpty() && !fileName.isNull())
        {
            ret.fileOpen = FileOpen::FileOpen;
            ret.fullUrl = fileName.toStdString();
        }
        else
        {
            ret.fileOpen = FileOpen::FileOpenCancel;
        }

        return ret;
    }
};

#endif /* MID_QT5_FILE_DIALOG_H */
