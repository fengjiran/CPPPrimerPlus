//
// Created by Richard on 2018/11/9.
//
#include "../header/stock00.h"

Stock::Stock() {
    cout << "Default constructor called\n";
    company_ = "no name";
    shares_ = 0;
    share_val_ = 0.0;
    total_val_ = 0.0;
}

Stock::Stock(const string &company, long shares, double share_val) {
    cout << "Constructor using " << company << " called\n";
    company_ = company;
    if (shares < 0) {
        cout << "Number of shares can't be negative; "
             << company_ << " shares set to 0.\n";
        shares_ = 0;
    } else {
        shares_ = shares;
    }

    share_val_ = share_val;
    SetTotal();

}

Stock::~Stock() {
    cout << "Bye, " << company_ << "!\n";
}

//void Stock::Acquire(const string &co, long n, double pr) {
//    company_ = co;
//    if (n < 0) {
//        cout << "Number of shares can't be negative; "
//             << company_ << " shares set to 0.\n";
//        shares_ = 0;
//    } else {
//        shares_ = n;
//    }
//
//    share_val_ = pr;
//    SetTotal();
//}

void Stock::Buy(long num, double price) {
    if (num < 0) {
        cout << "Number of shares purchased can't be negative. "
             << "Transaction is aborted.\n";
    } else {
        shares_ += num;
        share_val_ = price;
        SetTotal();
    }
}

void Stock::Sell(long num, double price) {
    if (num < 0)
        cout << "Number of shares purchased can't be negative. "
             << "Transaction is aborted.\n";
    else if (num > shares_)
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    else {
        shares_ -= num;
        share_val_ = price;
        SetTotal();
    }
}

void Stock::Update(double price) {
    share_val_ = price;
    SetTotal();
}

void Stock::Show() {
    ios_base::fmtflags orig =
            cout.setf(ios_base::fixed, ios_base::floatfield);
    streamsize prec = cout.precision(3);

    // set format to #.###
    cout << "Company: " << company_
         << " Shares: " << shares_ << endl;
    cout << " Share Price: $" << share_val_;

    // set format to #.##
    cout.precision(2);
    cout << " Total Worth: $" << total_val_ << endl;

    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}



