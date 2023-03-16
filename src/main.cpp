#include <iostream>

#include "roulette.h"
#include "bets.h"
#include "player.h"

#define N 100000
#define P 6

using namespace std;

int main() 
{
    int ctos = 10;
    roulette r;
    player players[P];
    players[0].setSimple(RED);
    players[1].setSimple(BLACK);
    players[2].setSimple(PAIR);
    players[3].setSimple(NONE);
    players[4].setSimple(MAJOR);
    players[5].setSimple(MINORS);

    for(int i = 0; i < N; i++){
        int val = r.play();
        for(int j = 0; j < P; j++){
            player* p = &players[j];
            p->checkCondiction();        
            Simple simple = p->getSimple();
            p->checkResult(rules::getResult(simple, val));        
        }
    }

    for(int j = 0; j < P; j++){
        player* p = &players[j];
        cout << "the account of player " << j << " is " << p->getAccount() << endl;
    }   
}