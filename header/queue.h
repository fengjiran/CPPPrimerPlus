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

#endif //CPPPRIMERPLUS_QUEUE_H
