//
// Created by Richard on 2018/11/25.
//
#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

void testArmadillo() {
    cout << "hello world\n";
    mat A = randu<mat>(4, 5);
    mat B = randu<mat>(4, 5);

    mat C = A * trans(B);
    cout << C << endl;
}
