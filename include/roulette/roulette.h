#ifndef __ROULETTE__
#define __ROULETTE__

#include "rules.h"
#include "number.h"
#include "player/player.h"
#include <list>

using namespace std;

class roulette
{
private:
    const int MAX_NUMBER = 37;
    static const int MAX_NUMBER_PLAYERS = 6;
    rules* _rules;
public:  
    void play(player* players[MAX_NUMBER_PLAYERS]);
    roulette(rules* rules);
};

#endif