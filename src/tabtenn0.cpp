//
// Created by richard on 2018/11/19.
//

#include <iostream>
#include "../header/tabtenn0.h"

using std::cout;
using std::endl;

TableTennisPlayer::TableTennisPlayer(const string &fn,
                                     const string &ln,
                                     bool ht) : firstname(fn),
                                                lastname(ln),
                                                hasTable(ht) {}

void TableTennisPlayer::GetName() const {
    cout << lastname << ", " << firstname;

}
