#ifndef __RULES__
#define __RULES__

#include <vector>
#include "bets.h"


class rules
{
private:
    static const std::vector<int> redNumbers;
    static bool lookInRedNumbers(int val);

public:
    static bool getResult(Simple bet, int result);
};

#endif