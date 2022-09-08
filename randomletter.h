#ifndef RANDOMLETTER_H
#define RANDOMLETTER_H

#include "randomnumber.h"

class RandomLetter
{
    public:
        RandomLetter();
        virtual ~RandomLetter();
        RandomLetter(const RandomLetter& other);
        char Letter();

    private:
};

#endif // RANDOMLETTER_H
