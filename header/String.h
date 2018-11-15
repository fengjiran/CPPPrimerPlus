//
// Created by Richard on 2018/11/15.
//

#ifndef CPPPRIMERPLUS_STRING_H
#define CPPPRIMERPLUS_STRING_H

#include <iostream>

class String {
private:
    char *str;
    int len;
    static int num_strings;
public:
    String();

    explicit String(const char *s);

    ~String();

    friend std::ostream &operator<<(std::ostream &os, const String &st);
};

#endif //CPPPRIMERPLUS_STRING_H
