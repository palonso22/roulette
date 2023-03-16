#include "roulette/roulette.h"
#include <cstdlib>
#include <time.h>

#include <iostream>

void roulette::play(player* players[MAX_NUMBER_PLAYERS])
{
    int randomNumber = rand() % MAX_NUMBER;
    
    for(int i = 0; i < MAX_NUMBER_PLAYERS; i++){
        player* p = players[i];
        if (p->checkCondiction(getMinBet(), getMaxBet())){
            bool result = _rules->getResult(p->getNumber(), randomNumber);
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
