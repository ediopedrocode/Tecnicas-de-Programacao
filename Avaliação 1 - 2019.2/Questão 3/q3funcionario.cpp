#include "q3funcionario.h"

using namespace std;

Funcionario::Funcionario(string n, double s){
    nome = n;
    salario = s;
}

string Funcionario::getNome(){
    return nome;
}

double Funcionario::getSalario(){
    return salario;
}