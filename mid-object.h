#ifndef __MID_OBJECT__
#define __MID_OBJECT__

#include <memory>
#include <iostream>

using std::cout;

class MidObject
{
protected:
    struct holder_base
    {
        virtual ~holder_base(){}
        virtual holder_base* clone() const = 0;
    };
    holder_base* storage_;
    template<class T>
    struct holder : holder_base{
        holder(): held_(){}
        holder(T * t): held_(t)
        {
        }
        virtual ~holder(){}
        virtual holder_base* clone() const 
        {
            return new holder<T>(*this);
        }
        T* held_;
    };
    template<class T>
    T* ref()
    {
        return static_cast<holder<T>*>(storage_)->held_;
    }    
public:
    MidObject(): storage_(0){}
    template<class T>
    MidObject(T * t) : storage_(new holder<T>(t))
    {
    }
};

#endif /* __MID_OBJECT__ */
