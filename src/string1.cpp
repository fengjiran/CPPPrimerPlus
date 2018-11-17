//
// Created by richard on 2018/11/17.
//
#include <cstring>
#include "../header/string1.h"

using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany() {
    return num_strings;
}

String::String(const char *s) {
    this->len = std::strlen(s);
    this->str = new char[this->len + 1];
    std::strcpy(str, s);
    num_strings++;

}

String::String() {
    this->len = 4;
    this->str = new char[1];
    this->str[0] = '\0';
    num_strings++;

}

