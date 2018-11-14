//
// Created by Richard on 2018/11/14.
//

#include <iostream>
#include "../header/mytime0.h"

Time::Time() {
    hours = 0;
    minutes = 0;

}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;

}

void Time::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;

}

void Time::AddHr(int h) {
    hours += h;

}

void Time::Reset(int h, int m) {
    hours = h;
    minutes = m;

}

Time Time::operator+(const Time &t) const {
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time::Show() const {
    std::cout << hours << " hours, " << minutes << " minutes\n";
}

Time Time::operator-(const Time &t) const {
    Time diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = this->minutes + 60 * this->hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

Time Time::operator*(double n) const {
    Time result;
    long totalminutes = this->hours * 60 * n +
                        this->minutes * n;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

std::ostream &operator<<(std::ostream &os, const Time &t) {
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}

//Time operator*(double n, const Time &t) {
//    Time result;
//    long totalminutes = t.hours * 60 * n +
//                        t.minutes * n;
//
//    result.hours = totalminutes / 60;
//    result.minutes = totalminutes % 60;
//    return result;
//}


