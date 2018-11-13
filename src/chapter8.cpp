//
// Created by Richard on 2018/11/8.
//
#include "../header/exercise.h"

using namespace std;

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

string version1(const string &s1, const string &s2) {
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}

const string &version2(string &s1, const string &s2) {
    s1 = s2 + s1 + s2;
    return s1;
}

void TestTwoSwap() {
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j << ".\n";

    job sue = {"Susan Yaffee", 73000.60, 7};
    job sidney = {"Sidney Taffee", 78060.72, 9};
    cout << "Before job swapping:\n";
    Show(sue);
    Show(sidney);

    Swap(sue, sidney);
    cout << "After job swapping:\n";
    Show(sue);
    Show(sidney);
}

template<typename T>
void Swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template<>
void Swap(job &j1, job &j2) {
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;

    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(const job &j) {
    cout << j.name << ": $" << j.salary
         << " on floor " << j.floor << endl;
}

void Temptempover() {
    int things[6] = {13, 31, 103, 301, 310, 130};
    debts mr_E[3] = {
            {"Ima Wolfe", 2400.0},
            {"Ura Foxe",  1300.0},
            {"Iby Stout", 1800.0}
    };

    double *pd[3];
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    cout << "Listing Mr.E's counts of things:\n";
    ShowArray(things, 6);

    cout << "Listing Mr.E's debts:\n";
    ShowArray(pd, 3);
}

template<typename T>
void ShowArray(T arr[], int n) {
    cout << "template A\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

template<typename T>
void ShowArray(T *arr[], int n) {
    cout << "template B\n";
    for (int i = 0; i < n; i++)
        cout << *arr[i] << ' ';
    cout << endl;
}