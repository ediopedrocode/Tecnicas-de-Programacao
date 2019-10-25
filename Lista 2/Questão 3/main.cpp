#include <iostream>
#include "conta.h"

using namespace std;

int main(){
    cout << "Conta 1:" << endl;
    Conta conta1(-1000); //declaracao da conta 1  

    conta1.mostrarSaldo();
    conta1.fazerDeposito();
    conta1.fazerSaque();
    conta1.mostrarSaldo();

    cout << endl << "Conta 2:" << endl;
    Conta conta2(2500); //declaracao da conta 2

    conta2.mostrarSaldo();
    conta2.fazerDeposito();
    conta2.fazerSaque();
    conta2.mostrarSaldo();

    return 0;
}