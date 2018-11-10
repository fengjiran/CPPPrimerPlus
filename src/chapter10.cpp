//
// Created by Richard on 2018/11/9.
//
#include "../header/stock00.h"

void UseStack0() {
    Stock fluffy_the_cat;
    fluffy_the_cat.Acquire("NanoSmart", 20, 12.50);
    fluffy_the_cat.Show();
    fluffy_the_cat.Buy(15, 18.125);
    fluffy_the_cat.Show();
    fluffy_the_cat.Sell(400, 20.00);
    fluffy_the_cat.Show();
    fluffy_the_cat.Buy(300000, 40.125);
    fluffy_the_cat.Show();
    fluffy_the_cat.Sell(300000, 0.125);
    fluffy_the_cat.Show();
}
