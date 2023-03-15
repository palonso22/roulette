#include "player.h"




player::player()
{}

bool player::checkCondiction()
{
    int bet = _list.front() + _list.back();
    if (bet < 5 && bet > 4000){
        restart();
    }
    return true;
}

void player::restart()
{
    for(int i = 0; i < _list.size(); i++){
        _list.pop_front();
    }

    for(int i = 1; i < 5; i++){
        _list.push_front(i);
    }
}

void player::checkResult(bool result)
{
    int profit = _list.back() + _list.front();
    if (result){        
        _account += profit;
        _list.push_front(profit);        
    } else{
        _account -= profit;
        _list.pop_back();
        _list.pop_front();
    }
}

void player::setBet(Simple bet)
{
    _bet = bet;
}

Simple player::getBet()
{
    return _bet;
}
