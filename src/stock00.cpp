//
// Created by Richard on 2018/11/9.
//
#include "../header/stack00.h"

void Stock::Acquire(const string &co, long n, double pr) {
    company = co;
    if (n < 0) {
        cout << "Number of shares can't be negative; "
             << company << " shares set to 0.\n";
        shares = 0;
    } else {
        shares = n;
    }

    share_val = pr;
    SetTotal();
}

void Stock::Buy(long num, double price) {
    if (num < 0) {
        cout << "Number of shares purchased can't be negative. "
             << "Transaction is aborted.\n";
    } else {
        shares += num;
        share_val = price;
        SetTotal();
    }
}

void Stock::Sell(long num, double price) {
    if (num < 0)
        cout << "Number of shares purchased can't be negative. "
             << "Transaction is aborted.\n";
    else if (num > shares)
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    else {
        shares -= num;
        share_val = price;
        SetTotal();
    }
}

void Stock::Update(double price) {
    share_val = price;
    SetTotal();
}

void Stock::Show() {
    cout << "Company: " << company
         << " Shares: " << shares << endl
         << " Share Price: $" << share_val
         << " Total Worth: $" << total_val << endl;
}