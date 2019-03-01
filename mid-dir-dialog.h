#ifndef MID_DIR_DIALOG_H
#define MID_DIR_DIALOG_H

#include "mid-object.h"
#include "mid-window.h"

#include "general.h"

/*!
 * \brief MidDirDialog Template
 */
template <class T>
class MidDirDialog : public MidObject
{
public:
    MidDirDialog(Id id = 0,
              MidObject parent = nullptr):
        MidObject(new T{id, parent}){}

    DirChooseStruct chooseMidDirectory
    (
            const std::string& title,
            const std::string& initialDir
    )
    {
        T *obj = static_cast<T*>(this->get());
        return obj->chooseMidDirectory(title, initialDir);
    }
};

#endif /* MID_DIR_DIALOG_H */
