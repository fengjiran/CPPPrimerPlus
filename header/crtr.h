//
// Created by richard on 2018/11/25.
//

#ifndef CPPPRIMERPLUS_CRTR_H
#define CPPPRIMERPLUS_CRTR_H

#include <iostream>

using std::cout;

template<typename T>
class Base {
public:
    void show() const {
        static_cast<const T *>(this)->show();
    }

    Base<T> operator++() {
        static_cast<T *>(this)->operator++();
    }
};

class Derived : public Base<Derived> {
private:
    int val;
public:
    Derived() : val(0) {}
    void show() const {
        cout << "Shown in Derived class.\n";
        cout << "Val is " << this->val << ".\n";
    }

    Derived operator++() {
        ++(this->val);
        return *this;
    }
};

#endif //CPPPRIMERPLUS_CRTR_H
