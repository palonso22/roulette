#include "roulette/roulette.h"
#include <cstdlib>
#include <time.h>

#include <iostream>

void roulette::play(player* players[MAX_NUMBER_PLAYERS])
{
    int randomNumber = rand() % MAX_NUMBER;
    std::cout << "number is " << randomNumber;
    
    for(int i = 0; i < MAX_NUMBER_PLAYERS; i++){
        player* p = players[i];
        if (p->checkCondiction()){
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
