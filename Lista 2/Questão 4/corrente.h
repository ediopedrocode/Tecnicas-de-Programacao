#include <iostream>
#include "conta.h"

using namespace std;

class ContaCorrente : public Conta {
    private:
        float limite;
    public:
        ContaCorrente();
        ContaCorrente(float l, float sld);
        void setLimite(float lm);
        float getLimite();

        void mostrarDados();
};