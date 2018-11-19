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
