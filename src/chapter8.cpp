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

void Display(const free_throws &ft) {
    cout << "Name: " << ft.name << endl;
    cout << " Made: " << ft.made << '\t';
    cout << "Attempts: " << ft.attempts << '\t';
    cout << "Percent: " << ft.percent << endl;
}

void SetPc(free_throws &ft) {
    if (ft.attempts != 0)
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    else
        ft.percent = 0;
}

free_throws &Accumulate(free_throws &target, const free_throws &source) {
    target.attempts += source.attempts;
    target.made += source.made;
    SetPc(target);
    return target;
}

void StrtRef() {
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 18};
    free_throws three = {"Minnie Max", 7, 9};
    free_throws four = {"Whily Looper", 5, 9};
    free_throws five = {"Long Long", 6, 14};
    free_throws team = {"Throwgoods", 0, 0};

    free_throws dup;  // no initialization

    SetPc(one);
    Display(one);
    Accumulate(team, one);
    Display(team);
    Display(Accumulate(team, two));

    Accumulate(Accumulate(team, three), four);
    Display(team);

    dup = Accumulate(team, five);
    cout << "Displaying team:\n";
    Display(team);
    cout << "Displaying dup after assignment:\n";
    Display(dup);
    SetPc(four);
    Accumulate(dup, five) = four;
    cout << "Displaying dup after ill-advised assinment:\n";
    Display(dup);

}