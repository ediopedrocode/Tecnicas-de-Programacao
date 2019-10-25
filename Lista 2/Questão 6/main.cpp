#include <iostream>
#include "empregado.h"

using namespace std;

int main(){
    Empregado empregado1("Cezar", "Salles", 3000);
    Empregado empregado2("Maria", "Narciza", 2000);

    empregado1.mostrarSalarioAnual(1.00);
    empregado2.mostrarSalarioAnual(1.00);

    cout << "Os empregados receberam um aumento de 10%." << endl;
    cout << "Salario reajustado: " << endl;

    empregado1.mostrarSalarioAnual(1.10);
    empregado2.mostrarSalarioAnual(1.10);

    return 0;
}