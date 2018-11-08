//
// Created by Richard on 2018/11/8.
//
#include "../header/exercise.h"

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

void ShowCandyBar() {
    CandyBar snack[3] = {{"Mocha Munch", 2.3,  350},
                         {"Bambi",       0.5,  22},
                         {"Godzilla",    20.0, 565}};

    for (int i = 0; i < 3; i++) {
        cout << snack[i].name << endl;
        cout << snack[i].weight << endl;
        cout << snack[i].calories << endl;
    }
}