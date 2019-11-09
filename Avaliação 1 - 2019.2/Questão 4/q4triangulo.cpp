#include "q4triangulo.h"

using namespace std;

Triangulo::Triangulo(float c, float d){
    largura = c;
    altura = d;
}

float Triangulo::area(){
    return (largura*altura)/2;
}