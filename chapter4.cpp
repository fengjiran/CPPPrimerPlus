//
// Created by Richard on 2018/11/8.
//
#include <iostream>
#include <string>
#include "exercise.h"

using namespace std;

void ShowNameAge() {
    string first_name;
    string last_name;

    cout << "What is your first name? ";
    getline(cin, first_name);

    cout << "What's your last name? ";
    getline(cin, last_name);

    char grade;
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    grade++;

    int age;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << last_name << ", "
         << first_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
}
