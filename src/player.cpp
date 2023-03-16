#include "player.h"

#include <iostream>

using namespace std;

player::player()
{
    _list = new list<int>();
    restart();
}

bool player::checkCondiction()
{        
    if (_list->empty()){
        restart();
    }    

    int bet = getBet();
    if (bet < 5 || bet > 4000){
        restart();
    }
    return true;
}

void player::restart()
{
    for(int i = 0; i < _list->size(); i++){
        _list->pop_front();
    }

    for(int i = 1; i < 5; i++){
        _list->push_front(i);
    }
}

void player::checkResult(bool result)
{
    int profit = getBet();
     
    if (result){        
        _account += profit;
        _list->push_front(profit);        
    } else{        
        _account -= profit;
         if (_list->size() >= 2 ){
            _list->pop_back();
            _list->pop_front();           
        } else{
            _list->pop_front();
        }      

        if (_list->empty()){
            restart();
        }  
    }   
}

void player::setSimple(Simple simple)
{
    _simple = simple;
}

Simple player::getSimple()
{
    return _simple;
}

int player::getBet()
{
    if (_list->size() == 1){
        return _list->front();
    } else {
        return _list->front() + _list->back();
    }
}

int player::getAccount()
{
    return _account;
}