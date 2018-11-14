//
// Created by Richard on 2018/11/14.
//
#include <iostream>
#include "../header/ex10.h"

using namespace std;

BankAccount::BankAccount(const std::string &name,
                         const std::string &account_num,
                         double balance) {
    cout << "Default constructor called\n";
    name_ = name;
    account_num_ = account_num;
    balance_ = balance;
//    name_ = "no name";
//    account_num_ = "no account number";
//    balance_ = 0;
}

void BankAccount::ShowAccount() const {
    ios_base::fmtflags orig =
            cout.setf(ios_base::fixed, ios_base::floatfield);
    streamsize prec = cout.precision(3);

    // set format to #.###
    cout << "Name: " << name_ << endl;
    cout << "Account Number: " << account_num_ << endl;
    cout << "Deposit: $" << balance_ << endl;

    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

void BankAccount::Deposit(double cash) {
    balance_ += cash;
}

void BankAccount::Withdraw(double cash) {
    if (cash < 0) {
        cout << "You can't withdraw cash less than 0, withdraw failed.\n";
        cash = 0;
    } else if (cash > balance_) {
        cout << "You can't withdraw cash mare than the balance, withdraw failed.\n";
        cash = 0;
    }

    balance_ -= cash;

}


Betelgeusean::Betelgeusean(const string &name, int CI) {
    name_ = name;
    CI_ = CI;
//    name_ += "c";
}

void Betelgeusean::SetCI(int new_ci) {
    CI_ = new_ci;

}

void Betelgeusean::Show() const {
    cout << "Name: " << name_ << endl;
    cout << "CI: " << CI_ << endl;

}
