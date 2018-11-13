//
// Created by Richard on 2018/11/8.
//

#ifndef CPPPRIMERPLUS_EXERCISE_H
#define CPPPRIMERPLUS_EXERCISE_H

#include <iostream>
#include <string>

//using namespace std;

// The chapter4
struct CandyBar {
    std::string name;
    double weight;
    int calories;
};

void ShowNameAge();

void ShowCandyBar();

// The chapter7
void ex1();

// The chapter8
struct free_throws {
    std::string name;
    int made;
    int attempts;
    float percent;
};

void TestSwap();

void StrtRef();

template<typename T>
void Swap(T &a, T &b);

struct job {
    char name[40];
    double salary;
    int floor;
};

template<>
void Swap(job &j1, job &j2);

void Show(const job &j);

void TestTwoSwap();

template<typename T>
void ShowArray(T arr[], int n);

template<typename T>
void ShowArray(T *arr[], int n);

struct debts {
    char name[50];
    double amount;
};

void Temptempover();

// The chapter10
void UseStock0();

#endif //CPPPRIMERPLUS_EXERCISE_H
