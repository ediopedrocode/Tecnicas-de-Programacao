#include <iostream>

using namespace std;

class Conta{
    private:
        float saldo;
    public:
        Conta(float s);

        void setSaldo(float sd);
        float getSaldo();

        void fazerDeposito();

        void fazerSaque();

        void mostrarSaldo();
};