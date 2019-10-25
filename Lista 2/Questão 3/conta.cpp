#include <iostream>
#include "conta.h"

using namespace std;

Conta::Conta(float s){
    setSaldo(s);
}

void Conta::setSaldo(float sd){
    if (sd >= 0) {
        saldo = sd;
    } else {
        saldo = 0;
        cout << "ERRO! Saldo inicial invalido." << endl;
    }
}

float Conta::getSaldo(){
    return saldo;
}

void Conta::fazerDeposito(){
    float deposito;
    cout << "Quanto deseja depositar? ";
    cin >> deposito;
    saldo += deposito;
}

void Conta::fazerSaque(){
    float saque;
    
    cout << "Quanto deseja sacar? ";
    cin >> saque;
    if(saque>saldo){
        cout << "Saldo insuficiente." << endl;
    }else{
        saldo -= saque;
    }
}

void Conta::mostrarSaldo(){
    cout << "Seu saldo é: " << getSaldo() << " reais." << endl;
}