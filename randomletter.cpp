#include "randomletter.h"

RandomLetter::RandomLetter()
{
    //ctor
}

RandomLetter::~RandomLetter()
{
    //dtor
}

RandomLetter::RandomLetter(const RandomLetter& other)
{
    //copy ctor
}

char RandomLetter::Letter()
{
    RandomNumber temp;
    char number = temp.Number(97,122);
    return number;
}
