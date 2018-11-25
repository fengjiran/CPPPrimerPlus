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
    explicit Brass(const string &s = "Nullbody", long an = -1, double bal = 0.0);

    void Deposit(double amt);

    virtual void WithDraw(double amt);

    double Balance() const;

    virtual void ViewAcct() const;

    virtual ~Brass() {}
};

class BrassPlus : public Brass {
private:
    double max_loan;
    double rate;
    double owes_bank;
public:
    explicit BrassPlus(const string &s = "Nullbody", long an = -1,
                       double bal = 0.0, double ml = 500,
                       double r = 0.11125);

    explicit BrassPlus(const Brass &ba, double ml = 500, double r = 0.11125);

    virtual void ViewAcct() const;

    virtual void WithDraw(double amt);

    inline void ResetMax(double m) { max_loan = m; }

    inline void ResetRate(double r) { rate = r; }

    inline void ResetOwes() { owes_bank = 0; }
};

#endif //CPPPRIMERPLUS_BRASS_H
