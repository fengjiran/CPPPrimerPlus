//
// Created by richard on 2018/11/14.
//
#include "../header/stack.h"

Stack::Stack() {
    top = 0;
}

bool Stack::IsEmpty() const {
    return top == 0;
}

bool Stack::IsFull() const {
    return top == MAX;
}

bool Stack::Push(const Item &item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    } else
        return false;
}

bool Stack::Pop(Item &item) {
    if (top > 0) {
        item = items[--top];
        return true;
    } else
        return false;
}

