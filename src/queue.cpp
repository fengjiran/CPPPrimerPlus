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

bool Queue::isempty() const {
    return this->items == 0;
}

bool Queue::isfull() const {
    return this->items == this->qsize;
}

int Queue::queuecount() const {
    return this->items;
}

bool Queue::enqueue(const Item &item) {
    return false;
}
