#include <iostream>

#include "roulette/roulette.h"
#include "roulette/number.h"
#include "roulette/simplebet.h"
#include "player/player.h"

#define N 10000
#define P 6

using namespace std;

int main() 
{        
    simplebet* rules = new simplebet();
    roulette roulette(rules);
    player* players[P];
    for(int i = 0; i < P; i++){
        players[i] = new player();        
    }    
    players[0]->setNumber(RED);
    players[1]->setNumber(BLACK);
    players[2]->setNumber(PAIR);
    players[3]->setNumber(NONE);
    players[4]->setNumber(MAJOR);
    players[5]->setNumber(MINORS);

    for(int i = 0; i < 100; i++){
       roulette.play(players);
    }

    for(int j = 0; j < P; j++){
        player* p = players[j];
        cout << "the account of player " << j << " is " << p->getAccount() << endl;
    }   
}