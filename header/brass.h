//
// Created by richard on 2018/11/24.
//

#ifndef CPPPRIMERPLUS_BRASS_H
#define CPPPRIMERPLUS_BRASS_H

#include <string>

using std::string;

class Brass {
private:
    string full_name;
    long acct_num;
    double balance;
public:
    Brass(const string &s = "Nullbody", long an = -1, double bal = 0.0);

    void Deposit(double amt);

    virtual void WithDraw(double amt);

    double Balance() const;

    virtual void ViewAcct() const;

    virtual ~Brass();
};

#endif //CPPPRIMERPLUS_BRASS_H
