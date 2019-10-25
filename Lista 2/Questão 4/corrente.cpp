#include <iostream>
#include "corrente.h"

using namespace std;

void ContaCorrente::setLimite(float lm){
    if (lm >= 0){
        limite = lm;
    }else{
        limite = 0;
    }
}

float ContaCorrente::getLimite(){
    return limite;
}

ContaCorrente::ContaCorrente() : Conta(){
    setLimite(0);
}

ContaCorrente::ContaCorrente(float s,float l) : Conta(s){
    setLimite(l);
}

void ContaCorrente::mostrarDados(){
    cout << "Seu saldo é: " << getSaldo() << " reais." << endl;
    cout << "Seu limite é: " << getLimite() << " reais." << endl;
}