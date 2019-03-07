#ifndef MID_OBJECT_H
#define MID_OBJECT_H

#include <memory>
#include <string>
/*!
 * MidObject
 */
using MidObject_ = std::shared_ptr<void>;

class IMidName
{
    std::string name = "";
public:
    IMidName(const std::string& name): name(name){}
    std::string getName() const
    {
        return this->name;
    }
};

class MidObject: public MidObject_
{
public:
    template <class T>
    MidObject(T *t = nullptr): std::shared_ptr<void>(t){}
    MidObject(): std::shared_ptr<void>(){}
    template <class T>
    operator const T&() const
    {
        return *static_cast<T*>(this->get());
    }
};

/*!
 * Id
 */
using Id = long long int;

#endif /* MID_OBJECT_H */
