#ifndef __PLAYER__
#define __PLAYER__


#include <list>
#include "roulette/number.h"

/* A player has as state: 
  - _list: a list of numbers
  - _number: the kind of number he will choose
  - _account: state of his money
*/

class player
{
private:
    int _account = 0;
    std::list<int>* _list;
    int getBet();
    Number _number;    
    void restart();

public:
    player();
    void checkResult(bool result);
    bool checkCondiction(int min, int max);
    void setNumber(Number number);
    Number getNumber();
    int getAccount();
};



#endif