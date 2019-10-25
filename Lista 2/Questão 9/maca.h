#ifndef MACA_H
#define MACA_H
#include <iostream>
#include "fruta.h"

using namespace std;

class Maca : public Fruta{
    private:
    public:
        Maca();
        Maca(string color);
};

#endif