#ifndef MID_FILE_DIALOG_H
#define MID_FILE_DIALOG_H

#include "mid-object.h"
#include "mid-window.h"

#include "general.h"

/*!
 * \brief MidFileDialog Template
 */
template <class T>
class MidFileDialog : public MidObject
{
public:
    MidFileDialog(Id id = 0,
              MidObject parent = nullptr):
        MidObject(new T{id, parent}){}

    FileSaveStruct saveMidFile
    (
            const std::string& title,
            const std::string& initialDir,
            const std::vector<Filter>& filters
    )
    {
        T *obj = static_cast<T*>(this->get());
        return obj->saveMidFile(title, initialDir, filters);
    }
};

#endif /* MID_FILE_DIALOG_H */
