#ifndef __PLAYER__
#define __PLAYER__


#include <list>
#include "bets.h"

class player
{
private:
    int _account = 0;
    std::list<int>* _list;
    int getBet();
    Simple _simple;
    
    void restart();

public:
    player();
    void checkResult(bool result);
    bool checkCondiction();
    void setSimple(Simple simple);
    Simple getSimple();
    int getAccount();
};



#endif