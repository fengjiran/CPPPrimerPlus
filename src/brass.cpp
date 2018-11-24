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

void Brass::WithDraw(double amt) {
    // set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);

    if (amt < 0)
        cout << "Withdrawal amount must be positive; "
             << "withdrawal cancelled!\n";
    else if (amt <= balance)
        balance -= amt;
    else
        cout << "Withdrawal amount of $" << amt
             << " exceeds your balance.\n"
             << "Withdrawal cancelled.\n";
    restore(initialState, prec);
}

double Brass::Balance() const {
    return balance;
}

void Brass::ViewAcct() const {
    format initialState = setFormat();
    precis prec = cout.precision(2);

    cout << "Client: " << full_name << endl;
    cout << "Account Number: " << acct_num << endl;
    cout << "Balance: $" << balance << endl;
    restore(initialState, prec);

}

BrassPlus::BrassPlus(const string &s, long an, double bal,
                     double ml, double r) : Brass(s, an, bal) {
    max_loan = ml;
    owes_bank = 0.0;
    rate = r;
}