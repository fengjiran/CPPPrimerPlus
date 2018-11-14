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

class Betelgeusean {
private:
    std::string name_;
    int CI_;
public:
    explicit Betelgeusean(const std::string &name = "Plorga", int CI = 50);

    void SetCI(int new_ci);

    void Show() const;
};

#endif //CPPPRIMERPLUS_EX10_H
