#include "roulette/roulette.h"
#include <cstdlib>
#include <time.h>

#include <iostream>

void roulette::play(player* players[MAX_NUMBER_PLAYERS])
{
    // Get a numbet between 0 and 36.
    int randomNumber = rand() % MAX_NUMBER;
        
    for(int i = 0; i < MAX_NUMBER_PLAYERS; i++){
        player* p = players[i];
        // Check if the player can bet, given min and max bet.
        if (p->checkCondiction(getMinBet(), getMaxBet())){
            // Using rules, check if player won or lost.
            bool result = _rules->getResult(p->getNumber(), randomNumber);
            // Pass the result to the player, so he can update his state.
            p->checkResult(result);
        }        
    }

}

roulette::roulette(rules* rules)
{
    _rules = rules;
    srand((unsigned) time(NULL));
}

int roulette::getMinBet()
{
    return _minBet;
}

int roulette::getMaxBet()
{
    return _maxBet;
}
