#ifndef __SIMPLEBET__
#define __SIMPLEBET__

#include <vector>
#include "number.h"
#include "rules.h"

/*
    A concrete implementation of rules to play with simple bets.
*/
class simplebet: public rules
{
private:
    static const std::vector<int> redNumbers;
    static bool lookInRedNumbers(int val);

public:
    bool getResult(Number number, int val);
};

#endif