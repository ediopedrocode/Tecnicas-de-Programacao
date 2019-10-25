#include <iostream>

using namespace std;

class Empregado{
    private:
        string nome;
        string sobrenome;
        float salario_mensal;
    public:
        Empregado(string a, string b, float c);

        void setNome(string n);
        string getNome();

        void setSobrenome(string sn);
        string getSobrenome();

        void setSalarioMensal(float sm);
        float getSalarioMensal();

        void mostrarSalarioAnual(float equivalencia);
};