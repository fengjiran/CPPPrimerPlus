//
// Created by richard on 2018/11/24.
//
#include <iostream>
#include "../header/brass.h"

using std::cout;
using std::endl;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;

format setFormat();

void restore(format f, precis p);

Brass::Brass(const string &s, long an, double bal) {
    full_name = s;
    acct_num = an;
    balance = bal;
}

void Brass::Deposit(double amt) {
    if (amt < 0)
        cout << "Negative deposit not allowed; "
             << "deposit is cancelled!\n";
    else
        balance += amt;
}
