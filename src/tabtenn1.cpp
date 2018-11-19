//
// Created by richard on 2018/11/19.
//
#include <iostream>
#include "../header/tabtenn1.h"
using std::cout;

TableTennisPlayer::TableTennisPlayer(const string &fn,
                                     const string &ln,
                                     bool ht) : firstname(fn),
                                                lastname(ln),
                                                hasTable(ht) {}

void TableTennisPlayer::GetName() const {
    cout << lastname << ", " << firstname;

}

RatedPlayer::RatedPlayer(unsigned int r,
                         const string &fn,
                         const string &ln,
                         bool ht) : TableTennisPlayer(fn, ln, ht) {
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r,
                         const TableTennisPlayer &tp) : TableTennisPlayer(tp) {
    rating = r;

}

