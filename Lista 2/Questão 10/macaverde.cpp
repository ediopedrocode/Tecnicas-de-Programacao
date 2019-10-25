#include <iostream>
#include "macaverde.h"

using namespace std;

MacaVerde::MacaVerde():Maca(){
    setCor("verde");
    setNome("maçã-verde");
}

MacaVerde::MacaVerde(string cr):Maca(){
    setCor(cr);
    setNome("maçã-verde");
}