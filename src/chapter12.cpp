//
// Created by Richard on 2018/11/15.
//

#include <iostream>
#include "../header/strngbad.h"

using std::cout;

void Callme1(StringBad &rsb) {
    cout << "String passed by reference:\n";
    cout << "   \"" << rsb << "\"\n";
}

void Callme2(StringBad sb) {
    cout << "String passed by value:\n";
    cout << "   \"" << sb << "\"\n";
}