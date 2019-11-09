#ifndef RETANGULO_H
#define RETANGULO_H
#include "q4forma.h"

#include <iostream>

using namespace std;

class Retangulo : public Forma{
    public:
        Retangulo(float c, float d);
        float area();
};

#endif