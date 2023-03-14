#ifndef __RULES__
#define __RULES__



enum Simple
{
    RED, BLACK, PAIR, NONE, MAJOR, MINORS
};


class rules
{
private:
public:
    static bool getResult(Simple bet, int result);
};

#endif