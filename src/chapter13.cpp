//
// Created by richard on 2018/11/19.
//

#include <iostream>
#include "../header/tabtenn1.h"

using std::cout;
using std::endl;

void usett1() {
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
    rplayer1.GetName();

    if (rplayer1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";

    player1.GetName();

    if (player1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";

    cout << "Name: ";
    rplayer1.GetName();
    cout << "; Rating: " << rplayer1.Rating() << endl;

    RatedPlayer rplayer2(1212, player1);
    cout << "Name: ";
    rplayer2.GetName();
    cout << "; Rating: " << rplayer2.Rating() << endl;

}