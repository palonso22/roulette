#include "roulette/simplebet.h"
#include "roulette/number.h"


#include <algorithm>
#include <iostream>

using namespace std;

const vector<int> simplebet::redNumbers = {1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36};

bool simplebet::lookInRedNumbers(int val)
{
    return find(redNumbers.begin(), redNumbers.end(), val) != redNumbers.end();
}

// Compute if the player wins or loses according to his bet and
// choosen number by the roulette.    
bool simplebet::getResult(Number number, int val)
{
    // If the val is 0, the player loses.
    if (val == 0){
        return false;
    }

    switch (number)
    {
    case RED:
        return lookInRedNumbers(val);

    case BLACK:
        return !lookInRedNumbers(val);

    case PAIR:
        return val % 2 == 0;

    case ODD:
        return val % 2 != 0;
    
    case MAJOR:
        return val > 16;
    
    case MINOR:
        return val <= 16;

    default:
        return false;
    }
}