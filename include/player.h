#ifndef __PLAYER__
#define __PLAYER__


#include <list>
#include "bets.h"

class player
{
private:
    int _account = 0;
    std::list<int> _list{1,2,3,4,5};
    Simple _bet;
    
    void restart();

public:
    player(/* args */);
    void checkResult(bool result);
    bool checkCondiction();
    void setBet(Simple bet);
    Simple getBet();
};



#endif