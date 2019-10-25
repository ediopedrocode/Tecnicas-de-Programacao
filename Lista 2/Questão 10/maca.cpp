#include <iostream>
#include "maca.h"

using namespace std;

Maca::Maca(){
    setCor("vermelha");
    setNome("maçã");
}

Maca::Maca(string color){
    setCor(color);
    setNome("maçã");
}