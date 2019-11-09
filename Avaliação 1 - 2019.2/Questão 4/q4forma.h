#ifndef FORMA_H
#define FORMA_H

#include <iostream>

using namespace std;

class Forma{
    protected:
        float largura;
        float altura;
    public:
        Forma();
        Forma(float l, float a);
};

#endif