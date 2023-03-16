#include "rules.h"
#include <algorithm>
#include <iostream>

const std::vector<int> rules::redNumbers = {1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36};

bool rules::lookInRedNumbers(int val)
{
    return std::find(redNumbers.begin(), redNumbers.end(), val) != redNumbers.end();
}

bool rules::getResult(Simple simple, int result)
{
    if (result == 0){
        return false;
    }

    switch (simple)
    {
    case RED:
        return lookInRedNumbers(result);

    case BLACK:
        return !lookInRedNumbers(result);

    case PAIR:
        return result % 2 == 0;

    case NONE:
        return result % 2 != 0;
    
    case MAJOR:
        return result > 16;
    
    case MINORS:
        return result <= 16;

    default:
        return false;
    }
}