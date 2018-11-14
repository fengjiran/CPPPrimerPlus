//
// Created by Richard on 2018/11/14.
//

#ifndef CPPPRIMERPLUS_EX10_H
#define CPPPRIMERPLUS_EX10_H

#include <string>

class BankAccount {
private:
    std::string name_;
    std::string account_num_;
    double balance_;
public:
    BankAccount(const std::string &name,
                const std::string &account_num,
                double balance = 0.0);

    void ShowAccount() const;

    void Deposit(double cash);

    void Withdraw(double cash);

};

#endif //CPPPRIMERPLUS_EX10_H
