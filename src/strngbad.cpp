//
// Created by Richard on 2018/11/15.
//
#include <cstring>
#include "../header/strngbad.h"

using std::cout;

int StringBad::num_strings = 0;

StringBad::StringBad() {
    this->len = 4;
    this->str = new char[4];
    std::strcpy(this->str, "C++");
    num_strings++;
    cout << num_strings << ": \"" << this->str
         << "\" default object created\n";

}

StringBad::StringBad(const char *s) {
    this->len = std::strlen(s);
    this->str = new char[this->len + 1];
    std::strcpy(this->str, s);
    num_strings++;
    cout << num_strings << ": \"" << this->str
         << "\" object created\n";

}

StringBad::~StringBad() {
    cout << "\"" << this->str << "\" object deleted, ";
    --num_strings;
    cout << num_strings << " left\n";
    delete[] this->str;

}

std::ostream &operator<<(std::ostream &os, const StringBad &st) {
    return <#initializer#>;
}


