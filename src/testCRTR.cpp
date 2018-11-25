//
// Created by GUO on 2018/11/25.
//
#include "../header/crtr.h"

void testCrtr() {
    Derived d;
    Base<Derived> *b = &d;
    b->show();
}
