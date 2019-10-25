#ifndef BANANA_H
#define BANANA_H
#include <iostream>
#include "fruta.h"

using namespace std;

class Banana : public Fruta{
    private:
    public:
        Banana();
        Banana(string color);
};

#endif