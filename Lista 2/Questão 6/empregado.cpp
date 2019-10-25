#include <iostream>
#include "empregado.h"

using namespace std;

Empregado::Empregado(string a, string b, float c){
    setNome(a);
    setSobrenome(b);
    setSalarioMensal(c);
}

void Empregado::setNome(string n){
    nome = n;
}

string Empregado::getNome(){
    return nome;
}

void Empregado::setSobrenome(string sn){
    sobrenome = sn;
}

string Empregado::getSobrenome(){
    return sobrenome;
}

void Empregado::setSalarioMensal(float sm){
    if (sm<0) {
        salario_mensal = 0;
    }else{
        salario_mensal = sm;
    }
}

float Empregado::getSalarioMensal(){
    return salario_mensal;
}

void Empregado::mostrarSalarioAnual(float equivalencia){
    cout << getNome() << " " << getSobrenome() 
    << " tem o salario anual de " << getSalarioMensal()*12*equivalencia << " reais." << endl;
}