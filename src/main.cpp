#include <iostream>

#include "roulette/roulette.h"
#include "roulette/number.h"
#include "roulette/simplebet.h"
#include "player/player.h"

#define N 1000000
#define P 6

using namespace std;

char letters [] = {'A', 'B', 'C', 'D', 'E', 'F'};

// Simulate 6 players playing the roulette game and print
// the state of their account after playing 10000 times.

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
    players[2]->setNumber(MAJOR); // Player C bets PAIR.
    players[3]->setNumber(MINOR); // Player D bets ODD.
    players[4]->setNumber(PAIR); // Player E bets MAJOR.
    players[5]->setNumber(ODD); // Player F bets MINORS.

    for (int i = 0; i < N; i++){
       roulette.play(players);
    }

    for (int j = 0; j < P; j++){
        player* p = players[j];
        cout << "the account of player " << letters[j] << " is " << p->getAccount() << endl;
    }   
}