#include "roulette.h"
#include <cstdlib>
#include <time.h>


int roulette::play()
{	
    return rand() % MAX_NUMBER;
}

roulette::roulette()
{
    srand((unsigned) time(NULL));
}
