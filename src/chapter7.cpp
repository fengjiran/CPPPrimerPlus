//
// Created by Richard on 2018/11/11.
//
#include "../header/exercise.h"

double ComptHarmonicAve(double x, double y) {
    return 2.0 * x * y / (x + y);
}

void ex1() {
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    while (true) {
        cout << "input x: ";
        cin >> x;
        cout << endl;

        cout << "input y: ";
        cin >> y;
        cout << endl;

        if (x == 0 || y == 0)
            break;
        else {
            result = ComptHarmonicAve(x, y);
            cout << "The harmonic average: " << result << endl;
        }
    }
}

int FillArray(double arr[], int limit) {
    double temp;
    int i;
    for (i = 0; i < limit; i++) {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin) {  // bad input
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        } else if (temp < 0)
            break;
        arr[i] = temp;
    }

    return i;
}