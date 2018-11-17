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

String::String(const String &st) {
    num_strings++;
    this->len = st.len;
    this->str = new char[this->len + 1];
    std::strcpy(this->str, st.str);

}

String::~String() {
    --num_strings;
    delete[] this->str;

}

String &String::operator=(const String &st) {
    if (this == &st)
        return *this;
    delete[] this->str;
    this->len = st.len;
    this->str = new char[this->len + 1];
    std::strcpy(this->str, st.str);
    return *this;
}

String &String::operator=(const char *s) {
    delete[] this->str;
    this->len = std::strlen(s);
    this->str = new char[this->len + 1];
    std::strcpy(this->str, s);
    return *this;
}

char &String::operator[](int i) {
    return this->str[i];
}

const char &String::operator[](int i) const {
    return this->str[i];
}

bool operator<(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2) {
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) == 0);
}

