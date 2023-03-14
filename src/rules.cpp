#include "rules.h"



bool rules::getResult(Simple bet, int result)
{
    switch (bet)
    {
    case RED:
        return ;
    case BLACK:
        return !getResult(RED, result);

}