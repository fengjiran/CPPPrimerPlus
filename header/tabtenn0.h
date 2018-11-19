//
// Created by richard on 2018/11/19.
//

#ifndef CPPPRIMERPLUS_TABTENN0_H
#define CPPPRIMERPLUS_TABTENN0_H

#include <string>

using std::string;

class TableTennisPlayer {
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string &fn = "none",
                      const string &ln = "none",
                      bool ht = false);

    void GetName() const;

    bool HasTable() const { return this->hasTable; }

    void ResetTable(bool v) { this->hasTable = v; }
};

#endif //CPPPRIMERPLUS_TABTENN0_H
