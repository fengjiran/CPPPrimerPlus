//
// Created by richard on 2018/11/24.
//
#include <iostream>
#include <mkl.h>
using namespace std;

void testMKL() {
    int a = 1;
    int b = 1;
    int n = 5;
    auto *A = (float*)mkl_malloc(n * 1 * sizeof(float), 64);
//    auto *B = (float*)mkl_malloc(n * 1 * sizeof(float), 64);

    cout << "The 1st vector is ";
    for (int i = 0; i < n; i++) {
        A[i] = i;
        cout << A[i];
    }

    mkl_free(A);

}
