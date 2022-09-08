#ifndef RANDOMNUMBER_H
#define RANDOMNUMBER_H

#include <ctime>
#include <iostream>

using namespace std;

class RandomNumber
{
    public:
        RandomNumber();
        virtual ~RandomNumber();
        RandomNumber(const RandomNumber& Original);
        int Number(int minimum,int maximum);
    private:
};

#endif // RANDOMNUMBER_H
