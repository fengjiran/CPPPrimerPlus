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
};

class Derived : public Base<Derived> {
public:
    void show() const {
        cout << "Shown in Derived class.\n";
    }
};

#endif //CPPPRIMERPLUS_CRTR_H
