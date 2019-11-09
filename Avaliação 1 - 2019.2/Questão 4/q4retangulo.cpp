#include "q4retangulo.h"

using namespace std;

Retangulo::Retangulo(float c, float d){
    largura = c;
    altura = d;
}

float Retangulo::area(){
    return largura*altura;
}