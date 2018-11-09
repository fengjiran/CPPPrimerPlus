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
    ios_base::fmtflags orig =
            cout.setf(ios_base::fixed, ios_base::floatfield);
    streamsize prec = cout.precision(3);

    // set format to #.###
    cout << "Company: " << company
         << " Shares: " << shares << endl;
    cout << " Share Price: $" << share_val;

    // set format to #.##
    cout.precision(2);
    cout << " Total Worth: $" << total_val << endl;

    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}