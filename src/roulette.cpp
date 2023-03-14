#include "roulette.h"
#include <cstdlib>
#include <time.h>

roulette::roulette()
{
}

int roulette::getValue()
{
    // Providing a seed value
	srand((unsigned) time(NULL));
    return rand() % MAX_NUMBER;
}

roulette::~roulette()
{
}
