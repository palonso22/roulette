#include <iostream>

#include "roulette/roulette.h"
#include "roulette/number.h"
#include "roulette/simplebet.h"
#include "player/player.h"

#define N 10000
#define P 6

using namespace std;

char letters [] = {'A', 'B', 'C', 'D', 'E', 'F'};

int main() 
{        
    simplebet* rules = new simplebet();
    roulette roulette(rules);
    player* players[P];
    for (int i = 0; i < P; i++){
        players[i] = new player();        
    }    
    
    players[0]->setNumber(RED); // Player A bets RED.
    players[1]->setNumber(BLACK); // Player B bets BLACK.
    players[2]->setNumber(PAIR); // Player C bets PAIR.
    players[3]->setNumber(NONE); // Player D bets NONE.
    players[4]->setNumber(MAJOR); // Player E bets MAJOR.
    players[5]->setNumber(MINORS); // Player F bets MINORS.

    for (int i = 0; i < N; i++){
       roulette.play(players);
    }

    for (int j = 0; j < P; j++){
        player* p = players[j];
        cout << "the account of player " << letters[j] << " is " << p->getAccount() << endl;
    }   
}