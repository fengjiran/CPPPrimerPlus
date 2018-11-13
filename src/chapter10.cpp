//
// Created by Richard on 2018/11/9.
//
#include "../header/stock00.h"

using namespace std;

void UseStock0() {
    cout << "Using constructors to create new objects\n";
    Stock stock1("NanoSmart", 12, 20.0);
    stock1.Show();

    Stock stock2 = Stock("Boffo Objects", 2, 2.0);
    stock2.Show();

    cout << "Assigning stock1 to stock2:\n";
    stock2 = stock1;
    cout << "Listing stock1 and stock2:\n";
    stock1.Show();
    stock2.Show();

    cout << "Using a constructor to reset an object\n";
    stock1 = Stock("Nifty Foods", 10, 50.0);
    cout << "Revised stock1:\n";
    stock1.Show();
    cout << "Done!\n";
}

void UseStock2() {
    const int STKS = 4;
    Stock stocks[STKS] = {
            Stock("NanoSmart", 12, 20.0),
            Stock("Boffo Objects", 200, 2.0),
            Stock("Monolithic Obelisks", 130, 3.25),
            Stock("Fleep Enterprises", 60, 6.5)
    };
    cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STKS; st++)
        stocks[st].Show();

    const Stock *top = &stocks[0];
    for (st = 1; st < STKS; st++)
        top = &top->GetTopVal(stocks[st]);
//        top = &stocks[st].GetTopVal(*top);

    cout << "\nMost valuable holding:\n";
    top->Show();
}