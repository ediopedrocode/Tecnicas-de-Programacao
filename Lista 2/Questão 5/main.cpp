#include <iostream>
#include "fatura.h"

using namespace std;

int main(){
    Fatura fatura("45532", "sabao em po", 3, 4.5);

    fatura.mostrarDados();

    return 0;
}