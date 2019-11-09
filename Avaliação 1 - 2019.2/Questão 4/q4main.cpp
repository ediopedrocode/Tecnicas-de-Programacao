#include "q4forma.h"
#include "q4triangulo.h"
#include "q4retangulo.h"

#include <iostream>

using namespace std;

int main(){
    Triangulo triangulo(4, 3);
    Retangulo retangulo(5, 6);

    cout << "A área do triângulo é " << triangulo.area() << " em unidades de área." << endl;
    cout << "A área do retângulo é " << retangulo.area() << " em unidades de área." << endl;

    return 0;
}