//
// Created by Richard on 2018/11/8.
//

#ifndef CPPPRIMERPLUS_EXERCISE_H
#define CPPPRIMERPLUS_EXERCISE_H

#include <iostream>
#include <string>

using namespace std;

// The chapter4
struct CandyBar {
    string name;
    double weight;
    int calories;
};

void ShowNameAge();

void ShowCandyBar();

// The chapter8
struct free_throws {
    string name;
    int made;
    int attempts;
    float percent;
};

void TestSwap();
void StrtRef();

#endif //CPPPRIMERPLUS_EXERCISE_H
