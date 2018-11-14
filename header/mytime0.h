//
// Created by Richard on 2018/11/14.
//

#ifndef CPPPRIMERPLUS_MYTIME0_H
#define CPPPRIMERPLUS_MYTIME0_H

#include <iostream>

class Time {
private:
    int hours;
    int minutes;
public:
    Time();

    explicit Time(int h, int m = 0);

    void AddMin(int m);

    void AddHr(int h);

    void Reset(int h = 0, int m = 0);

//    Time Sum(const Time &t) const;

    Time operator+(const Time &t) const;

    Time operator-(const Time &t) const;

    Time operator*(double n) const;

    friend Time operator*(double n, const Time &t) { return t * n; }

    friend std::ostream &operator<<(std::ostream &os, const Time &t);

    void Show() const;
};

#endif //CPPPRIMERPLUS_MYTIME0_H
