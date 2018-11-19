//
// Created by richard on 2018/11/19.
//

#ifndef CPPPRIMERPLUS_QUEUE_H
#define CPPPRIMERPLUS_QUEUE_H

class Customer {
private:
    long arrive;
    int processtime;
public:
    Customer() {
        this->arrive = 0;
        this->processtime = 0;
    }

    void set(long when);

    long when() const { return this->arrive; }

    int ptime() const { return this->processtime; }
};

typedef Customer Item;

class Queue {
private:
    struct Node {
        Item item;
        struct Node *next = nullptr;
    };
    enum {
        Q_SIZE = 10
    };
    Node *front = nullptr;
    Node *rear = nullptr;
    int items;
    const int qsize;

    Queue(const Queue &q) : qsize(0) {}

    Queue &operator=(const Queue &q) { return *this; }

public:
    Queue(int qs = Q_SIZE);

    ~Queue();

    bool isempty() const;

    bool isfull() const;

    int queuecount() const;

    bool enqueue(const Item &item);

    bool dequeue(Item &item);

};

#endif //CPPPRIMERPLUS_QUEUE_H
