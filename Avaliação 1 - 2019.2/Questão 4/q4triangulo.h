#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "q4forma.h"

#include <iostream>

using namespace std;

class Triangulo : public Forma{
    public:
        Triangulo(float c, float d);
        float area();
};

#endif