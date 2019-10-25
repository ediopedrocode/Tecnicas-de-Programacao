#include <iostream>
#include "banana.h"

using namespace std;

Banana::Banana(){
    setCor("amarela");
    setNome("banana");
}

Banana::Banana(string color){
    setCor(color);
    setNome("banana");
}