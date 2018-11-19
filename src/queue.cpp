//
// Created by richard on 2018/11/19.
//

#include <cstdlib>
#include "../header/queue.h"

Queue::Queue(int qs) : qsize(qs) {
    this->front = nullptr;
    this->rear = nullptr;
    this->items = 0;

}

Queue::~Queue() {
    Node *temp;
    while (front != nullptr) {
        temp = front;
        front = front->next;
        delete temp;
    }

}
