//
// Created by Richard on 2018/11/15.
//

#include <iostream>
#include "../header/strngbad.h"
#include "../header/string1.h"

const int ArSize = 10;
const int MaxLen = 81;

using std::cout;
using std::cin;
using std::endl;

void Callme1(StringBad &rsb) {
    cout << "String passed by reference:\n";
    cout << "   \"" << rsb << "\"\n";
}

void Callme2(StringBad sb) {
    cout << "String passed by value:\n";
    cout << "   \"" << sb << "\"\n";
}

void Vegnews() {
    {
        cout << "Starting an inner block.\n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leave Bowl for Dollars");

        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;

        Callme1(headline1);
        cout << "headline1: " << headline1 << endl;
        Callme2(headline2);
        cout << "headline2: " << headline2 << endl;

        cout << "Initialize one object to another:\n";
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another:\n";
        StringBad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";

    }

    cout << "End of Vegnews()\n";
}

void Sayings1() {
    String name;
    cout << "Hi, what's your name?\n";
    cin >> name;

    cout << name << ", please enter up to " << ArSize
         << " short sayings <empty line to quit>:\n";
    String sayings[ArSize];
    char temp[MaxLen];
    int i;
    for (i = 0; i < ArSize; i++) {
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')
            break;
        else
            sayings[i] = temp;
    }

    int total = i;
    if (total > 0) {
        cout << "Here are your sayings:\n";
        for (i = 0; i < total; i++)
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        int shortest = 0;
        int first = 0;
        for (i = 0; i < total; i++) {
            if (sayings[i].length() < sayings[shortest].length())
                shortest = i;
            if (sayings[i] < sayings[first])
                first = i;
        }
        cout << "Shortest saying:\n" << sayings[shortest] << endl;
        cout << "First alphabetically:\n" << sayings[first] << endl;
        cout << "This program used " << String::HowMany()
             << " String objects. Bye.\n";

    } else
        cout << "No input! Bye.\n";
}