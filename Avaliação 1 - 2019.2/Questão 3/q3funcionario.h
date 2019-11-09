#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>

using namespace std;

class Funcionario{
    private:
        string nome;
        double salario;
    public:
        Funcionario(string n, double s);

        string getNome();
        double getSalario();
};

#endif