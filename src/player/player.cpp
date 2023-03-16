#include "player/player.h"

#include <iostream>

using namespace std;

player::player()
{
    _list = new list<int>();
    restart();
}

// Check if the player's bet met between the bounds
bool player::checkCondiction(int min, int max)
{           
    int bet = getBet();
    if (bet < min || bet > max){
        restart();
    }
    return true;
}

// Set list to initial state
void player::restart()
{
    // Erase remaining elements.
    _list->clear();

    // Fill the list with initial elements.
    for(int i = 1; i < 5; i++){
        _list->push_front(i);
    }
}

void player::checkResult(bool result)
{
    int profit = getBet();
         
    if (result){ // Player won.

        // Add profit to the account.
        _account += profit;

        // Add number to the end of the list.
        _list->push_back(profit);        

    } else{   // Player lost. 

        // Discount profit of the account.
        _account -= profit;

        // If the list contains at least 2 elements, delete first and last element in list.
         if (_list->size() >= 2 ){            
            _list->pop_front();   
            _list->pop_back();        
        } else{
        // Else the list has only one element, delete it.
            _list->pop_front();
        }      

        // If not left numbers in list, restart it.
        if (_list->empty()){
            restart();
        }  
    }   
}

void player::setNumber(Number number)
{
    _number = number;
}

Number player::getNumber()
{
    return _number;
}

int player::getBet()
{

    // With one element in the list, the bet is the only number in it.
    if (_list->size() == 1){
        return _list->front();
    } else {
    
    // With al least 2 elements, the bet is the sum of the first and last number in the list
        return _list->front() + _list->back();
    }
}

int player::getAccount()
{
    return _account;
}