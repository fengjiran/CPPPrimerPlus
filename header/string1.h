//
// Created by richard on 2018/11/17.
//

#ifndef CPPPRIMERPLUS_STRING1_H
#define CPPPRIMERPLUS_STRING1_H

#include <iostream>

class String {
private:
    char *str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    String();

    explicit String(const char *s);

    String(const String &);

    ~String();

    int length() const { return this->len; }

    String &operator=(const String &);

    String &operator=(const char *);

    char &operator[](int i);

    const char &operator[](int i) const;

    static int HowMany();

    friend bool operator<(const String &st, const String &st2);

    friend bool operator>(const String &st, const String &st2);

    friend bool operator==(const String &st, const String &st2);

    friend std::ostream &operator<<(std::ostream &os, const String &st);

    friend std::istream &operator>>(std::istream &is, const String &st);
};

#endif //CPPPRIMERPLUS_STRING1_H
