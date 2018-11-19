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
    Customer() { arrive = processtime = 0; }

    void set(long when);

    long when() const { return arrive; }

    int ptime() const { return processtime; }
};

typedef Customer Item;

class Queue {
private:
    struct Node {
        Item item;
        struct Node *next;
    };
    enum {
        Q_SIZE = 10
    };
    Node *front;
    Node *rear;
    int items;
    const int qsize;

};

#endif //CPPPRIMERPLUS_QUEUE_H
