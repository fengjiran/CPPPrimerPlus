//
// Created by Richard on 2018/11/8.
//
#include "../header/exercise.h"

void swapr(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void swapp(int *p, int *q) {
    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;
}

void swapv(int a, int b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void TestSwap() {
    int wallet1 = 100;
    int wallet2 = 350;

    cout << "wallet1 = " << wallet1;
    cout << " wallet2 = " << wallet2 << endl;

    cout << "Using references to swap contents:\n";
    swapr(wallet1, wallet2);
    cout << "wallet1 = " << wallet1;
    cout << " wallet2 = " << wallet2 << endl;

    cout << "Using pointer to swap contents:\n";
    swapp(&wallet1, &wallet2);
    cout << "wallet1 = " << wallet1;
    cout << " wallet2 = " << wallet2 << endl;

    cout << "Trying to use passing by value:\n";
    swapv(wallet1, wallet2);
    cout << "wallet1 = " << wallet1;
    cout << " wallet2 = " << wallet2 << endl;
}