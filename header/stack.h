//
// Created by richard on 2018/11/14.
//

#ifndef CPPPRIMERPLUS_STACK_H
#define CPPPRIMERPLUS_STACK_H

typedef unsigned long Item;

class Stack {
private:
    static const int MAX = 10;
    Item items[MAX];  // hold stack items
    int top;  // index for top stack item
public:
    Stack();
    bool IsEmpty() const;
    bool IsFull() const;
    bool Push(const Item & item);  // add item to stack
    bool Pop(Item &item);  // pop top into item
};
#endif //CPPPRIMERPLUS_STACK_H
