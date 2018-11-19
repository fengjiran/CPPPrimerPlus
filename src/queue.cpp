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
    if (this->isfull())
        return false;
    Node *add = new Node;
    add->item = item;
    add->next = nullptr;
    this->items++;
    if (this->front == nullptr)
        this->front = add;
    else
        this->rear->next = add;
    this->rear = add;
    return true;
}

bool Queue::dequeue(Item &item) {
    if (this->front == nullptr)
        return false;
    item = this->front->item;
    this->items--;
    Node *temp = this->front;
    this->front = this->front->next;
    delete temp;
    if (this->items == 0)
        this->rear = nullptr;
    return true;
}

void Customer::set(long when) {
    this->processtime = std::rand() % 3 + 1;
    this->arrive = when;

}
