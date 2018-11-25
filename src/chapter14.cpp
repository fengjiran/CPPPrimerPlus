//
// Created by richard on 2018/11/25.
//
#include <iostream>
#include "../header/worker0.h"

const int LIM = 4;

void worktest() {
    Waiter bob("Bob Apple", 314L, 5);
    Singer bev("Beverly Hills", 522L, 3);
    Waiter w_temp;
    Singer t_temp;

    Worker *pw[LIM] = {&bob, &bev, &w_temp, &t_temp};

    int i;
    for (i = 2; i < LIM; i++)
        pw[i]->Set();
    for (i = 0; i < LIM; i++) {
        pw[i]->Show();
        std::cout << std::endl;
    }
}