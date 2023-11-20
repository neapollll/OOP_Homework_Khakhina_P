#ifndef WEAK_PTR_H
#define WEAK_PTR_H
#include <iostream>
#include "My_shared_ptr.h"

template<class T>
class weak_ptr {
private:
    My_shared_ptr<T>* ptr = nullptr;
    unsigned int* counter_ptr;
public:
    //Конструкторы по умолчанию
    weak_ptr() {};
    weak_ptr(const weak_ptr& r) noexcept { r = 0; };
    template<class Y>
    weak_ptr(const weak_ptr<Y>& r) noexcept;
    template<class Y>
    weak_ptr(const My_shared_ptr<Y>& r) noexcept;
    weak_ptr(weak_ptr&& r) noexcept;
    template<class Y>
    weak_ptr(const weak_ptr<Y>&& r) noexcept;

    ~weak_ptr() {} //Деструктор

    weak_ptr& operator=(const weak_ptr& r)
    {
        r.swap(*this);
        return *this;
    }
    template <class Y>
    weak_ptr& operator=(const weak_ptr<Y>& r)
    {
        r.swap(*this);
        return *this;
    }
    template <class Y>
    weak_ptr& operator=(const My_shared_ptr<Y>& r)
    {
        r.swap(*this);
        return *this;
    }
    weak_ptr& operator=(weak_ptr&& r) noexcept
    {
        weak_ptr(std::move(r)).swap(*this);
        return *this;
    }
    template<class Y>
    weak_ptr& operator=(weak_ptr<Y>&& r) noexcept
    {
        weak_ptr(std::move(r)).swap(*this);
        return *this;
    }

    void reset() noexcept
    {
        *this = nullptr;
    }

    void swap(weak_ptr& r) noexcept
    {
        std::swap(*this, r);
    }

    long use_count() const noexcept
    {
        if ((this->ptr == nullptr) || (this->counter_ptr == nullptr) || (*(this->counter_ptr) == 0))
        {
            return 0;
        }
        else
        {
            return *(this->counter_ptr);
        }

    }

    bool expired() const noexcept
    {
        if (use_count() == 0)
        {
            return false;
        }
        else return true;
    }

    My_shared_ptr<T> lock() const noexcept
    {
        if (*(this->counter_ptr) != 0)
        {
            return My_shared_ptr<T>(*(this->ptr));
        }
        return My_shared_ptr<T>();
    }

    void ch_zero(My_shared_ptr<T>* nope)
    {
        if (this->ptr != nullptr) return;
        this->ptr = nope;
        this->counter_ptr = nope->iNeedThat();
    }

};

#endif 