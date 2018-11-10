//
// Created by Richard on 2018/11/9.
// version 00

#ifndef CPPPRIMERPLUS_STACK00_H
#define CPPPRIMERPLUS_STACK00_H

#include <iostream>
#include <string>

using namespace std;

class Stock {
private:
    string company_;  // the name of company
    long shares_;  // total shares
    double share_val_;  // value of each share
    double total_val_;  // total value of all the shares
    void SetTotal() { total_val_ = shares_ * share_val_; };
public:
    Stock();

    Stock(const string &company, long shares=0, double share_val=0.0);

    ~Stock();

//    void Acquire(const string &co, long n, double pr);

    void Buy(long num, double price);

    void Sell(long num, double price);

    void Update(double price);

    void Show();

};

#endif //CPPPRIMERPLUS_STACK00_H
