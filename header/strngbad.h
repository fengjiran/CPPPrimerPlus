//
// Created by Richard on 2018/11/15.
//

#ifndef CPPPRIMERPLUS_STRNGBAD_H
#define CPPPRIMERPLUS_STRNGBAD_H

#include <iostream>

class StringBad {
private:
    char *srt;
    int len;
    static int num_strings;
public:
    StringBad();

    StringBad(const char *s);

    ~StringBad();

    friend std::ostream &operator<<(std::ostream &os, const StringBad &st);
};

#endif //CPPPRIMERPLUS_STRNGBAD_H
