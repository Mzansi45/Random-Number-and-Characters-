#include "randomnumber.h"

RandomNumber::RandomNumber()
{
    //ctor
}

RandomNumber::~RandomNumber()
{
    //dtor
}

RandomNumber::RandomNumber(const RandomNumber& Original)
{
    //copy ctor
}

int RandomNumber::Number(int minimum,int maximum)
{
    srand(time(nullptr));
    int range = maximum - minimum +1;
    return rand() % range +minimum;
}
