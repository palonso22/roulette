#include "roulette.h"
#include <cstdlib>
#include <time.h>


int roulette::play()
{
	srand((unsigned) time(NULL));
    return rand() % MAX_NUMBER;
}
