//
// Created by richard on 2018/11/25.
//

#ifndef CPPPRIMERPLUS_WORKER0_H
#define CPPPRIMERPLUS_WORKER0_H

#include <string>

using std::string;

class Worker {  // an abstract base class
private:
    string fullname;
    long id;
public:
    Worker() : fullname("no one"), id(0L) {}

    Worker(const string &s, long n) : fullname(s), id(n) {}

    virtual ~Worker() = 0;

    virtual void Set();

    virtual void Show() const;
};

class Waiter : public Worker {
private:
    int panache;
public:
    Waiter() : Worker(), panache(0) {}

    Waiter(const string &s, long n, int p = 0)
            : Worker(s, n), panache(p) {}

    explicit Waiter(const Worker &wk, int p = 0)
            : Worker(wk), panache(p) {}

    void Set();

    void Show() const;
};

#endif //CPPPRIMERPLUS_WORKER0_H
