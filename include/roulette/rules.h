#ifndef __RULES__
#define __RULES__

#include "number.h"

// This abstraction represent the rules to determine
// if the player won
class rules
{
public:   
    // Define if the bet was successful
    virtual bool getResult(Number number, int result) = 0;
};

#endif